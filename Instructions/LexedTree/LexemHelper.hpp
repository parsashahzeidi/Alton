# pragma once

# include <ETC/Macros.hpp>
# include <ETC/BaseHelper.hpp>

namespace Alton
{
	namespace Lexer
	{
		// --- Lexem typedefs ---------------------
		// -- Tokens
		enum token
		{
			statement_end,
			dent,
			id,
			constant_integer,
			constant_string,
			filter,
			null_token
		};

		struct _lexem
		{
			token token_type = token::null_token;
			natural_num_t position_in_code = 0;
			text_t enumeration = str_to_text("");

			natural_num_t value = 0;
		};
		typedef struct _lexem lexem_t;
		typedef std::vector<lexem_t> lxm_vec;

		// -- Characer groups
		// All indexes for the character database
		// Note: Make sure that count is the last item
		enum cgroup
		{
			// Indexes
			numbs,  // Numbers
			chars,  // Characters
			opers,  // Operators
			spacs,  // Whitespaces / indents
			crlfs,  // Newlines
			cmnts,  // Comments
			scpos,  // Scope openings
			scpcs,  // Scope closings
			spcls,  // Special characters ( like backslash )
			invld,  // Invalid characters

			// Not a char group
			count
		};

		// An index structure for the character database
		struct _cgroup_index
		{
			cgroup g = cgroup::numbs;  // The 'g' stands for 'group'
			utfchar_t c = 0;  // The 'i' stands for 'character'
		};
		typedef struct _cgroup_index cgroupin;

		// --- LexemHelper class ------------------
		class LexemHelper: public BaseHelper<utfchar_t, text_t>
		{
			// --- Head
		private:
			bool _expecting_indent = false;
			std::vector<natural_num_t> previous_dents;

		public:
			lexem_t cache;
			lxm_vec tokenized;

			// --- Body
		private:
			/**
			 * @brief finds the character group of a character
			 * @param in Input string
			 *  
			 * @return The character group of str
			*/
			cgroup _find_char_group(utfchar_t in)
			{
				// --- Head ---

				const utfchar_t scpos_g[4] = 
				{
					'(', '{', '[', '\0'
				};

				const utfchar_t scpcs_g[4] = 
				{
					')', '}', ']', '\0'
				};

				const utfchar_t opers_g[14] = 
				{
					// Arithmetic,					00 ~ 03
					'+', '-', '*', '/',
					// Bit-Op,						04 ~ 06
					'^', '|', '&',
					// Comparing,					07 ~ 10
					'<', '>', '!', '=',
					// Logical,						11 ~ 12
					';', '.',
					// STRTERM / Null byte
					'\0'
				};

				const utfchar_t spcls_g[3] = 
				{
					'\\', '\r', '\0'
				};

				// --- Body ---
				// --- cgroup::chars ---
				if 
				(
					((in >= 'A') && (in <= 'Z')) ||  // If in is either A or Z or is between them
					((in >= 'a') && (in <= 'z')) ||  // If in is either a or z or is between them
					(in == '_')  // If in is equal to _
				)
					return cgroup::chars;

				// --- cgroup::numbs ---
				else if
				(
					(in >= '0') && (in <= '9')  // If in is either 0 or 9 or is between them
				)
					return cgroup::numbs;

				// --- cgroup::opers ---
				for (natural_num_t i = 0; opers_g[i] != 0; i++)
					if (in == opers_g[i])
						return cgroup::opers;

				// --- cgroup::scpos ---
				for (natural_num_t i = 0; scpos_g[i] != 0; i++)
					if (scpos_g[i] == in)
						return cgroup::scpos;
				
				// --- cgroup::scpcs ---
				for (natural_num_t i = 0; scpcs_g[i] != 0; i++)
					if (scpcs_g[i] == in)
						return cgroup::scpcs;



				// "Yolo-ing the 'switch' tactic" proceeds from here.
				switch (in)
				{
					// --- cgroup::spacs ---
				case '\t':
				case ' ':
					return cgroup::spacs;
				
					// --- cgroup::crlfs ---
				case ';':
				case '\n':
					return cgroup::crlfs;

					// --- cgroup::cmnts ---
				case '#':
					return cgroup::cmnts;
				
					// --- cgroup::spcls ---
				case ':':	
					return cgroup::spcls;

					// --- cgroup::invld ---
				default:
					return cgroup::invld;
				}
			}

			/**
			 * @brief Appends a lexem to the tokenized array
			 * @arg in Input lexem
			*/
			void __append(lexem_t in)
			{
				tokenized.push_back(in);
			}

			/**
			 * @brief Advances a lexem thru the text
			*/
			void __advance_token()
			{
				// --- Head ---
				cgroup group = _find_char_group(curr(0));
				lexem_t cache;

				// --- Body ---
				// Preparing 'cache'
				cache.position_in_code = it;

				// If no indent written after ':'
				if (_expecting_indent && ((group != cgroup::crlfs) && (group != cgroup::spacs)))
					ErrorHandling::raise_pos
					(
						ErrorHandling::Exceptions::DentMatchException(),
						out, it
					);
				
				// -- Comments --
				if (group == cgroup::cmnts)
				{
					// Escaping to a newline
					// Note:
					//	Escape sequences are allowed in comments;
					//	TODO: Remove this behaviour.
					while (_find_char_group(curr(0)) != cgroup::crlfs)
						virtually_advance();

					return;
				}

				// -- Whitespace token / Invisible token --
				else if (group == cgroup::spacs)
				{
					virtually_advance();
					return;
				}

				// -- Newline token --
				else if (group == cgroup::crlfs)
				{
					// Adding the new statement
					cache.token_type = token::statement_end;
					cache.enumeration = nl_txt;

					__append(cache);

					// Preparing for the indents
					cache.token_type = token::dent;
					cache.enumeration = str_to_text("\t");
					cache.position_in_code++;

					// Doing the indents; but resetting them if a newline is found
					while (_find_char_group(curr(0)) == cgroup::crlfs)
					{
						// Skipping the newline that we currently are on
						virtually_advance();

						// Checking for dem indents
						// Kinda head
						cache.value = 0;
						cache.position_in_code = it;

						// Kinda body
						while (_find_char_group(curr(0)) == cgroup::spacs)
						{
							cache.value++;
							virtually_advance();
						}

						// Escaping to a newline if a comment is present
						if (_find_char_group(curr(0)) == cgroup::cmnts)
							__advance_token();
					}

					// Checking for wrong dent conditions
					if (!_expecting_indent)
					{
						// Indent ( While not expecting one )
						if (cache.value > previous_dents.back())
							ErrorHandling::raise_pos(ErrorHandling::Exceptions::DentUnmatchException(), out, it);
						
						// Outdent
						else if (cache.value < previous_dents.back())
						{
							while (previous_dents.back() > cache.value)
								previous_dents.pop_back();

							// Checking if there is a similliar indent level before this indent
							if (cache.value != previous_dents.back())
								ErrorHandling::raise_pos
								(
									ErrorHandling::Exceptions::OutDentUnmatchException(),
									out, it
								);
						}
					}
					else
					{
						if (cache.value <= previous_dents.back())
							ErrorHandling::raise_pos(ErrorHandling::Exceptions::DentMatchException(), out, it);
						
						previous_dents.push_back(cache.value);

						_expecting_indent = false;
					}

					__append(cache);
					return;
				}

				// -- String constants --
				else if
				(
					(group == cgroup::opers) && 
					(
						(curr(0) == '\"') ||
						(curr(0) == '\'')
					)
				)
				{
					for (natural_num_t i = 0; curr(i) != curr(0); i++)
					{
						// Ignoring characters with a '\' behind them
						if (curr(i) == utfchar_t('\\'))
						{
							cache.enumeration += curr(i);
							i++;
						}
						cache.enumeration += curr(i);
					}

					virtually_advance(cache.enumeration.size());

					__append(cache);
					return;
				}

				// -- Identifiers --
				else if (group == cgroup::chars)
				{
					while (
						(_find_char_group(curr(0)) == cgroup::chars) ||
						(_find_char_group(curr(0)) == cgroup::numbs)
					)
					{
						cache.enumeration += curr(0);
						virtually_advance();
					}

					__append(cache);
					return;
				}

				// -- Specials --
				else if (group == cgroup::spcls)
				{
					// - Indenting by one -
					if (curr(0) == utfchar_t(':'))
					{
						_expecting_indent = true;
						return;
					}
					// No return; because specials can be misplaced.
				}

			
				ErrorHandling::raise_pos
				(
					ErrorHandling::Exceptions::InvalidSyntaxException(),
					out, it
				);
			}

			/**
			 * @brief Advances a line thru.
			*/
			void _advance_statement()
			{
				// Skipping a token since a statement
				// can't be smaller than 1 token.
				// This is also done to skip the previous newline token.
				__advance_token();

				// Skipping if the first token was whitespace
				while (tokenized.size() == 0)
					__advance_token();
				
				// Continuing with the token aftewards
				while
				(
					tokenized.back().token_type != token::statement_end
				)
				{ __advance_token(); }
			}

		public:
			void advance() = delete;

			/**
			 * @brief Advances without saving
			*/
			void virtually_advance() override
			{
				_require_operation();

				it++;

				// Skipping Escapes.
				if (curr(0) == '\\')
				{
					if (curr(1) == '\n')
						it++;
					else if (curr(1) == '\r' && curr(2) == '\n')
						it += 2;
					else 
						ErrorHandling::raise_pos
						(
							ErrorHandling::Exceptions::InvalidEscapeSequence(),
							out, it
						);
				}
				
				if (it > out.size())
					_exit_operation();
			}

			/**
			 * @brief Advances w/o keeping the current variable.
			*/
			void virtually_advance(num_t i) override
			{
				_require_operation();

				it += i;

				if (it >= out.size())
					_exit_operation();
			}

			/**
			 * @brief Advances a statement.
			*/
			void advance_word() override
			{
				_advance_statement();
			}

			// --- CTOR ~ DTOR
		public:
			LexemHelper(text_t code):
					BaseHelper(code)
			{
				previous_dents.push_back(0);
			}
		};
	}
}

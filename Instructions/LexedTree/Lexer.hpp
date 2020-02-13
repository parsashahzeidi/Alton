# pragma once

# include <ETC/Macros.hpp>
# include <Instructions/LexedTree/LexemHelper.hpp>


namespace Alton
{
	namespace Lexer
	{
		// --- Lexer class ------------------------
		class Lexer
		{
			// --- Head
		private:
			LexemHelper h = text_t(U"");

			// A list of valid operators in Alfie code follows:
			text_t valid_ops_temp[39] = {
				// Member-Access operators															00 ~ 02
				U".", U",", U"=",
				// Arithmetic operators																03 ~ 16
				U"++", U"+", U"--", U"-", U"+=", U"-=", U"/", U"*", U"/=", U"*=", U"%", U"%=", U"**", U"**=",
				// Bitwise operators																17 ~ 26
				U"^", U"^=", U"&", U"&=", U"|", U"|=", U">>", U"<<", U">>=", U"<<=",
				// Conditional operators															27 ~ 38
				U"&&", U"&&=", U"||", U"||=", U"<", U"<=", U">", U">=", U"==", U"!=", U"!", U"!="
			};

			cont_t<text_t> valid_operators = cont_t<text_t>(valid_ops_temp, 39);

			const text_t opers_g = 
				// Arithmetic,					00 ~ 04
				U"+-*/%"
				// Bit-Op,						05 ~ 07
				U"^|&"
				// Comparing,					08 ~ 11
				U"<>!="
				// Logical,						12 ~ 14
				U".,";

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
				// --- cgroup::characters ---
				if 
				(
					((in >= 'A') && (in <= 'Z')) ||  // If in is either A or Z or is between them
					((in >= 'a') && (in <= 'z')) ||  // If in is either a or z or is between them
					(in == '_')  // If in is equal to _
				)
					return cgroup::characters;

				// --- cgroup::numbers ---
				else if
				(
					(in >= '0') && (in <= '9')  // If in is either 0 or 9 or is between them
				)
					return cgroup::numbers;

				// --- cgroup::operators ---
				for (natural_num_t i = 0; i < opers_g.size(); i++)
					if (in == opers_g[i])
						return cgroup::operators;

				// "Yolo-ing the 'switch' tactic" proceeds from here.
				switch (in)
				{
					// --- cgroup::whitespaces ---
				case U'\t':
				case U' ':
					return cgroup::whitespaces;
				
					// --- cgroup::newlines ---
				case U'\n':
					return cgroup::newlines;

					// --- cgroup::comments ---
				case U'#':
					return cgroup::comments;
				
					// --- cgroup::scope_openings ---
				case U'(':
				case U'{':
				case U'[':
					return cgroup::scope_openings;

					// --- cgroup::scope_closings ---
				case U')':
				case U'}':
				case U']':
					return cgroup::scope_closings;

					// --- cgroup::specials ---
				case U':':
				case U';':
					return cgroup::specials;

					// --- cgroup::string_quotes ---
				case U'\'':
				case U'\"':
					return cgroup::string_quotes;

					// --- cgroup::invalids ---
				default:
					return cgroup::invalids;
				}
			}

			utfchar_t _find_estimated_scope_closing(utfchar_t in)
			{
				switch (in)
				{
				case U'{':
					return U'}';
				case U'[':
					return U']';
				case U'(':
					return U')';
				
				default:
					ErrorHandling::raise_internal
					(
						ErrorHandling::Exceptions::InputNotAScopeOpeningException()
					);
					return U'\0';
				}
			}

			/**
			 * @brief Advances a lexem thru the text
			*/
			void __advance_token()
			{
				// --- Head ---
				cgroup group = _find_char_group(h.curr(0));
				lexem_t cache;

				// --- Body ---
				// -- Preparing 'cache' --
				cache.position_in_code = h.it;
				
				// Note:
				//	The reason that we're not
				//	checking if _expecting_indent
				//	is on and we don't have a newline
				//	is that Alfie standards allow
				//	one-liner condition checks and
				//	one-liner loops. For example:
				//		eval 'while a==b: f(a); f(b)'
				//	is valid.

				// -- Comments --
				if (group == cgroup::comments)
				{
					// Escaping to a newline
					// Note:
					//	Escape sequences are allowed in comments;
					//	TODO: Remove this behaviour.
					while (_find_char_group(h.curr(0)) != cgroup::newlines)
						h.virtually_advance();

					return;
				}

				// -- Whitespace token / Invisible token --
				else if (group == cgroup::whitespaces)
				{
					while (_find_char_group(h.curr(0)) == cgroup::whitespaces)
						h.virtually_advance();
					return;
				}

				// -- Newline token --
				else if (group == cgroup::newlines)
				{
					// This lexem should be ignored if a miniscope is open
					if (h.open_miniscopes.size())
					{
						h.virtually_advance();
						return;
					}

					// Adding the new statement
					cache.token_type = token::statement_end;
					cache.enumeration = nl_txt;

					h.__append(cache);

					// Preparing for the indents
					cache.token_type = token::dent;
					cache.enumeration = U"\t";
					cache.position_in_code++;

					// Doing the indents; but resetting them if a newline is found
					while (_find_char_group(h.curr(0)) == cgroup::newlines)
					{
						// Skipping the newline that we currently are on
						h.virtually_advance();

						// Checking for dem indents
						// Kinda head
						cache.value = 0;
						cache.position_in_code = h.it;

						// Kinda body
						while (_find_char_group(h.curr(0)) == cgroup::whitespaces)
						{
							cache.value++;
							h.virtually_advance();
						}

						// Escaping to a newline if a comment is present
						if (_find_char_group(h.curr(0)) == cgroup::comments)
							__advance_token();
					}

					// Checking for wrong dent conditions
					if (!h._expecting_indent)
					{
						// Indent ( While not expecting one )
						if (cache.value > h.previous_dents.back())
							ErrorHandling::raise_pos
							(
								ErrorHandling::Exceptions::DentUnmatchException(),
								h.out, h.it
							);
						
						// Outdent
						else if (cache.value < h.previous_dents.back())
						{
							while (h.previous_dents.back() > cache.value)
								h.previous_dents.pop_back();

							// Checking if there is a similliar indent level before this indent
							if (cache.value != h.previous_dents.back())
								ErrorHandling::raise_pos
								(
									ErrorHandling::Exceptions::OutDentUnmatchException(),
									h.out, h.it
								);
						}
					}
					else
					{
						// Dent keep / Outdent ( Where indent was needed )
						if (cache.value <= h.previous_dents.back())
							ErrorHandling::raise_pos
							(
								ErrorHandling::Exceptions::DentMatchException(),
								h.out, h.it
							);
						
						h.previous_dents.push_back(cache.value);

						h._expecting_indent = false;
					}

					// Formatting cache's 'value' value:
					//	We'd want to change 'value' from the amount
					//	of characters that form this dent to the
					//	index of the current dent.
					//	Note that the last dent is considered the current dent, 
					//	so getting the size of h.previous_dents works just as
					//	it should.
					cache.value = h.previous_dents.size();

					// Done!
					h.__append(cache);
					return;
				}

				// -- String constants --
				else if (group == cgroup::string_quotes)
				{
					cache.token_type = token::constant_string;
					// Adding the first quote
					cache.enumeration.push_back(h.curr(0));

					for (natural_num_t i = 1; h.curr(i) != h.curr(0); i++)
					{
						// Skipping characters that followed a '\' character
						//	to prevent \\\" errors.
						if (h.curr(i) == U'\\')
						{
							cache.enumeration += U'\\';
							i++;
						}
						
						cache.enumeration += h.curr(i);
					}

					// Adding the second quote
					cache.enumeration.push_back(h.curr(0));

					h.virtually_advance(cache.enumeration.size());

					h.__append(cache);
					return;
				}

				// -- Identifiers --
				else if (group == cgroup::characters)
				{
					cache.token_type = token::id;

					// While characters are a number or a character.
					// Note:
					//	According to the Alfie standards; identifiers
					//	can contain either capitalized and/or lower-case
					//	English characters and/or decimal numerics and/or
					//	the Underscore character ( U'_' ).
					while (
						(_find_char_group(h.curr(0)) == cgroup::characters) ||
						(_find_char_group(h.curr(0)) == cgroup::numbers)
					)
					{
						cache.enumeration += h.curr(0);
						h.virtually_advance();
					}

					h.__append(cache);
					return;
				}

				// -- Integer constants --
				else if (group == cgroup::numbers)
				{
					// Setting up cache
					cache.token_type = token::constant_integer;
					while (_find_char_group(h.curr(0)) == cgroup::numbers)
					{
						cache.enumeration += h.curr(0);
						h.virtually_advance();
					}

					// Pushing cache
					h.__append(cache);
					return;
				}

				// -- Operators --
				else if (group == cgroup::operators)
				{
					cache.token_type = token::oper;

					// Getting the whole operator string;
					//	Example: U".+/*"
					while (_find_char_group(h.curr(0)) == cgroup::operators)
					{
						cache.enumeration += h.curr(0);
						h.virtually_advance();
					}

					// Checking if the operator is a valid one;
					//	Example: U".+/*" is invalid but U"++" isn't.
					for (natural_num_t i = 0; i < valid_operators.size(); i++)
					{
						// Checking for eqality
						if (cache.enumeration == valid_operators[i])
						{
							h.__append(cache);
							return;
						}
					}

					// If the for loop hasn't found a match:
					ErrorHandling::raise_pos
					(
						ErrorHandling::Exceptions::InvalidSyntaxException(),
						h.out,
						h.it
					);
				}

				// -- Miniscope handling --
				// - Miniscope opening -
				else if (group == cgroup::scope_openings)
				{
					// Kinda head
					miniscope_t miniscope;

					// Kinda body
					// Setting up the miniscope
					miniscope.opening = h.curr(0);
					miniscope.estimated_closing =
						_find_estimated_scope_closing(miniscope.opening);
					
					// Pushing the miniscope
					h.open_miniscopes.push_back(miniscope);

					// Setting up the token
					cache.token_type = token::scope_opening;
					cache.enumeration = miniscope.opening;

					// Pushing the token
					h.__append(cache);

					// Skipping the character
					h.virtually_advance();

					return;
				}

				// - Miniscope closing -
				else if (group == cgroup::scope_closings)
				{
					// Checking for a valid state
					if (
						// Condition to check if a
						//	miniscope is present or not
						!h.open_miniscopes.empty()
					)
						if (
							// Condition to check if the last
							//	miniscope's estimated closing
							//	was used here
							h.open_miniscopes.back()
							.estimated_closing == h.curr(0)
						)
						{
							// Closing the miniscope
							h.open_miniscopes.pop_back();

							// Pushing the token
							cache.token_type = token::scope_closing;
							cache.enumeration = h.curr(0);
							h.__append(cache);

							// Skipping the character
							h.virtually_advance();
							return;
						}

					// Invalid state alert!!!!
					ErrorHandling::raise_pos
					(
						ErrorHandling::Exceptions::MiniScopeLeftOpenException(),
						h.out,
						h.it
					);

				}

				// -- Specials --
				else if (group == cgroup::specials)
				{
					switch (h.curr(0))
					{
						// - Indenting by one -
					case U':':
						// If we dont have any miniscopes open
						if (h.open_miniscopes.empty())
							h._expecting_indent = true;
						h.virtually_advance();
						return;

						// - Ending the current statement -
					case U';':
						cache.token_type = token::statement_end;
						cache.enumeration = U";";
						h.__append(cache);
						h.virtually_advance();
						return;
					}
				}

				ErrorHandling::raise_pos
				(
					ErrorHandling::Exceptions::InvalidSyntaxException(),
					h.out, h.it
				);
			}

			/**
			 * @brief Advances a token thru.
			*/
			void _advance_statement()
			{
				__advance_token();
			}

		public:
			lxm_vec lex()
			{
				h.init_op();

				while (h.is_operating())
				{
					_advance_statement();
				}

				// Checking if a miniscope is left unclosed at the end of the file
				if (!h.open_miniscopes.empty())
					ErrorHandling::raise_pos
					(
						ErrorHandling::Exceptions::MiniScopeLeftOpenException(),
						h.out, h.out.size()-1  // h.out.size()-1 is the last item in h.out.
					);

				return h.tokenized;
			}

			text_t lxm_vec_to_str(lxm_vec in)
			{
				text_t out;

				for (natural_num_t i = 0; i < in.size(); i++)
				{
					out += text_t(U"[") + in[i].enumeration + U"] ";
				}
				return out;
			}

			// --- CTOR ~ DTOR
		public:
			// --- Constructor ---
			// -- Default constructor --
			Lexer() = delete;

			// -- Costumized constructors --
			Lexer(text_t _code):
					h(_code)
			{ }

			// --- Destructor ---
			// -- Default destructor --
			~Lexer(){ }
		};
	}
}

# pragma once

# include <ETC/Macros.hpp>

# include <Instructions/LexedTree/LexemHelper.hpp>
# include <Instructions/LexedTree/lexem_t.hpp>

namespace Alton
{
	namespace Lexer
	{
		using namespace ErrorHandling;

		// --- Lexer class ------------------------
		class Lexer
		{
			// --- Head
		private:
			LexemHelper h = text_t(U"");

			// --- Body
		private:
			/**
			 * @brief Returns a token for the current position
			*/
			token ___find_constant_token()
			{
				// --- Head ---
				// -- Remaining characters to the end --
				natural_num_t remaining_chars = h.out.size() - h.it;
				// -- The text to the end --
				text_t remaining_text = h.out.substr(h.it);
				// -- A cache value --
				token cache = token::null_token;

				// --- Body ---
				// Note:
				//	This is a repetitive process to check for a result
				//	that's not a null_token ( same as a failed result ).
				//	Eventually, one of the do-blocks will trigger the

				// -- 1 character --
				if (remaining_chars != 0)
					cache = ____get_const_token_1_char(remaining_text.substr(0, 1));

				// -- 2 characters --
				if (cache == token::null_token && remaining_chars >= 2)
					cache = ____get_const_token_2_chars(remaining_text.substr(0, 2));
				
				// -- 3 characters --
				if (cache == token::null_token && remaining_chars >= 3)
					cache = ____get_const_token_3_chars(remaining_text.substr(0, 3));
				
				// -- 4 or more characters --
				if (cache == token::null_token && remaining_chars >= 4)
					cache = ____get_const_token_keywords(remaining_text);
				
				return cache;
			}

			/**
			 * @brief Advances an integer thru
			
			 * @return Returns a check for weather the operation was successful or not
			*/
			bool ___advance_integer()
			{
				// --- Head ---
				// -- A cache value --
				lexem_t cache;
				// -- A cache value --
				utfchar_t current_char = h.curr(0);

				// --- Body ---
				// -- Detected an integer constant --
				if (h.___char_is_a_number(current_char))
				{
					// - Basic stuff.. -
					cache.position_in_code = h.it;
					cache.token_type = token::constant_integer;
					
					// - Grab the string enumeration -
					while (h.___char_is_a_number(current_char))
					{
						cache.enumeration += current_char;

						h.virtually_advance();
						current_char = h.curr(0);
					}

					// - Stick the result to the end. -
					h.__append(cache);
					return 1;
				}
				// -- Didn't do shit here --
				else return 0;
			}

			/**
			 * @brief Advances an identifier thru
			
			 * @return Returns a check for weather the operation was successful or not
			*/
			bool ___advance_identifier()
			{
				// --- Head ---
				// -- A cache value --
				lexem_t cache;
				// -- A cache value --
				utfchar_t current_char = h.curr(0);

				// --- Body ---
				// -- Detected an identifier --
				if (h.___char_is_in_english(current_char))
				{
					cache.position_in_code = h.it;
					cache.token_type = token::identifier;

					// - Grab the string enumeration -
					while (h.___char_is_an_identifier(current_char))
					{
						cache.enumeration += current_char;

						h.virtually_advance();
						current_char = h.curr(0);
					}

					// - Stick the result to the end. -
					h.__append(cache);
					return 1;
				}
				// -- Didn't do shit here --
				else return 0;
			}

			/**
			 * @brief Advances a text thru
			
			 * @return Returns a check for weather the operation was successful or not
			*/
			bool ___advance_text()
			{
				// --- Head ---
				// -- A cache value --
				lexem_t cache;
				// -- A cache value --
				utfchar_t current_char = h.curr(0);
				// -- The quote that started the string
				const utfchar_t quote = current_char; 

				// --- Body ---
				// -- Detected a text quote --
				if (current_char == U'\"' || current_char == U'\'')
				{
					cache.enumeration += quote;
					cache.position_in_code = h.it;
					cache.token_type = token::constant_text;

					// - Skipping the quote -
					h.virtually_advance(1);

					// - Getting the text -
					current_char = h.curr(0);
					while (current_char != quote)
					{
						// Skipping the characters next to a \\ 
						//	to prevent \\\" errors.
						if (current_char == U'\\')
						{
							cache.enumeration += current_char;

							h.virtually_advance(1);
							current_char = h.curr(0);
						}

						// Appending the current character
						cache.enumeration = current_char;

						h.virtually_advance(1);
						current_char = h.curr(0);
					}

					// - Skipping the quote -
					cache.enumeration += quote;
					h.virtually_advance(1);

					h.__append(cache);
					return 1;
				}
				// -- Didn't detect. :-< ---
				else return 0;
			}

			/**
			 * @brief Advances a text thru
			
			 * @return Returns a check for weather the operation was successful or not
			*/
			bool ___advance_whitespace()
			{
				// --- Head ---
				// -- A cache value --
				utfchar_t current_char = h.curr(0);

				// --- Body ---
				// -- Detected a text quote --
				if (current_char == U' ' || current_char == U'\t')
				{
					while (current_char == U' ' || current_char == U'\t')
					{
						h.virtually_advance();
						current_char = h.curr(0);
					}
					return 1;
				}
				else return 0;
			}

			/**
			 * @brief Advances thru a newline and the indents that continue afterwards
			
			 * @return Returns a check for weather the operation was successful or not
			*/
			bool ___advance_comment()
			{
				// --- Head ---
				// -- A cache value --
				utfchar_t current_char = h.curr(0);

				// --- Body ---
				// -- Detected a comment --
				if (current_char == U'#')
				{
					while (!___advance_newline())
						h.virtually_advance();
					
					return 1;
				}
				// -- Nope... --
				else return 0;
			}

			/**
			 * @brief Advances thru a newline and the indents that continue afterwards
			
			 * @return Returns a check for weather the operation was successful or not
			*/
			bool ___advance_newline()
			{
				// --- Head ---
				// -- A cache value --
				lexem_t cache;
				// -- A cache value --
				utfchar_t current_char = h.curr(0);
				// -- The amount of dents in the current line --
				natural_num_t dents = h.previous_dents.back();
				// -- The amount of dents in the following line --
				natural_num_t new_dents = 0;

				// --- Body ---
				// -- Detected an LF newline --
				if (current_char == U'\n')
					h.virtually_advance(1);
				
				// -- Detected a CRLF newline --
				else if 
				(
					(current_char == U'\r') &&  // CR
					(h.curr(1) == U'\n')  // LF
				)
					h.virtually_advance(2);
				
				// -- Detected a do block --
				else if (current_char == U':')
				{
					// - Do block inside a miniscope -
					if (!h.open_miniscopes.empty())
						raise_pos
						(
							Exceptions::MisplacedDoBlock(),
							h.it
						);
					
					h.virtually_advance(1);
					h._expecting_indent = true;

					// - A do block should be immediatly followed by a newline -
					if (!___advance_newline())
						raise_pos
						(
							Exceptions::DentMatchException(),
							h.it
						);
				}

				// -- Didn't detect it --
				else return 0;

				// -- Checking if we haven't reached the end --
				if (!h.is_operating())
					return 1;

				// -- Checking if we are in a miniscope --
				if (!h.open_miniscopes.empty())
					return 1;

				// -- Appending the newline --
				cache.position_in_code = h.it;
				cache.enumeration = nl_txt;
				cache.token_type = token::statement_end;
				
				h.__append(cache);

				// -- Counting the dents --
				current_char = h.curr(0);
				
				for (; current_char == U' ' || current_char == U'\t'; new_dents++)
				{
					h.virtually_advance(1);
					current_char = h.curr(0);
				}

				// -- Skipping a possible comment --
				___advance_comment();
				// -- Recursing if possible --
				if (___advance_newline())
					return 1;

				// -- Indent --
				if (new_dents > dents)
				{
					// - Indent where not expected -
					if (!h._expecting_indent)
						raise_pos
						(
							Exceptions::DentUnmatchException(),
							h.it
						);

					h.previous_dents.push_back(new_dents);

					cache.enumeration = U"";
					cache.token_type = token::indent;
					h.__append(cache);
					h._expecting_indent = false;
				}

				// -- Outdent --
				else if (new_dents < dents)
				{
					// -- Expected an indent --
					if (h._expecting_indent)
						raise_pos
						(
							Exceptions::DentMatchException(),
							h.it
						);

					// - Removing the last indents -
					cache.enumeration = U"";
					cache.token_type = token::outdent;

					while (new_dents < h.previous_dents.back())
					{
						h.previous_dents.pop_back();
						h.__append(cache);
					}

					// - No matches for the current outdent  -
					if (new_dents != h.previous_dents.back())
						raise_pos
						(
							Exceptions::OutDentUnmatchException(),
							h.it
						);
				}
				// -- No dent change --
				else
					// -- Expected an indent --
					if (h._expecting_indent)
						raise_pos
						(
							Exceptions::DentMatchException(),
							h.it
						);

				// Note:
				//	If you're wondering:
				//		This function is recursed when 2 newlines are
				//		 are put next to eachother.

				// Previous comment contains two 'are' words. look close.
				return 1;
			}

			/**
			 * @brief Advances a lexem thru
			*/
			void __advance_token()
			{
				// --- Head ---
				// -- A cache value --
				lexem_t cache;

				// --- Body ---
				// -- Basic stuff.. --
				cache.position_in_code = h.it;
				cache.token_type = ___find_constant_token();
				cache.enumeration = ___get_token_name_in_text(cache.token_type);

				// -- ___find_constant_token found the token. --
				if (cache.token_type != token::null_token)
				{
					// - Skipping the token -
					h.virtually_advance(cache.enumeration.size());
					
					// - Checking for exceptions -
					switch (cache.token_type)
					{
						// Exception for integer constants smaller than zero
					case token::oper_subtract:
						if (___advance_integer())
							// Inverting the enumeration for __advance_integer
							h.tokenized.back().enumeration = U"-" + h.tokenized.back().enumeration;
							// Note:
							//	Even tho "-2" is allowed, "- 2" ( With a space in the mid )
							//	is not.
						break;

						// Exception for miniscope openings
					case token::paranthesis_miniscope_opening:
					case token::round_bracket_miniscope_opening:
					case token::square_bracket_miniscope_opening:
						h.open_miniscopes.push_back(cache.enumeration[0]);
						break;

						// Exception for miniscope closings
					case token::paranthesis_miniscope_closing:
					case token::round_bracket_miniscope_closing:
					case token::square_bracket_miniscope_closing:
						// Scope closing is legal.
						if
						(
							h._find_potential_scope_closing(h.open_miniscopes.back()) ==  // The scope opening
							cache.enumeration[0]  // The scope closing
						)
							h.open_miniscopes.pop_back();
						// Scope closing is illegal.
						else
							switch (h.open_miniscopes.back())
							{
							case U'{':
								ErrorHandling::raise_pos
								(
									ErrorHandling::Exceptions::RoundBracketMiniScopeLeftOpenException(),
									h.it
								);
								break;
							
							case U'[':
								ErrorHandling::raise_pos
								(
									ErrorHandling::Exceptions::SquareBracketMiniScopeLeftOpenException(),
									h.it
								);
								break;

							case U'(':
								ErrorHandling::raise_pos
								(
									ErrorHandling::Exceptions::ParanthesisMiniScopeLeftOpenException(),
									h.it
								);
								break;
							
							default:
								ErrorHandling::raise_pos
								(
									ErrorHandling::Exceptions::MiniScopeLeftOpenException(),
									h.it
								);
								break;
							}
						break;
					
						// - Token is under no exceptions -
					default:
						cache.enumeration = ___get_token_name_in_text(cache.token_type);
						h.__append(cache);
						break;
					}
				}
				// -- Alternative methods for finding the token --
				else
				{
					if (___advance_identifier())
						return;

					else if (___advance_integer())
						return;
					
					else if (___advance_text())
						return;

					else if (___advance_whitespace())
						return;
					
					else if (___advance_newline())
						return;
					
					else if (___advance_comment())
						return;

					else
						raise_pos
						(
							Exceptions::InvalidSyntaxException(),
							h.it
						);
				}
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
					switch (h.open_miniscopes.front())
					{
					case U'{':
						raise_pos
						(
							ErrorHandling::Exceptions::RoundBracketMiniScopeLeftOpenException(),
							h.it-1
						);
						break;
					
					case U'[':
						raise_pos
						(
							ErrorHandling::Exceptions::SquareBracketMiniScopeLeftOpenException(),
							h.it-1
						);
						break;

					case U'(':
						raise_pos
						(
							ErrorHandling::Exceptions::ParanthesisMiniScopeLeftOpenException(),
							h.it-1
						);
						break;

					default:
						raise_pos
						(
							ErrorHandling::Exceptions::MiniScopeLeftOpenException(),
							h.it-1
						);
						break;
					}

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
			{
				ErrorHandling::setup_error_handling(_code);
			}

			// --- Destructor ---
			// -- Default destructor --
			~Lexer()
			{
				ErrorHandling::dupe_error_handling_setup();
			}
		};
	}
}

# pragma once

# include <ETC/Macros.hpp>

# include <Lexer/LexemHelper.hpp>
# include <Lexer/lexem_t.hpp>

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

			// --- Body
		private:
			/**
			 * @brief Returns a token for the current position
			*/
			token ___advance_constant_token()
			{
				// --- Head ---
				// -- Remaining characters to the end --
				natnum_t remaining_chars = h.out.size() - h.it;
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

					// - Look for keywords -
						 if (cache.enumeration == U"var")		cache.token_type = token::keyword_var;
					else if (cache.enumeration == U"constant")	cache.token_type = token::keyword_constant;
					else if (cache.enumeration == U"return")	cache.token_type = token::keyword_return;
					else if (cache.enumeration == U"import")	cache.token_type = token::keyword_import;
					else if (cache.enumeration == U"_oper")		cache.token_type = token::keyword_oper;

					else if (cache.enumeration == U"for")		cache.token_type = token::keyword_for;
					else if (cache.enumeration == U"if")		cache.token_type = token::keyword_if;
					else if (cache.enumeration == U"while")		cache.token_type = token::keyword_while;

					else if (cache.enumeration == U"try")		cache.token_type = token::keyword_try;
					else if (cache.enumeration == U"check")		cache.token_type = token::keyword_check;

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
						// Skipping the characters next to a '\'
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
			 * @brief Advances thru a comment
			
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
					// No need to check for CRLF and LF;
					//	Since they both end with LF, just checking for LF is passable.
					while (current_char != U'\n')
					{
						h.virtually_advance();
						current_char = h.curr(0);
					}
					
					return 1;
				}
				// -- Nope... --
				else return 0;
			}

			/**
			 * @brief Advances thru a do block
			
			 * @return Returns a check for weather the operation was successful or not
			*/
			bool ___advance_do_block()
			{
				// --- Head ---
				// -- A cache value --
				lexem_t cache;
				// -- A cache value --
				utfchar_t current_char = h.curr(0);

				//--- Body ---
				// -- Detected a do block --
				if (current_char == U':')
				{
					// - Do block inside a miniscope -
					if (!h.open_miniscopes.empty())
						Clinic::raise_pos
						(
							Clinic::Exceptions::MisplacedDoBlock(),
							h.it
						);
					
					h.virtually_advance(1);
					h._expecting_indent = true;

					// - A do block should be immediatly followed by a newline, Altho -
					//	- whitespace and a comment are allowed, according to the Alfie standards -
					___advance_whitespace();
					___advance_comment();
					if (!___advance_newline())
						Clinic::raise_pos
						(
							Clinic::Exceptions::DentMatchException(),
							h.it
						);
					
					return 1;
				}
				// -- Eyy.. --
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
				natnum_t dents = h.previous_dents.back();
				// -- The amount of dents in the following line --
				natnum_t new_dents = 0;

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

				// -- Didn't detect it --
				else return 0;

				// -- Checking if we haven't reached the end --
				if (!h.is_operating())
					return 1;

				// -- Checking if we are in a miniscope --
				if (!h.open_miniscopes.empty())
					return 1;

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
				{
					return 1;
				}

				// -- Appending the newline --
				cache.position_in_code = h.it;
				cache.enumeration = nl_txt;
				cache.token_type = token::statement_end;
				
				h.__append(cache);


				// -- Indent --
				if (new_dents > dents)
				{
					// - Indent where not expected -
					if (!h._expecting_indent)
						Clinic::raise_pos
						(
							Clinic::Exceptions::DentUnmatchException(),
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
						Clinic::raise_pos
						(
							Clinic::Exceptions::DentMatchException(),
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
						Clinic::raise_pos
						(
							Clinic::Exceptions::OutDentUnmatchException(),
							h.it
						);
				}
				// -- No dent change --
				else
					// -- Expected an indent --
					if (h._expecting_indent)
						Clinic::raise_pos
						(
							Clinic::Exceptions::DentMatchException(),
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
				cache.token_type = ___advance_constant_token();
				cache.enumeration = ___get_token_name_in_text(cache.token_type);

				// -- ___advance_constant_token found the token. --
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
								Clinic::raise_pos
								(
									Clinic::Exceptions::RoundBracketMiniScopeLeftOpenException(),
									h.it
								);
								break;
							
							case U'[':
								Clinic::raise_pos
								(
									Clinic::Exceptions::SquareBracketMiniScopeLeftOpenException(),
									h.it
								);
								break;

							case U'(':
								Clinic::raise_pos
								(
									Clinic::Exceptions::ParanthesisMiniScopeLeftOpenException(),
									h.it
								);
								break;
							
							default:
								Clinic::raise_pos
								(
									Clinic::Exceptions::MiniScopeLeftOpenException(),
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

					else if (___advance_do_block())
						return;

					else
						Clinic::raise_pos
						(
							Clinic::Exceptions::UnrecognisedTokenException(),
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
						Clinic::raise_pos
						(
							Clinic::Exceptions::RoundBracketMiniScopeLeftOpenException(),
							h.it-1
						);
						break;
					
					case U'[':
						Clinic::raise_pos
						(
							Clinic::Exceptions::SquareBracketMiniScopeLeftOpenException(),
							h.it-1
						);
						break;

					case U'(':
						Clinic::raise_pos
						(
							Clinic::Exceptions::ParanthesisMiniScopeLeftOpenException(),
							h.it-1
						);
						break;

					default:
						Clinic::raise_pos
						(
							Clinic::Exceptions::MiniScopeLeftOpenException(),
							h.it-1
						);
						break;
					}

				return h.tokenized;
			}

			text_t lxm_vec_to_str(lxm_vec in)
			{
				text_t out;

				for (natnum_t i = 0; i < in.size(); i++)
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
				Clinic::setup_error_handling(_code);
			}

			// --- Destructor ---
			// -- Default destructor --
			~Lexer()
			{
				Clinic::dupe_error_handling_setup();
			}
		};
	}
}

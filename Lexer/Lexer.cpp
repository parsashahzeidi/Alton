# include <Lexer/Lexer.hpp>


namespace Alton
{
	namespace Lexer
	{
		Token Lexer::___advance_constant_token()
		{
			// --- Head ---
			// -- Remaining characters to the end --
			Natural remaining_chars = h.out.size() - h.it;
			// -- The text to the end --
			Text remaining_text = h.out.substr(h.it);
			// -- A cache value --
			Token cache = Token::null_token;

			// --- Body ---
			// -- 1 character tokens --
			if (remaining_chars != 0)
				cache = ____get_const_token_1_char(remaining_text.substr(0, 1));

			// -- 2 character tokens --
			if (cache == Token::null_token && remaining_chars >= 2)
				cache = ____get_const_token_2_chars(remaining_text.substr(0, 2));
			
			// -- 3 character tokens --
			if (cache == Token::null_token && remaining_chars >= 3)
				cache = ____get_const_token_3_chars(remaining_text.substr(0, 3));
			
			return cache;
		}

		bool Lexer::___advance_number()
		{
			// --- Head ---
			// -- A cache value --
			Lexeme cache;
			// -- A cache value --
			Character current_char = h.curr(0);

			// --- Body ---
			// -- Detected an integer constant --
			if (h.___char_is_a_number(current_char))
			{
				// - Basic stuff.. -
				cache.position_in_code = h.it;
				cache.token_type = Token::constant_number;
				
				// - Grab the string enumeration -
				while (h.___char_is_a_number(current_char))
				{
					cache.enumeration += current_char;

					h.virtually_advance();
					current_char = h.curr(0);
				}

				// - Found a float! -
				if (current_char == U'.')
				{
					cache.token_type = Token::constant_float;
					
					cache.enumeration += current_char;
					h.virtually_advance();
					current_char = h.curr(0);

					// - Grab the string enumeration -
					while (h.___char_is_a_number(current_char))
					{
						cache.enumeration += current_char;

						h.virtually_advance();
						current_char = h.curr(0);
					}
				}


				// - Stick the result to the end. -
				h.__append(cache);
				return 1;
			}
			// -- Didn't do shit here --
			return 0;
		}

		bool Lexer::___advance_identifier()
		{
			// --- Head ---
			// -- A cache value --
			Lexeme cache;
			// -- A cache value --
			Character current_char = h.curr(0);

			// --- Body ---
			// -- Detected an identifier --
			if (h.___char_is_in_english(current_char))
			{
				cache.position_in_code = h.it;

				// - Grab the string enumeration -
				while (h.___char_is_an_identifier(current_char))
				{
					cache.enumeration += current_char;

					h.virtually_advance();
					current_char = h.curr(0);
				}

				// - Look for keywords -
				// Trying to guess the token.
				cache.token_type = ____get_keyword_token(cache.enumeration);

				// Defaulting to identifier if not found.
				if (cache.token_type == Token::null_token)
					cache.token_type = Token::identifier;

				// - Stick the result to the end. -
				h.__append(cache);
				return 1;
			}
			// --  < Insert typical / witty programmer humour here >  --
			return 0;
		}

		bool Lexer::___advance_text()
		{
			// --- Head ---
			// -- A cache value --
			Lexeme cache;
			// -- A cache value --
			Character current_char = h.curr(0);
			// -- The quote that started the string
			const Character quote = current_char; 

			// --- Body ---
			// -- Detected a text quote --
			if (current_char == U'\"' || current_char == U'\'')
			{
				cache.enumeration += quote;
				cache.position_in_code = h.it;
				cache.token_type = Token::constant_text;

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
					cache.enumeration += current_char;

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
			return 0;
		}

		bool Lexer::___advance_whitespace()
		{
			// --- Head ---
			// -- A cache value --
			Character current_char = h.curr(0);

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
			// -- Nope. --
			return 0;
		}

		bool Lexer::___advance_comment()
		{
			// --- Head ---
			// -- A cache value --
			Character current_char = h.curr(0);

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
			return 0;
		}

		bool Lexer::___advance_newline()
		{
			// --- Head ---
			// -- A cache value --
			Lexeme cache;
			// -- A cache value --
			Character current_char = h.curr(0);
			// -- The amount of dents in the current line --
			Natural dents = h.previous_dents.back();
			// -- The amount of dents in the following line --
			Natural new_dents = 0;

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
			cache.token_type = Token::statement_end;
			
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
				cache.token_type = Token::indent;
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
				cache.token_type = Token::outdent;

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

			/**
			 * NOTE: If you're wondering:
				This function is recursed when 2 newlines are
				are put next to eachother.
			*/

			// Previous comment contains two 'are' words. look close.
			return 1;
		}

		void Lexer::__advance_token()
		{
			// --- Head ---
			// -- A cache value --
			Lexeme cache;

			// --- Body ---
			// -- Basic stuff.. --
			cache.position_in_code = h.it;
			cache.token_type = ___advance_constant_token();
			cache.enumeration = ___get_token_enum_in_text(cache.token_type);

			// -- ___advance_constant_token found the Token. --
			if (cache.token_type != Token::null_token)
			{
				// - Skipping the Token -
				h.virtually_advance(cache.enumeration.size());
				
				// - Checking for exceptions -
				switch (cache.token_type)
				{
					// Exception for miniscope openings
				case Token::paranthesis_miniscope_opening:
				case Token::round_bracket_miniscope_opening:
				case Token::square_bracket_miniscope_opening:
					h.open_miniscopes.push_back(cache.enumeration[0]);
					h.__append(cache);
					break;

					// Exception for do blocks
				case Token::do_block:
					// Appending..
					h.__append(cache);
					
					// A do block is supposed to be followed by a newline and an indent.
					// Setting up the flags
					h._expecting_indent = 1;

					// Checking the conditions
					if (!h.open_miniscopes.empty())
						Clinic::raise_pos
						(
							Clinic::Exceptions::MisplacedDoBlockException(),
							h.it
						);
					
					// Clearing possible rubbish
					___advance_whitespace();
					___advance_comment();

					// Advancing the newline
					___advance_newline();
					break;

					// Exception for miniscope closings
				case Token::paranthesis_miniscope_closing:
				case Token::round_bracket_miniscope_closing:
				case Token::square_bracket_miniscope_closing:
					// Scope closing is legal.
					if
					(
						h._find_potential_scope_closing(h.open_miniscopes.back()) ==  // The scope opening
						cache.enumeration[0]  // The scope closing
					)
					{
						h.open_miniscopes.pop_back();
						h.__append(cache);
					}
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
						}
					break;
				
					// - Token is under no exceptions -
				default:
					cache.enumeration = ___get_token_enum_in_text(cache.token_type);
					h.__append(cache);
				}
			}
			// -- Alternative methods for finding the Token --
			else
			{
				if (___advance_identifier())
					return;

				else if (___advance_number())
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
					Clinic::raise_pos
					(
						Clinic::Exceptions::UnrecognisedTokenException(),
						h.it
					);
			}
		}
		
		void Lexer::_advance_statement()
		{
			__advance_token();
		}

		LexemeList Lexer::lex()
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
					Clinic::raise_internal
					(
						Clinic::Exceptions::InvalidMiniscopeOpeningPlaceholder(),
						__FILE__, __LINE__
					);
				}

			return h.tokenized;
		}

		Text Lexer::lxm_vec_to_text(LexemeList in)
		{
			Text out;

			for (Natural i = 0; i < in.size(); i++)
			{
				out += text_init
					U"\033[0;2m["
					+ _get_token_name(in[i].token_type)
					+ U":\033[0;1m"
					+ in[i].enumeration
					+ U"\033[0;2m] ";
			}

			out += U"\033[0m";
			return out;
		}

		// --- CTOR ~ DTOR
		// --- Constructor ---
		// -- Default constructor --

		// -- Costumized constructors --
		Lexer::Lexer(Text _code):
				h(_code)
		{
			Clinic::setup_error_handling(_code);
		}

		// --- Destructor ---
		// -- Default destructor --
		Lexer::~Lexer()
		{
			Clinic::dupe_error_handling_setup();
		}
	}
}

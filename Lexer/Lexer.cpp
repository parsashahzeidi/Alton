# include <ETC/AltonFunctionDetect.hpp>
# include <Lexer/Lexer.hpp>


namespace Alton
{
	namespace Lexer
	{
		bool Lexer::___advance_constant_token()
		{
			// --- Head ---
			// -- Remaining characters to the end --
			Natural remaining_chars = h.out.size() - h.it;
			// -- A cache value --
			Lexeme cache;
			// -- The parameters --
			cache.token_type = Token::null_token;
			cache.position_in_code = h.it;
			cache.enumeration = h.out.substr(h.it);

			// --- Body ---
			// -- 3 character long tokens --
			if (cache.token_type == Token::null_token && remaining_chars >= 3)
			{
				cache.enumeration = cache.enumeration.substr(0, 3);
				cache.token_type = ____get_const_token_3_chars
				(
					cache.enumeration
				);
			}

			// -- 2 character long tokens --
			if (cache.token_type == Token::null_token && remaining_chars >= 2)
			{
				cache.enumeration = cache.enumeration.substr(0, 2);
				cache.token_type = ____get_const_token_2_chars
				(
					cache.enumeration
				);
			}

			// -- 1 character long tokens --
			if (cache.token_type == Token::null_token && remaining_chars != 0)
			{
				cache.enumeration = cache.enumeration.substr(0, 1);
				cache.token_type = ____get_const_token_1_char
				(
					cache.enumeration
				);
			}

			// -- 404, Token not found --
			if (cache.token_type == Token::null_token)
				return 0;

			// - Skipping the Token -
			h.virtually_advance(cache.enumeration.size());

			// -- Checking for dem exceptical tokens --
			switch (cache.token_type)
			{
				// Exception for miniscope openings
			case Token::lparen:
			case Token::lscope:
			case Token::lbrack:
				h.open_miniscopes.push_back(cache.enumeration[0]);
				h.__append(cache);
				break;

				// Exception for miniscope closings
			case Token::rparen:
			case Token::rscope:
			case Token::rbrack:
				// Scope closing is legal.
				if
				(
					// The expected scope closing from the scope opening
					h._find_potential_scope_closing(h.open_miniscopes.back())
					// The scope closing
					== cache.enumeration[0]
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
							Clinic::Exceptions::
									RoundBracketMiniScopeLeftOpenException(),
							h.it
						);
						break;

					case U'[':
						Clinic::raise_pos
						(
							Clinic::Exceptions::
									SquareBracketMiniScopeLeftOpenException(),
							h.it
						);
						break;

					case U'(':
						Clinic::raise_pos
						(
							Clinic::Exceptions::
									ParanthesisMiniScopeLeftOpenException(),
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
				h.__append(cache);
			}

			return 1;
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

					// Advancing the float's decimal point
					cache.enumeration += current_char;
					h.virtually_advance();
					current_char = h.curr(0);

					// Grab the string enumeration
					while (h.___char_is_a_number(current_char))
					{
						cache.enumeration += current_char;

						h.virtually_advance();
						current_char = h.curr(0);
					}
				}

				// - Found a literalized number! -
				else if (h.___char_is_in_english(current_char))
				{
					cache.token_type = Token::literalized_number;

					// Grab the literal's ID
					while (h.___char_is_in_english(current_char))
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
			if (h.___char_is_considered_whitespace (current_char))
			{
				while (h.___char_is_considered_whitespace (current_char) && h.is_operating())
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
				// - This comment is a multilined one -
				if (h.curr(1) == U'#')
				{
					// Skipping the comment characters
					h.virtually_advance(2);
					current_char = h.curr(0);

					// Teleport!
					while (current_char != U'#')
					{
						h.virtually_advance();
						current_char = h.curr(0);
					}
				}
				// - No! This comment is FUCKING INLINED m8. -
				else
				{
					// Teleport!
					/**
					 * NOTE: No need to check for CRLF and LF;
						Since they both end with LF, just checking for LF is
						passable.
					 */
					while (current_char != U'\n')
					{
						h.virtually_advance();
						current_char = h.curr(0);
					}
				}

				return 1;
			}
			// -- Nope... --
			return 0;
		}

		void Lexer::__advance_token()
		{
			// --- Head ---
			// -- A cache value --
			Lexeme cache;

			// --- Body ---
			// -- Basic stuff.. --
			if (___advance_constant_token())
				return;

			else if (___advance_identifier())
				return;

			else if (___advance_number())
				return;

			else if (___advance_text())
				return;

			else if (___advance_whitespace())
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
						__FILE__, ALTON_FUNCTION_DETECT, __LINE__
					);
				}

			return h.tokenized;
		}

		Text Lexer::print_lxm_vec (LexemeList in)
		{
			Text out;

			for (Natural i = 0; i < in.size(); i++)
			{
				say
				(
					Clinic::Component::lexer_lib,
					_get_token_name(in[i].token_type)
					+ U": "
					+ in[i].enumeration
				);
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

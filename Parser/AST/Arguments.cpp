# include <Parser/AST/Arguments.hpp>

namespace Alton
{
	namespace Parser
	{
		namespace AST
		{
			void Arguments::parse_location (ParseHelper &h)
			{
				// TODO: Store the result somewhere you stupid coder.
				Location ().parse (h);
			}
			void Arguments::parse (ParseHelper &h)
			{
				// --- Head ---
				Lexer::Lexeme next_token = h.curr (0);

				// --- Body ---
				switch (next_token.token_type)
				{
					// -- The arguments are provided infront of the function --
				case Lexer::Token::lparen:
					configuration.parse (h);
					break;

					// -- The arguments provided were previously declared --
				case Lexer::Token::identifier:
					parse_location (h);
					break;

					// -- No argument provided --
				default:
					break;
				}
			}
			Arguments::Arguments (ParseHelper &h)
			{
				parse (h);
			}
			Arguments::Arguments ()
			{ }
		}  // AST
	}  // Parser
}  // Alton

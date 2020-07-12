# include <Parser/AST/Location.hpp>

namespace Alton
{
	namespace Parser
	{
		namespace AST
		{
			void Location::parse (ParseHelper &h)
			{
				// --- Body ---
				// -- Advancing the first item --
				item = h.advance (Lexer::Token::identifier);

				while (h.can_expect (Lexer::Token::oper_dot))
				{
					h.virtually_advance ();
					scopes.push_back (item);

					item = h.advance (Lexer::Token::identifier);
				}
			}

			Location::Location ()
			{ }
		}  // AST
	}  // Parser
}  // Alton

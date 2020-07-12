# include <Parser/AST/InterfaceFunction.hpp>


namespace Alton
{
	namespace Parser
	{
		namespace AST
		{
			void InterfaceFunction::parse (ParseHelper &h)
			{
				fingerprint.parse (h);
				arguments.parse (h);

				// TODO: Replace statement_end with bytecode
				h.advance (Lexer::Token::statement_end);
			}

			InterfaceFunction::InterfaceFunction ()
			{ }
		}  // AST
	}  // Parser
}  // Alton

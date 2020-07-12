# include <Parser/AST/Configuration.hpp>


namespace Alton
{
	namespace Parser
	{
		namespace AST
		{
			void Configuration::parse_argument (ParseHelper &h)
			{
				// --- Head ---
				Container <TypeIdentifier> argument_values;

				// --- Definition ( in regex/antlr form )
				//	argument -> typeidentifiers ---

				// --- Body ---
				// -- typeidentifiers --
				argument_values = TypeIdentifier::parse_multiple (h);

				// -- ( '=' value )? --
				// if (h.can_expect (Lexer::Token::oper_assign))
				// {
				//	h.virtually_advance ();
				// }
				// TODO: Finish this after you do the first Parser overhaul.
			}
			void Configuration::parse (ParseHelper &h)
			{
				h.advance (Lexer::Token::lparen);
				while (1)
				{
					parse_argument (h);
					
					if (h.can_expect (Lexer::Token::rparen))
						break;

					else
						h.advance (Lexer::Token::statement_end);
				}
				h.virtually_advance ();
			}
			Configuration::Configuration (ParseHelper &h)
			{
				parse (h);
			}
			Configuration::Configuration ()
			{ }
		}  // AST
	}  // Parser
}  // Alton

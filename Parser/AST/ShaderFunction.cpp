# include <Parser/AST/ShaderFunction.hpp>


namespace Alton
{
	namespace Parser
	{
		namespace AST
		{
			void ShaderFunction::parse (ParseHelper &h)
			{
				h.advance (Lexer::Token::keyword_fast);
				fingerprint.parse (h);
				arguments.parse (h);

				// TODO: Replace statement_end with bytecode
				h.advance (Lexer::Token::statement_end);
			}
			ShaderFunction::ShaderFunction ()
			{ }
		}  // AST
	}  // Parser
}  // Alton

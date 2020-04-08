# include <Parser/Symbol.hpp>
# include <Lexer/Tokens.hpp>


namespace Alton
{
	namespace Parser
	{
		Symbol token_to_symbol(const Lexer::Token &in)
		{
			return ((Symbol) in);
		}
	}
}

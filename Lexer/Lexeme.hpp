# pragma once

# include <ETC/BareboneMacros.hpp>
# include <Types/BaseContainer.hpp>
# include <Lexer/Tokens.hpp>


namespace Alton
{
	namespace Lexer
	{
		struct Lexeme
		{
			Token token_type = Token::null_token;
			Natural position_in_code = 0;
			Text enumeration = U"";
		};

		using LexemeList = Container<Lexeme>;
	}
}
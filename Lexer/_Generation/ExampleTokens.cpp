# include <Lexer/Tokens.hpp>


namespace Alton
{
	namespace Lexer
	{
		Token ____get_const_token_3_chars(Text in)
		{
			// Second %s
			return Token::null_token;
		}

		Token ____get_const_token_2_chars(Text in)
		{
			// Third %s
			return Token::null_token;
		}

		Token ____get_const_token_1_char(Text in)
		{
			// Fourth %s
			return Token::null_token;
		}

		Token ____get_const_token_variable_char(Text in)
		{
			// Fifth %s
			return Token::null_token;
		}

		Token ____get_keyword_token(Text in)
		{
			// Sixth %s
			return Token::null_token;
		}

		Text _get_token_name(Token in)
		{
			switch(in)
			{  // Seventh %s

			default:
				return U"??";
			}
		}
	}
}

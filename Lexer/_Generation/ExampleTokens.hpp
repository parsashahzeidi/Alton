// This file was synthesized by /Path/To/Alton/Tools/Instructions/LexedTree/TokenHeaderGenerator.py

# pragma once

# include <ETC/Macros.hpp>

namespace Alton
{
	namespace Lexer
	{
		enum token
		{  // First %s
		};

		text_t ___get_token_name_in_text(token in)
		{
			switch (in)
			{  // Second %s
			
			default:
				return U"";
			}
		}

		token ____get_const_token_3_chars(text_t in)
		{
			// Third %s
			return token::null_token;
		}

		token ____get_const_token_2_chars(text_t in)
		{
			// Fourth %s
			return token::null_token;
		}

		token ____get_const_token_1_char(text_t in)
		{
			// Fifth %s
			return token::null_token;
		}

		token ____get_const_token_keywords(text_t in)
		{
			// Sixth %s
			return token::null_token;
		}
	}
}
// This file was synthesized by /Path/To/Alton/Tools/Instructions/LexedTree/TokenHeaderGenerator.py

# pragma once

# include <ETC/BareboneMacros.hpp>


namespace Alton
{
	namespace Lexer
	{
		enum Token
		{
			null_token,
			// First %s

			// Not a Token
			count
		};

		/**
		 * BRIEF: Guesses a token's enumeration
		 * PARAM: in The token.
		 * 
		 * RETURN: A Text.
		*/
		Text ___get_token_enum_in_text(Token in);

		/**
		 * BRIEF: Guesses a token from a given string.
		 * NOTE: Specializes in tokens with 3 characters in them.
		 * PARAM: in The text
		 * 
		 * RETURN: A Token.
		*/
		Token ____get_const_token_3_chars(Text in);

		/**
		 * BRIEF: Guesses a token from a given string.
		 * NOTE: Specializes in tokens with 2 characters in them.
		 * PARAM: in The text
		 * 
		 * RETURN: A Token.
		*/
		Token ____get_const_token_2_chars(Text in);

		/**
		 * BRIEF: Guesses a token from a given string.
		 * NOTE: Specializes in tokens with 1 character in them.
		 * PARAM: in The text
		 * 
		 * RETURN: A Token.
		*/
		Token ____get_const_token_1_char(Text in);

		/**
		 * BRIEF: Guesses a token from a given string.
		 * NOTE: Specializes in tokens with more than 3 characters in them.
		 * PARAM: in The text
		 * 
		 * RETURN: A Token.
		*/
		Token ____get_const_token_variable_char(Text in);

		/**
		 * BRIEF: Guesses a keyword from a given string
		 * NOTE: Only should be called from ___advance_identifier()
		 * PARAM: in the text
		 * 
		 * RETURN: a Token.
		*/
		Token ____get_keyword_token(Text in);

		/**
		 * BRIEF: Returns token debug info
		 * PARAM: in the token
		 * 
		 * RETURN: a Text.
		*/
		Text _get_token_name(Token in);
	}
}

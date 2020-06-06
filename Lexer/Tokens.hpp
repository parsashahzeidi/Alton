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
			// First 
			lparen,
			rparen,
			lscope,
			rscope,
			lbrack,
			rbrack,
			preprocessor_call,
			constant_number,
			literalized_number,
			constant_float,
			constant_text,
			identifier,
			statement_end,
			oper_union,
			oper_dot,
			oper_colon,
			oper_assign,
			oper_plus_assign,
			oper_minus_assign,
			oper_star_assign,
			oper_slash_assign,
			oper_percent_assign,
			oper_left_left_assign,
			oper_right_right_assign,
			oper_accent_assign,
			oper_stand_assign,
			oper_ampersand_assign,
			oper_plus,
			oper_minus,
			oper_star,
			oper_slash,
			oper_percent,
			oper_left_left,
			oper_right_right,
			oper_accent,
			oper_stand,
			oper_ampersand,
			oper_plus_plus,
			oper_minus_minus,
			oper_ampersand_ampersand,
			oper_stand_stand,
			oper_equal,
			oper_not_equal,
			oper_less_than,
			oper_less_than_equal,
			oper_greater_than,
			oper_greater_than_equal,
			keyword_shader,
			keyword_float,
			keyword_bool,
			keyword_void,
			keyword_int,
			keyword_nat,
			keyword_var,
			keyword_goto,
			keyword_seg,
			keyword_graphic,
			keyword_interface,
			keyword_while,
			keyword_if,
			keyword_else,
			keyword_underscore,

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

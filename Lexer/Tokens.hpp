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
			statement_end,
			paranthesis_miniscope_opening,
			paranthesis_miniscope_closing,
			round_bracket_miniscope_opening,
			round_bracket_miniscope_closing,
			square_bracket_miniscope_opening,
			square_bracket_miniscope_closing,
			indent,
			outdent,
			constant_number,
			constant_float,
			constant_text,
			identifier,
			do_block,
			oper_plus,
			oper_plus_plus,
			oper_plus_assign,
			oper_minus,
			oper_mius_minus,
			oper_minus_assign,
			oper_star,
			oper_star_assign,
			oper_star_star,
			oper_star_star_assign,
			oper_slash,
			oper_slash_assign,
			oper_slash_slash,
			oper_slash_slash_assign,
			oper_percent,
			oper_percent_assign,
			oper_bit_left_shift,
			oper_bit_left_shift_assign,
			oper_bit_right_shift,
			oper_bit_right_shift_assign,
			oper_bit_and,
			oper_bit_and_assign,
			oper_bit_or,
			oper_bit_or_assign,
			oper_bit_xor,
			oper_bit_xor_assign,
			oper_equal,
			oper_not_equal,
			oper_not,
			oper_more_than,
			oper_more_than_equal,
			oper_less_than,
			oper_less_than_equal,
			oper_or,
			oper_and,
			oper_assign,
			oper_member_access,
			oper_union,
			keyword_var,
			keyword_constant,
			keyword_return,
			keyword_import,
			keyword_operation,
			keyword_function,
			keyword_for,
			keyword_if,
			keyword_while,
			keyword_try,
			keyword_check,
			keyword_raise,
			keyword__ZisisntZeFamousEisterEg__,
			keyword_segment,
			keyword_goto,

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

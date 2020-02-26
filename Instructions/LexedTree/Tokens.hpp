// This file was synthesized by /Path/To/Alton/Tools/Instructions/LexedTree/TokenHeaderGenerator.py

# pragma once

# include <ETC/Macros.hpp>

namespace Alton
{
	namespace Lexer
	{
		enum token
		{  // First 
			null_token,
			statement_end,
			paranthesis_miniscope_opening,
			paranthesis_miniscope_closing,
			round_bracket_miniscope_opening,
			round_bracket_miniscope_closing,
			square_bracket_miniscope_opening,
			square_bracket_miniscope_closing,
			indent,
			outdent,
			constant_integer,
			constant_text,
			identifier,
			oper_sum,
			oper_increment,
			oper_sum_assign,
			oper_subtract,
			oper_decrement,
			oper_subtract_assign,
			oper_multiply,
			oper_multiply_assign,
			oper_divide,
			oper_divide_assign,
			oper_modulate,
			oper_modulate_assign,
			oper_power,
			oper_power_assign,
			oper_root,
			oper_root_assign,
			oper_left_shift,
			oper_left_shift_assign,
			oper_right_shift,
			oper_right_shift_assign,
			oper_bitwise_and,
			oper_bitwise_and_assign,
			oper_bitwise_or,
			oper_bitwise_or_assign,
			oper_bitwise_xor,
			oper_bitwise_xor_assign,
			oper_equal_to,
			oper_not_equal_to,
			oper_larger_than,
			oper_larger_than_or_equal_to,
			oper_smaller_than,
			oper_smaller_than_or_equal_to,
			oper_or,
			oper_or_assign,
			oper_and,
			oper_and_assign,
			oper_not,
			oper_assign,
			oper_member_access,
			oper_union,
			keyword_variable,
			keyword_constant,
			keyword_return,
			keyword_import,
			keyword_oper,
			keyword_for,
			keyword_if,
			keyword_try,
			keyword_check,
			keyword_raise,
			keyword__ZisisntZeFamousEisterEg__,
		};

		text_t ___get_token_name_in_text(token in)
		{
			switch (in)
			{  // Second 
			case token::paranthesis_miniscope_opening: return U"(";
			case token::paranthesis_miniscope_closing: return U")";
			case token::round_bracket_miniscope_opening: return U"{";
			case token::round_bracket_miniscope_closing: return U"}";
			case token::square_bracket_miniscope_opening: return U"[";
			case token::square_bracket_miniscope_closing: return U"]";
			case token::oper_sum: return U"+";
			case token::oper_increment: return U"++";
			case token::oper_sum_assign: return U"+=";
			case token::oper_subtract: return U"-";
			case token::oper_decrement: return U"--";
			case token::oper_subtract_assign: return U"-=";
			case token::oper_multiply: return U"*";
			case token::oper_multiply_assign: return U"*=";
			case token::oper_divide: return U"/";
			case token::oper_divide_assign: return U"/=";
			case token::oper_modulate: return U"%";
			case token::oper_modulate_assign: return U"%=";
			case token::oper_power: return U"**";
			case token::oper_power_assign: return U"**=";
			case token::oper_root: return U"//";
			case token::oper_root_assign: return U"//=";
			case token::oper_left_shift: return U"<<";
			case token::oper_left_shift_assign: return U"<<=";
			case token::oper_right_shift: return U">>";
			case token::oper_right_shift_assign: return U">>=";
			case token::oper_bitwise_and: return U"&";
			case token::oper_bitwise_and_assign: return U"&=";
			case token::oper_bitwise_or: return U"|";
			case token::oper_bitwise_or_assign: return U"|=";
			case token::oper_bitwise_xor: return U"^";
			case token::oper_bitwise_xor_assign: return U"^=";
			case token::oper_equal_to: return U"==";
			case token::oper_not_equal_to: return U"!=";
			case token::oper_larger_than: return U">";
			case token::oper_larger_than_or_equal_to: return U">=";
			case token::oper_smaller_than: return U"<";
			case token::oper_smaller_than_or_equal_to: return U"<=";
			case token::oper_or: return U"||";
			case token::oper_or_assign: return U"||=";
			case token::oper_and: return U"&&";
			case token::oper_and_assign: return U"&&=";
			case token::oper_not: return U"!";
			case token::oper_assign: return U"=";
			case token::oper_member_access: return U".";
			case token::oper_union: return U",";
			case token::keyword__ZisisntZeFamousEisterEg__: return U"__decode_me___84095041";
			
			default:
				return U"";
			}
		}

		token ____get_const_token_3_chars(text_t in)
		{
			// Third 
			if (in == U"**=") return token::oper_power_assign; else
			if (in == U"//=") return token::oper_root_assign; else
			if (in == U"<<=") return token::oper_left_shift_assign; else
			if (in == U">>=") return token::oper_right_shift_assign; else
			if (in == U"||=") return token::oper_or_assign; else
			if (in == U"&&=") return token::oper_and_assign; else
			return token::null_token;
		}

		token ____get_const_token_2_chars(text_t in)
		{
			// Fourth 
			if (in == U"++") return token::oper_increment; else
			if (in == U"+=") return token::oper_sum_assign; else
			if (in == U"--") return token::oper_decrement; else
			if (in == U"-=") return token::oper_subtract_assign; else
			if (in == U"*=") return token::oper_multiply_assign; else
			if (in == U"/=") return token::oper_divide_assign; else
			if (in == U"%=") return token::oper_modulate_assign; else
			if (in == U"**") return token::oper_power; else
			if (in == U"//") return token::oper_root; else
			if (in == U"<<") return token::oper_left_shift; else
			if (in == U">>") return token::oper_right_shift; else
			if (in == U"&=") return token::oper_bitwise_and_assign; else
			if (in == U"|=") return token::oper_bitwise_or_assign; else
			if (in == U"^=") return token::oper_bitwise_xor_assign; else
			if (in == U"==") return token::oper_equal_to; else
			if (in == U"!=") return token::oper_not_equal_to; else
			if (in == U">=") return token::oper_larger_than_or_equal_to; else
			if (in == U"<=") return token::oper_smaller_than_or_equal_to; else
			if (in == U"||") return token::oper_or; else
			if (in == U"&&") return token::oper_and; else
			return token::null_token;
		}

		token ____get_const_token_1_char(text_t in)
		{
			// Fifth 
			if (in == U"(") return token::paranthesis_miniscope_opening; else
			if (in == U")") return token::paranthesis_miniscope_closing; else
			if (in == U"{") return token::round_bracket_miniscope_opening; else
			if (in == U"}") return token::round_bracket_miniscope_closing; else
			if (in == U"[") return token::square_bracket_miniscope_opening; else
			if (in == U"]") return token::square_bracket_miniscope_closing; else
			if (in == U"+") return token::oper_sum; else
			if (in == U"-") return token::oper_subtract; else
			if (in == U"*") return token::oper_multiply; else
			if (in == U"/") return token::oper_divide; else
			if (in == U"%") return token::oper_modulate; else
			if (in == U"&") return token::oper_bitwise_and; else
			if (in == U"|") return token::oper_bitwise_or; else
			if (in == U"^") return token::oper_bitwise_xor; else
			if (in == U">") return token::oper_larger_than; else
			if (in == U"<") return token::oper_smaller_than; else
			if (in == U"!") return token::oper_not; else
			if (in == U"=") return token::oper_assign; else
			if (in == U".") return token::oper_member_access; else
			if (in == U",") return token::oper_union; else
			return token::null_token;
		}

		token ____get_const_token_keywords(text_t in)
		{
			// Sixth 
			if (in == U"__decode_me___84095041") return token::keyword__ZisisntZeFamousEisterEg__; else
			return token::null_token;
		}
	}
}
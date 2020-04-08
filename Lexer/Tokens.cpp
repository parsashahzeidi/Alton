# include <Lexer/Tokens.hpp>


namespace Alton
{
	namespace Lexer
	{
		Text ___get_token_enum_in_text(Token in)
		{
			switch (in)
			{  // First 
			case Token::statement_end: return U";";
			case Token::paranthesis_miniscope_opening: return U"(";
			case Token::paranthesis_miniscope_closing: return U")";
			case Token::round_bracket_miniscope_opening: return U"{";
			case Token::round_bracket_miniscope_closing: return U"}";
			case Token::square_bracket_miniscope_opening: return U"[";
			case Token::square_bracket_miniscope_closing: return U"]";
			case Token::do_block: return U":";
			case Token::oper_plus: return U"+";
			case Token::oper_plus_plus: return U"++";
			case Token::oper_plus_assign: return U"+=";
			case Token::oper_minus: return U"-";
			case Token::oper_mius_minus: return U"--";
			case Token::oper_minus_assign: return U"-=";
			case Token::oper_star: return U"*";
			case Token::oper_star_assign: return U"*=";
			case Token::oper_star_star: return U"**";
			case Token::oper_star_star_assign: return U"**=";
			case Token::oper_slash: return U"/";
			case Token::oper_slash_assign: return U"/=";
			case Token::oper_slash_slash: return U"//";
			case Token::oper_slash_slash_assign: return U"//=";
			case Token::oper_percent: return U"%";
			case Token::oper_percent_assign: return U"%=";
			case Token::oper_bit_left_shift: return U"<<";
			case Token::oper_bit_left_shift_assign: return U"<<=";
			case Token::oper_bit_right_shift: return U">>";
			case Token::oper_bit_right_shift_assign: return U">>=";
			case Token::oper_bit_and: return U"&";
			case Token::oper_bit_and_assign: return U"&=";
			case Token::oper_bit_or: return U"|";
			case Token::oper_bit_or_assign: return U"|=";
			case Token::oper_bit_xor: return U"^";
			case Token::oper_bit_xor_assign: return U"^=";
			case Token::oper_equal: return U"==";
			case Token::oper_not_equal: return U"!=";
			case Token::oper_not: return U"!";
			case Token::oper_more_than: return U">";
			case Token::oper_more_than_equal: return U">=";
			case Token::oper_less_than: return U"<";
			case Token::oper_less_than_equal: return U"<=";
			case Token::oper_or: return U"||";
			case Token::oper_and: return U"&&";
			case Token::oper_assign: return U"=";
			case Token::oper_member_access: return U".";
			case Token::oper_union: return U",";
			
			default:
				return U"";
			}
		}

		Token ____get_const_token_3_chars(Text in)
		{
			// Second 
			if (in == U"**=") return Token::oper_star_star_assign; else
			if (in == U"//=") return Token::oper_slash_slash_assign; else
			if (in == U"<<=") return Token::oper_bit_left_shift_assign; else
			if (in == U">>=") return Token::oper_bit_right_shift_assign; else
			return Token::null_token;
		}

		Token ____get_const_token_2_chars(Text in)
		{
			// Third 
			if (in == U"++") return Token::oper_plus_plus; else
			if (in == U"+=") return Token::oper_plus_assign; else
			if (in == U"--") return Token::oper_mius_minus; else
			if (in == U"-=") return Token::oper_minus_assign; else
			if (in == U"*=") return Token::oper_star_assign; else
			if (in == U"**") return Token::oper_star_star; else
			if (in == U"/=") return Token::oper_slash_assign; else
			if (in == U"//") return Token::oper_slash_slash; else
			if (in == U"%=") return Token::oper_percent_assign; else
			if (in == U"<<") return Token::oper_bit_left_shift; else
			if (in == U">>") return Token::oper_bit_right_shift; else
			if (in == U"&=") return Token::oper_bit_and_assign; else
			if (in == U"|=") return Token::oper_bit_or_assign; else
			if (in == U"^=") return Token::oper_bit_xor_assign; else
			if (in == U"==") return Token::oper_equal; else
			if (in == U"!=") return Token::oper_not_equal; else
			if (in == U">=") return Token::oper_more_than_equal; else
			if (in == U"<=") return Token::oper_less_than_equal; else
			if (in == U"||") return Token::oper_or; else
			if (in == U"&&") return Token::oper_and; else
			return Token::null_token;
		}

		Token ____get_const_token_1_char(Text in)
		{
			// Fourth 
			if (in == U";") return Token::statement_end; else
			if (in == U"(") return Token::paranthesis_miniscope_opening; else
			if (in == U")") return Token::paranthesis_miniscope_closing; else
			if (in == U"{") return Token::round_bracket_miniscope_opening; else
			if (in == U"}") return Token::round_bracket_miniscope_closing; else
			if (in == U"[") return Token::square_bracket_miniscope_opening; else
			if (in == U"]") return Token::square_bracket_miniscope_closing; else
			if (in == U":") return Token::do_block; else
			if (in == U"+") return Token::oper_plus; else
			if (in == U"-") return Token::oper_minus; else
			if (in == U"*") return Token::oper_star; else
			if (in == U"/") return Token::oper_slash; else
			if (in == U"%") return Token::oper_percent; else
			if (in == U"&") return Token::oper_bit_and; else
			if (in == U"|") return Token::oper_bit_or; else
			if (in == U"^") return Token::oper_bit_xor; else
			if (in == U"!") return Token::oper_not; else
			if (in == U">") return Token::oper_more_than; else
			if (in == U"<") return Token::oper_less_than; else
			if (in == U"=") return Token::oper_assign; else
			if (in == U".") return Token::oper_member_access; else
			if (in == U",") return Token::oper_union; else
			return Token::null_token;
		}

		Token ____get_const_token_variable_char(Text in)
		{
			// Fifth 
			return Token::null_token;
		}

		Token ____get_keyword_token(Text in)
		{
			// Sixth 
			if (in == U"var") return Token::keyword_var; else
			if (in == U"constant") return Token::keyword_constant; else
			if (in == U"return") return Token::keyword_return; else
			if (in == U"import") return Token::keyword_import; else
			if (in == U"operation") return Token::keyword_operation; else
			if (in == U"Function") return Token::keyword_function; else
			if (in == U"for") return Token::keyword_for; else
			if (in == U"if") return Token::keyword_if; else
			if (in == U"while") return Token::keyword_while; else
			if (in == U"try") return Token::keyword_try; else
			if (in == U"check") return Token::keyword_check; else
			if (in == U"raise") return Token::keyword_raise; else
			if (in == U"__decode_me___19333125") return Token::keyword__ZisisntZeFamousEisterEg__; else
			if (in == U"segment") return Token::keyword_segment; else
			if (in == U"goto") return Token::keyword_goto; else
			return Token::null_token;
		}
		
		Text _get_token_name(Token in)
		{
			switch(in)
			{  // Seventh 
			case Token::statement_end: return U"statement_end";
			case Token::paranthesis_miniscope_opening: return U"paranthesis_miniscope_opening";
			case Token::paranthesis_miniscope_closing: return U"paranthesis_miniscope_closing";
			case Token::round_bracket_miniscope_opening: return U"round_bracket_miniscope_opening";
			case Token::round_bracket_miniscope_closing: return U"round_bracket_miniscope_closing";
			case Token::square_bracket_miniscope_opening: return U"square_bracket_miniscope_opening";
			case Token::square_bracket_miniscope_closing: return U"square_bracket_miniscope_closing";
			case Token::indent: return U"indent";
			case Token::outdent: return U"outdent";
			case Token::constant_number: return U"constant_number";
			case Token::constant_float: return U"constant_float";
			case Token::constant_text: return U"constant_text";
			case Token::identifier: return U"identifier";
			case Token::do_block: return U"do_block";
			case Token::oper_plus: return U"oper_plus";
			case Token::oper_plus_plus: return U"oper_plus_plus";
			case Token::oper_plus_assign: return U"oper_plus_assign";
			case Token::oper_minus: return U"oper_minus";
			case Token::oper_mius_minus: return U"oper_mius_minus";
			case Token::oper_minus_assign: return U"oper_minus_assign";
			case Token::oper_star: return U"oper_star";
			case Token::oper_star_assign: return U"oper_star_assign";
			case Token::oper_star_star: return U"oper_star_star";
			case Token::oper_star_star_assign: return U"oper_star_star_assign";
			case Token::oper_slash: return U"oper_slash";
			case Token::oper_slash_assign: return U"oper_slash_assign";
			case Token::oper_slash_slash: return U"oper_slash_slash";
			case Token::oper_slash_slash_assign: return U"oper_slash_slash_assign";
			case Token::oper_percent: return U"oper_percent";
			case Token::oper_percent_assign: return U"oper_percent_assign";
			case Token::oper_bit_left_shift: return U"oper_bit_left_shift";
			case Token::oper_bit_left_shift_assign: return U"oper_bit_left_shift_assign";
			case Token::oper_bit_right_shift: return U"oper_bit_right_shift";
			case Token::oper_bit_right_shift_assign: return U"oper_bit_right_shift_assign";
			case Token::oper_bit_and: return U"oper_bit_and";
			case Token::oper_bit_and_assign: return U"oper_bit_and_assign";
			case Token::oper_bit_or: return U"oper_bit_or";
			case Token::oper_bit_or_assign: return U"oper_bit_or_assign";
			case Token::oper_bit_xor: return U"oper_bit_xor";
			case Token::oper_bit_xor_assign: return U"oper_bit_xor_assign";
			case Token::oper_equal: return U"oper_equal";
			case Token::oper_not_equal: return U"oper_not_equal";
			case Token::oper_not: return U"oper_not";
			case Token::oper_more_than: return U"oper_more_than";
			case Token::oper_more_than_equal: return U"oper_more_than_equal";
			case Token::oper_less_than: return U"oper_less_than";
			case Token::oper_less_than_equal: return U"oper_less_than_equal";
			case Token::oper_or: return U"oper_or";
			case Token::oper_and: return U"oper_and";
			case Token::oper_assign: return U"oper_assign";
			case Token::oper_member_access: return U"oper_member_access";
			case Token::oper_union: return U"oper_union";
			case Token::keyword_var: return U"keyword_var";
			case Token::keyword_constant: return U"keyword_constant";
			case Token::keyword_return: return U"keyword_return";
			case Token::keyword_import: return U"keyword_import";
			case Token::keyword_operation: return U"keyword_operation";
			case Token::keyword_function: return U"keyword_function";
			case Token::keyword_for: return U"keyword_for";
			case Token::keyword_if: return U"keyword_if";
			case Token::keyword_while: return U"keyword_while";
			case Token::keyword_try: return U"keyword_try";
			case Token::keyword_check: return U"keyword_check";
			case Token::keyword_raise: return U"keyword_raise";
			case Token::keyword__ZisisntZeFamousEisterEg__: return U"keyword__ZisisntZeFamousEisterEg__";
			case Token::keyword_segment: return U"keyword_segment";
			case Token::keyword_goto: return U"keyword_goto";

			default:
				return U"??";
			}
		}
	}
}
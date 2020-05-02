# include <Lexer/Tokens.hpp>


namespace Alton
{
	namespace Lexer
	{
		Token ____get_const_token_3_chars(Text in)
		{
			// Second 
			return Token::null_token;
		}

		Token ____get_const_token_2_chars(Text in)
		{
			// Third 
			if (in == U"->") return Token::oper_arrow; else
			return Token::null_token;
		}

		Token ____get_const_token_1_char(Text in)
		{
			// Fourth 
			if (in == U"(") return Token::paranthesis_miniscope_opening; else
			if (in == U")") return Token::paranthesis_miniscope_closing; else
			if (in == U"{") return Token::round_bracket_miniscope_opening; else
			if (in == U"}") return Token::round_bracket_miniscope_closing; else
			if (in == U"[") return Token::square_bracket_miniscope_opening; else
			if (in == U"]") return Token::square_bracket_miniscope_closing; else
			if (in == U";") return Token::statement_end; else
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
			return Token::null_token;
		}

		Text _get_token_name(Token in)
		{
			switch(in)
			{  // Seventh 
			case Token::paranthesis_miniscope_opening: return U"paranthesis_miniscope_opening";
			case Token::paranthesis_miniscope_closing: return U"paranthesis_miniscope_closing";
			case Token::round_bracket_miniscope_opening: return U"round_bracket_miniscope_opening";
			case Token::round_bracket_miniscope_closing: return U"round_bracket_miniscope_closing";
			case Token::square_bracket_miniscope_opening: return U"square_bracket_miniscope_opening";
			case Token::square_bracket_miniscope_closing: return U"square_bracket_miniscope_closing";
			case Token::constant_number: return U"constant_number";
			case Token::literalized_number: return U"literalized_number";
			case Token::constant_float: return U"constant_float";
			case Token::constant_text: return U"constant_text";
			case Token::identifier: return U"identifier";
			case Token::statement_end: return U"statement_end";
			case Token::oper_arrow: return U"oper_arrow";

			default:
				return U"??";
			}
		}
	}
}

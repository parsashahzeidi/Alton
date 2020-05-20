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
			if (in == U">=") return Token::oper_greater_than_equal; else
			return Token::null_token;
		}

		Token ____get_const_token_1_char(Text in)
		{
			// Fourth 
			if (in == U"(") return Token::lparen; else
			if (in == U")") return Token::rparen; else
			if (in == U"{") return Token::lscope; else
			if (in == U"}") return Token::rscope; else
			if (in == U"[") return Token::lbrack; else
			if (in == U"]") return Token::rbrack; else
			if (in == U"~") return Token::preprocessor_call; else
			if (in == U";") return Token::statement_end; else
			if (in == U",") return Token::oper_union; else
			if (in == U".") return Token::oper_dot; else
			if (in == U"=") return Token::oper_assign; else
			if (in == U"+") return Token::oper_plus; else
			if (in == U"-") return Token::oper_minus; else
			if (in == U"*") return Token::oper_star; else
			if (in == U"<") return Token::oper_less_than; else
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
			if (in == U"Shader") return Token::keyword_shader; else
			if (in == U"Float") return Token::keyword_float; else
			if (in == U"Bool") return Token::keyword_bool; else
			if (in == U"Void") return Token::keyword_void; else
			if (in == U"Int") return Token::keyword_int; else
			if (in == U"Nat") return Token::keyword_nat; else
			if (in == U"Graphic") return Token::keyword_graphic; else
			if (in == U"while") return Token::keyword_while; else
			if (in == U"if") return Token::keyword_if; else
			if (in == U"else") return Token::keyword_else; else
			return Token::null_token;
		}

		Text _get_token_name(Token in)
		{
			switch(in)
			{  // Seventh 
			case Token::lparen: return U"lparen";
			case Token::rparen: return U"rparen";
			case Token::lscope: return U"lscope";
			case Token::rscope: return U"rscope";
			case Token::lbrack: return U"lbrack";
			case Token::rbrack: return U"rbrack";
			case Token::preprocessor_call: return U"preprocessor_call";
			case Token::constant_number: return U"constant_number";
			case Token::literalized_number: return U"literalized_number";
			case Token::constant_float: return U"constant_float";
			case Token::constant_text: return U"constant_text";
			case Token::identifier: return U"identifier";
			case Token::statement_end: return U"statement_end";
			case Token::oper_union: return U"oper_union";
			case Token::oper_dot: return U"oper_dot";
			case Token::oper_assign: return U"oper_assign";
			case Token::oper_plus: return U"oper_plus";
			case Token::oper_minus: return U"oper_minus";
			case Token::oper_star: return U"oper_star";
			case Token::oper_less_than: return U"oper_less_than";
			case Token::oper_greater_than_equal: return U"oper_greater_than_equal";
			case Token::keyword_shader: return U"keyword_shader";
			case Token::keyword_float: return U"keyword_float";
			case Token::keyword_bool: return U"keyword_bool";
			case Token::keyword_void: return U"keyword_void";
			case Token::keyword_int: return U"keyword_int";
			case Token::keyword_nat: return U"keyword_nat";
			case Token::keyword_graphic: return U"keyword_graphic";
			case Token::keyword_while: return U"keyword_while";
			case Token::keyword_if: return U"keyword_if";
			case Token::keyword_else: return U"keyword_else";

			default:
				return U"??";
			}
		}
	}
}

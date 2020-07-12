# include <Parser/AST/Type.hpp>


namespace Alton
{
	namespace Parser
	{
		namespace AST
		{
			bool Type::parse_internal_type
					(ParseHelper &h, Lexer::Token next_token)
			{
				// --- Body ---
				switch (next_token)
				{
				case Lexer::Token::keyword_var:
					type = TypeType::type_var;
					return true;

				case Lexer::Token::keyword_fast:
					type = TypeType::type_shader;
					return true;

				case Lexer::Token::keyword_fn:
					type = TypeType::type_function;
					return true;

				case Lexer::Token::keyword_bool:
					type = TypeType::type_bool;
					return true;

				case Lexer::Token::keyword_int:
					type = TypeType::type_int;
					return true;

				case Lexer::Token::keyword_nat:
					type = TypeType::type_nat;
					return true;

				case Lexer::Token::keyword_float:
					type = TypeType::type_float;
					return true;

				case Lexer::Token::keyword_void:
					type = TypeType::type_void;
					return true;

				default:
					type = TypeType::type_custom;
					return false;
				}
			}
			void Type::parse (ParseHelper &h)
			{
				// --- Head ---
				Lexer::Token next_token = h.curr (0).token_type;

				// --- Body ---
				if (parse_internal_type (h, next_token))
					h.virtually_advance ();

				else if (next_token == Lexer::Token::identifier)
					custom_type.parse (h);

				else
					Clinic::raise_pos
					(
						Clinic::Exceptions::
								UnrecognisedSyntaxException (),
						h.curr (0).position_in_code
					);
			}
			Type::Type (ParseHelper &h)
			{
				parse (h);
			}
			Type::Type ()
			{ }
		}  // AST
	}  // Parser
}  // Alton

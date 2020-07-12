# include <Parser/AST/TypeIdentifier.hpp>

namespace Alton
{
	namespace Parser
	{
		namespace AST
		{
			Container <TypeIdentifier>
					TypeIdentifier::parse_multiple (ParseHelper &h)
			{
				// --- Head ---
				bool const_flag;
				Lexer::Lexeme next_token = h.curr (0);
				Container <TypeIdentifier> output;
				TypeIdentifier typeidentifier;

				// --- Body ---
				// NOTE: Using h.can_expect is slow when we're checking for
				//	multiple token types, because switches use heaps, and
				//	h.can_expect is just a slow loop. The syntax
				//	h.can_expect (Natural count, ...); is just here to
				//	provide convenience, and will be deceperated later.
				//	( mainly because it's type insecure tho )
				switch (next_token.token_type)
				{
					// - The Referencers! -
					// These values get passed-by-reference, and they're
					//	usually used as a convenient way to return loss-values!
					//
					//	You: Why not just use the return system?
					//	Me:  Because if the caller doesn't want the loss values,
					//		They can just put a ghost variable ( _ ) thru the
					//		configuration. It's short; and sweet, and lets the
					//		code optimise further.
					//	You: Wow! Big brain!!
				case Lexer::Token::keyword_ref:
					const_flag = false;
					h.virtually_advance ();
					break;

					// - The Constant group! -
					// These arguments are CiW ( Copy-if-Writing ) variables,
					//	and they serve as a convenient way for the user to
					//	modify the the parameter during processing; a practice
					//	that I don't neccesairly associate with, but also a
					//	practice that is very popular.
					//	( Yes, Everything I hate IS popular. )
				case Lexer::Token::keyword_cst:
					h.virtually_advance ();
				default:
					const_flag = true;
					break;

				}
				// --- Definition ( in regex/antlr form )
				//	typeidentifier ->
				//		type ( [ identifier '_' ] )+ ( '=' value )? ---
				//	NOTE:
				//		The ( '=' value )? part is parsed after this call.

				// --- Body ---
				// -- type --
				typeidentifier.type.parse (h);

				// - Doing the inferrence tag -
				if (typeidentifier.type.type != TypeType::type_var)
					typeidentifier.inferrence = false;
				else typeidentifier.inferrence = true;

				// -- [ identifier '_' ] --
				next_token = h.curr (0);

				while (1)
				{
					if (next_token.token_type == Lexer::Token::identifier)
					{
						typeidentifier.identifier = next_token.enumeration;
						typeidentifier.is_ghost = false;
					}
	
					else if
					(
						next_token.token_type ==
								Lexer::Token::keyword_underscore
					)
					{
						typeidentifier.identifier = U"";
						typeidentifier.is_ghost = true;
					}

					else break;

					h.virtually_advance ();
					next_token = h.curr (0);
					output.push_back (typeidentifier);
				}

				return output;
			}
			
			void TypeIdentifier::parse (ParseHelper &h)
			{
				// --- Head ---
				Lexer::Lexeme next_token;
				
				// -- Definition ( in regex/antlr form )
				//	typeidentifier -> type [ identifier '_' ] --

				// --- Body ---
				// -- type --
				type.parse (h);

				// - Doing the inferrence tag -
				if (type.type == TypeType::type_var)
					inferrence = true;

				// -- [ identifier '_' ] --
				next_token = h.curr (0);

				if (h.can_expect (Lexer::Token::identifier))
				{
					identifier = h.advance (Lexer::Token::identifier);
				}

				else identifier = h.advance (Lexer::Token::keyword_underscore);
			}
			TypeIdentifier::TypeIdentifier (ParseHelper &h)
			{
				parse (h);
			}
			TypeIdentifier::TypeIdentifier ()
			{ }
		}  // AST
	}  // Parser
}  // Alton

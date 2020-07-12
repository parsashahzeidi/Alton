# include <Parser/AST/NamespaceInternals.hpp>

namespace Alton
{
	namespace Parser
	{
		namespace AST
		{
			void NamespaceInternals::parse_namespace (ParseHelper &h)
			{
				// --- Definition ( in regex/antlr form )
				//	namespace -> ns identifier '{' namespace_internals '}' ---
				
				// --- Body ---
				// -- ns --
				h.advance (Lexer::Token::keyword_ns);

				// -- identifier --
				stack.push_back (h.advance (Lexer::Token::identifier));

				// -- '{' --
				h.advance (Lexer::Token::lscope);

				// -- namespace_internals --
				while (!h.can_expect (Lexer::Token::rscope))
					parse_internals (h);

				// -- '}' --
				h.virtually_advance ();
			}

			void NamespaceInternals::parse_internals (ParseHelper &h)
			{
				// --- Head ---
				Function *function = nullptr;

				// --- Body ---
				// -- shader --
				if (h.can_expect (Lexer::Token::keyword_fast))
				{
					function = new ShaderFunction ();
					function->parse (h);

					functions.push_back (function);
				}
				
				// -- namespace --
				else if (h.can_expect (Lexer::Token::oper_slash))
				{
					parse_namespace (h);
				}

				// NOTE: Interface has alot of starting symbols, and they may
				//	change in the future. If I'd list them all here, changing
				//	them'd become a pain. Therefore, It'll just parse
				//	InterfaceFunction as a last bet when no other symbol works.
				//	This is slow, cuz interfaces are used ALOT. Atleast alot
				//	more than a namespace.
				// -- interface --
				else if (!h.can_expect (Lexer::Token::null_token))
				{
					function = new InterfaceFunction ();
					function->parse (h);

					functions.push_back (function);
				}
				else h.virtually_advance ();
			}
			void NamespaceInternals::parse (ParseHelper &h)
			{
				// --- Definition ( in regex/antlr form )
				//	namespace_internals -> [ interface shader namespace ]* ---
				
				// --- Body ---
				// LOOP!
				while (h.is_operating ())
					parse_internals (h);
			}
			NamespaceInternals::NamespaceInternals ()
			{ }
		}  // AST
	}  // Parser
}  // Alton

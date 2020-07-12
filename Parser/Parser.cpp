# include <Clinic/Clinic.hpp>
# include <Parser/Parser.hpp>
# include <Conversions/StringConvert.hpp>


namespace Alton
{
	namespace Parser
	{
		AST::NamespaceInternals Parser::parse ()
		{
			// --- Head ---
			h.init_op ();

			// --- Footer ---
			return parse_namespace_internals ();
		}

		AST::NamespaceInternals Parser::parse_namespace_internals ()
		{
			// --- Head ---
			AST::NamespaceInternals namespace_internals;

			// --- Body ---
			namespace_internals.parse (h);

			// --- Footer ---
			return namespace_internals;
		}

		Parser::Parser ():
				h (Lexer::LexemeList ())
		{ }

		Parser::Parser (Lexer::LexemeList &in):
				h (in)
		{
			// --- Body ---
			// -- Setting up the lexing symbols --
			for (Natural i = 0; i < in.size (); i++)
				h.out.push_back (in [i]);

			// -- Setting up the "$" / ending symbol --
			h.out.push_back
			(
				Lexer::Lexeme
				{
					Lexer::Token::null_token,
					0
				}
			);
		}

		Parser::~Parser(){ }
	}
}

# pragma once

# include <Parser/AST/BaseAST.hpp>
# include <Parser/AST/Location.hpp>
# include <Parser/TypeType.hpp>


namespace Alton
{
	namespace Parser
	{
		namespace AST
		{
			class Type: BaseAST
			{
				// --- Head
			private:

			public:
				Location custom_type;
				TypeType type;


				// --- Body
			private:

			public:
				void parse (ParseHelper &);
				bool parse_internal_type
						(ParseHelper &h, Lexer::Token next_token);

				// --- CTOR ~ DTOR
			public:
				Type (ParseHelper &);
				Type ();
			};
		}  // AST
	}  // Parser
}  // Alton

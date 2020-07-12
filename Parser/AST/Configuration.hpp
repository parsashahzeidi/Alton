# pragma once

# include <Parser/AST/BaseAST.hpp>
# include <Parser/AST/TypeIdentifier.hpp>


namespace Alton
{
	namespace Parser
	{
		namespace AST
		{
			class Configuration: BaseAST
			{
				// --- Head
			private:

			public:
				Container <TypeIdentifier> typeidentifiers;

				// --- Body
			private:

			public:
				void parse (ParseHelper &);
				void parse_argument (ParseHelper &);

				// --- CTOR ~ DTOR
			public:
				Configuration (ParseHelper &);
				Configuration ();
			};
		}  // AST
	}  // Parser
}  // Alton

# pragma once

# include <Parser/AST/BaseAST.hpp>


namespace Alton
{
	namespace Parser
	{
		namespace AST
		{
			class Location: BaseAST
			{
				// --- Head
			private:

			public:
				Container <Text> scopes;
				Text item;

				// --- Body
			private:

			public:
				void parse (ParseHelper &);

				// --- CTOR ~ DTOR
			public:
				Location ();
			};
		}  // AST
	}  // Parser
}  // Alton

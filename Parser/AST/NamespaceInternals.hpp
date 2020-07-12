# pragma once

# include <Parser/AST/BaseAST.hpp>
# include <Parser/AST/Function.hpp>
# include <Parser/AST/InterfaceFunction.hpp>
# include <Parser/AST/ShaderFunction.hpp>


namespace Alton
{
	namespace Parser
	{
		namespace AST
		{
			class NamespaceInternals: BaseAST
			{
				// --- Head
			private:

			public:
				Container <Text> stack;
				Container <Function *> functions;

				// --- Body
			private:

			public:
				void parse (ParseHelper &);
				void parse_internals (ParseHelper &);
				void parse_namespace (ParseHelper &);

				// --- CTOR ~ DTOR
			public:
				NamespaceInternals ();
			};
		}  // AST
	}  // Parser
}  // Alton

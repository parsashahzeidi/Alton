# pragma once

# include <Parser/AST/Function.hpp>
# include <Parser/AST/Type.hpp>



namespace Alton
{
	namespace Parser
	{
		namespace AST
		{
			class InterfaceFunction: public Function
			{
				// --- Head
			private:

			public:
				// TODO: ByteCode code;

				// --- Body
			private:

			public:
				void parse (ParseHelper &);

				// --- CTOR ~ DTOR
			public:
				InterfaceFunction (ParseHelper &);
				InterfaceFunction ();
			};
		}  // AST
	}  // Parser
}  // Alton

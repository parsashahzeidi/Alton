# pragma once

# include <Parser/AST/Function.hpp>


namespace Alton
{
	namespace Parser
	{
		namespace AST
		{
			class ShaderFunction: public Function
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
				ShaderFunction ();
			};
		}  // AST
	}  // Parser
}  // Alton

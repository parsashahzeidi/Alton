# pragma once

# include <Parser/ParseHelper.hpp>
# include <ETC/DoIGetHere.hpp>


namespace Alton
{
	namespace Parser
	{
		namespace AST
		{
			class BaseAST
			{
				// --- Body
			private:

			public:
				virtual void parse (ParseHelper &) = 0;
				// TODO: virtual ByteCode compile (ParseHelper &) = 0;

				// --- CTOR ~ DTOR
			public:
				BaseAST (ParseHelper &);
				BaseAST ();
			};
		}  // AST
	}  // Parser
}  // Alton

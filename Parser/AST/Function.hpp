# pragma once

# include <Parser/AST/BaseAST.hpp>
# include <Parser/AST/TypeIdentifier.hpp>
# include <Parser/AST/Arguments.hpp>


namespace Alton
{
	namespace Parser
	{
		namespace AST
		{
			class Function: BaseAST
			{
				// --- Head
			private:

			public:
				TypeIdentifier fingerprint;
				Arguments arguments;

				// --- Body
			private:

			public:
				virtual void parse (ParseHelper &) = 0;

				// --- CTOR ~ DTOR
			public:
				Function (ParseHelper &);
				Function ();
			};
		} /* AST */
	} /* Parser */
} /* Alton */

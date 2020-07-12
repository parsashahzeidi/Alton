# pragma once

# include <Parser/AST/BaseAST.hpp>
# include <Parser/AST/Configuration.hpp>
# include <Parser/AST/Location.hpp>


namespace Alton
{
	namespace Parser
	{
		namespace AST
		{
			class Arguments: BaseAST
			{
				// --- Head
			private:

			public:
				Configuration configuration;

				// --- Body
			private:

			public:
				void parse_location (ParseHelper &);
				virtual void parse (ParseHelper &);

				// --- CTOR ~ DTOR
			public:
				Arguments (ParseHelper &);
				Arguments ();
			};
		}  // AST
	}  // Parser
}  // Alton

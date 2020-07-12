# pragma once

# include <Parser/AST/Type.hpp>


namespace Alton
{
	namespace Parser
	{
		namespace AST
		{
			class TypeIdentifier: Type
			{
				// --- Head
			private:

			public:
				bool inferrence = false;
				bool is_ghost = false;
				Type type;
				Text identifier;

				// --- Body
			private:

			public:
				static Container <TypeIdentifier>
						parse_multiple (ParseHelper &h);
				void parse (ParseHelper &);

				// --- CTOR ~ DTOR
			public:
				TypeIdentifier (ParseHelper &);
				TypeIdentifier ();
			};
		}  // AST
	}  // Parser
}  // Alton

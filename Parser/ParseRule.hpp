# include <ETC/BareboneMacros.hpp>
# include <Parser/Symbol.hpp>


namespace Alton
{
	namespace Parser
	{
		struct ParseRule
		{
			// --- Head
			Symbol symbol = Symbol::null_symbol;
			Natural size = 0;

			// --- CTOR ~ DTOR
			// -- CTOR
			ParseRule (Symbol _symbol, Natural _size):
					symbol (_symbol),
					size (_size)
			{ }

			ParseRule () { }
		};
	}  // namespace Parser
}  // namespace Alton

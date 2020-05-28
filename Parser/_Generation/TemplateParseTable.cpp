/** NOTE: This file is synthesized by /Path/To/Alton/Parser/_Generation/ParserGenerator.py */
# include <ETC/BareboneMacros.hpp>
# include <Parser/Parser.hpp>
# include <Parser/ParseHelper.hpp>


namespace Alton
{
	namespace Parser
	{
		void ParseHelper::initialize_rules ()
		{
			// --- Head ---
			// -- First, HUGE -- %s
		}

		void ParseHelper::initialize_parse_table ()
		{
			// --- Head ---
			// -- Second --
			const Natural state_count = %s;
			const Natural symbol_count = Symbol::count;
			table.resize (state_count);

			// --- Body ---
			// -- Third, HUGE -- %s
		}
	} // namespace Parser
} // namespace Alton

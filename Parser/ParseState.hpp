# pragma once

# include <ETC/BareboneMacros.hpp>


namespace Alton
{
	namespace Parser
	{
		struct ParseState
		{
			// --- Head
			Natural i = 0;
			Natural position_in_code = 0;

			// --- Body
			// --- CTORs ~ DTORs
			// -- CTORs
			ParseState ();
			ParseState (Natural state_number, Natural _position_in_code);

			// -- DTORs
			~ParseState ();
		};
	}  // namesp Parser
}  // namesp Alton

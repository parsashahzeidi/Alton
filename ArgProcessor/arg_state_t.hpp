# pragma once

# include <ETC/Macros.hpp>

namespace Alton
{
	namespace ArgProcessor
	{
		// A chart for easier detection of arguments
		using arg_state_t = cont_t<text_t>;
		// TODO:
		//	Turn this into a state system independent of cont_t
		//	Then Add functions like get_arg( arg_id )
	}
}
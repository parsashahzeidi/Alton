# pragma once

# include <Types/BaseContainer.hpp>


namespace Alton
{
	namespace ArgumentProcessor
	{
		// A chart for easier detection of arguments
		using ArgumentState = Container<Text>;
		/**
		 * TODO:
			Turn this into a state system independent of Container
			Then Add functions like get_arg( ArgumentID )
		 */
	}
}
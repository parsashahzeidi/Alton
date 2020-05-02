# pragma once

# include <ETC/BareboneMacros.hpp>


namespace Alton
{
	namespace Clinic
	{
		enum Component
		{
			main_run,
			arg_lib,
			lexer_lib,
			parser_lib,
			clinic_lib,
			convert_lib,
			tool_lib,
			external,

			// Not a component
			count
		};

		/**
		 * @brief Grabs a human readable identifier for a component
		*/
		Character get_component_char(Component in);
	} // namespace Clinic
} // namespace Alton

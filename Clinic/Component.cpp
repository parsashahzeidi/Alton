# include <Clinic/Component.hpp>


namespace Alton
{
	namespace Clinic
	{
		Text get_component_string(Component in)
		{
			switch (in)
			{
			case Component::main_run:
				return U"Alton.cpp";

			case Component::arg_lib:
				return U"Argument Processor";

			case Component::lexer_lib:
				return U"Lexer";

			case Component::parser_lib:
				return U"Parser";

			case Component::clinic_lib:
				return U"Clinic";

			case Component::convert_lib:
				return U"Conversion Toolset";

			case Component::tool_lib:
				return U"General Toolset";

			case Component::external:
				return U"External / Improper location";

			case Component::count:
			default:
				return U"----ERROR----";
			}
		}
	}
}
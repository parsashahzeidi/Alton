# include <Clinic/Component.hpp>


namespace Alton
{
	namespace Clinic
	{
		Character get_component_char(Component in)
		{
			switch (in)
			{
			case Component::main_run:
				return U'M';

			case Component::arg_lib:
				return U'A';

			case Component::lexer_lib:
				return U'L';

			case Component::parser_lib:
				return U'P';

			case Component::clinic_lib:
				return U'C';

			case Component::convert_lib:
				return U'T';

			case Component::tool_lib:
				return U'T';

			case Component::external:
				return U'?';

			case Component::count:
			default:
				return U'?';
			}
		}
	}
}
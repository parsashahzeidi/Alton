# pragma once

# include <ETC/Macros.hpp>

namespace Alton
{
	namespace ArgProcessor
	{
		// A list for all the possible arguments
		enum arg_id
		{
			output_path = 0,
			input_file,

			// Not a argument
			count
		};
	}
}
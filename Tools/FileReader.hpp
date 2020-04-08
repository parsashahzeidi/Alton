# pragma once

# include <ETC/BareboneMacros.hpp>
# include <Clinic/Clinic.hpp>

namespace Alton
{
	namespace Tools
	{
		/**
		 * BRIEF: Reads an input file.
		 * PARAM: path The path to the file to read from
			
		 * RETURN: A text
		*/
		Text read_file(std::filesystem::path path);
	}
}

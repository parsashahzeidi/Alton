# pragma once
/*
	This file includes all of the libraries
	that are needed in order to be able to
	compile Alton. In the close future, this
	list will contain less external libraries
	and more internal libraries. This is done
	in order to reduce the risk of licencing
	issues.

	Alton is licensed under the Boost
	Software License which is compatible with
	the GNU's General Public License ( GPL ).
	see:
		/Alton/LICENSE
*/

// We'll Enable this when we need it.
// # include <thread>
# include <filesystem>
# include <vector>
# include <stdint.h>
# include <iostream>
# include <string>
# include <fstream>

// Some typedefs
namespace Alton
{
	inline namespace Types
	{
		typedef char32_t utfchar_t;
		typedef std::u32string text_t;

		// TODO: Replace these with abrietary precision types
		typedef int64_t num_t;
		typedef size_t natural_num_t;
		typedef double float_t;
	}
}

// String Type Conversion
# include <ETC/StringConvert.hpp>

// Newline character
# if defined(__WIN__)
	# define nl_str "\r\n"
# else
	# define nl_str "\n"
# endif

# define nl_txt str_to_text(nl_str)

// Errors
# include <ETC/ErrorTemplates.hpp>

// Error Handling
# include <ETC/ErrorHandler.hpp>

// Input Reading
# include <ETC/FileReader.hpp>
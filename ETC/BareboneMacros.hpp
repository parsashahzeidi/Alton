# pragma once
/*
	This file includes most of the libraries
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
		/Path/To/Alton/LICENSE
*/

// --- External Libraries ---
# include <pthread.h>
# include <filesystem>
# include <cstdint>
# include <iostream>
# include <string>
# include <fstream>
# include <cstdarg>


// --- Internal Libraries ---
# include <ETC/VersionData.hpp>

// --- Newline Characters ---
# if ALTON_OS == OS_WINDOWS || ALTON_OS == OS_OS2
	# define nl_str "\r\n"
	# define nl_txt U"\r\n"
# else
	# define nl_str "\n"
	# define nl_txt U"\n"
# endif

// --- String / Text Initialization ---
# define text_init Alton::Types::Text() +
# define str_init std::string() +

// --- Typedefs / Usings ---
namespace Alton
{
	inline namespace Types
	{
		// -- String / Text --
		using Character = char32_t;
		using Text = std::u32string;

		// -- Numeric --
		using Number = long long int;
		using Natural = unsigned long long int;
		using Float = long double;
	}
}

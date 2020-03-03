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
		/Path/To/Alton/LICENSE
*/

# include <thread>  // TODO: Make a wrapper class similliar to std::thread but with pthread_ calls.
# include <filesystem>
# include <stdint.h>
# include <iostream>
# include <string>
# include <fstream>

// Version Data
# include <ETC/VersionData.hpp>

// Some typedefs
namespace Alton
{
	inline namespace Types
	{
		// String
		using utfchar_t = char32_t;
		using text_t = std::u32string;

		// TODO: Replace these with abrietary precision types
		// Numeric
		using num_t = long long int;
		using natnum_t = unsigned long long int;
		using float_t = long double;
	}
}

// Container Type
# include <Types/BaseContainer.hpp>

// String Type Conversion
# include <Conversions/StringConvert.hpp>

// Text Fill Tools
# include <Tools/TextFill.hpp>

// Newline Character
# if defined(__WIN__)
	# define nl_str "\r\n"
	# define nl_txt U"\r\n"
# else
	# define nl_str "\n"
	# define nl_txt U"\n"
# endif

// Error Templates
# include <Clinic/Exceptions/ErrorTemplates.hpp>

// Error Handling
# include <Clinic/Clinic.hpp>

// Number to Hex Conversion
# include <Conversions/ToHex.hpp>

// Input Reading
# include <Tools/FileReader.hpp>
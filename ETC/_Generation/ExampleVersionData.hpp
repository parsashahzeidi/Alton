// This file was synthesized by /Path/To/Alton/Tools/Instructions/LexedTree/TokenHeaderGenerator.py

# pragma once

// --- Versioning ---
// -- The major release's index --
# ifdef ALFIE_MAJOR_VERSION
	# undef ALFIE_MAJOR_VERSION
# endif /*ALFIE_MAJOR_VERSION*/
# define ALFIE_MAJOR_VERSION 0x%s  // First


// -- The major release's name --
# ifdef ALTON_RELEASE_NAME
	# undef ALTON_RELEASE_NAME
# endif /*ALFIE_MAJOR_VERSION*/
# define ALTON_RELEASE_NAME U"%s"  // Second


// -- The standard that this build complies with --
# ifdef ALTON_REVISION
	# undef ALTON_REVISION
# endif /*ALTON_REVISION*/
# define ALTON_REVISION 0x%s  // Third


// -- The number of commits after the major release --
# ifdef ALTON_COMMIT_NUMBER
	# undef ALTON_COMMIT_NUMBER
# endif /*ALTON_COMMIT_NUMBER*/
# define ALTON_COMMIT_NUMBER 0x%s  // Fourth


// -- The Postfix of the version --
# ifdef ALTON_VERSION_POSTFIX
	# undef ALTON_VERSION_POSTFIX
# endif /*ALTON_VERSION_POSTFIX*/
# define ALTON_VERSION_POSTFIX U"%s"  // Fifth


// --- Build timing ---
// -- Major timings --
// - Year -
# ifdef ALTON_BUILD_TIME_YEAR
	# undef ALTON_BUILD_TIME_YEAR
# endif /*ALTON_BUILD_TIME_YEAR*/
# define ALTON_BUILD_TIME_YEAR %s  // Sixth

// - Month -
# ifdef ALTON_BUILD_TIME_MONTH
	# undef ALTON_BUILD_TIME_MONTH
# endif /*ALTON_BUILD_TIME_MONTH*/
# define ALTON_BUILD_TIME_MONTH %s  // Seventh

// - Day -
# ifdef ALTON_BUILD_TIME_DAY
	# undef ALTON_BUILD_TIME_DAY
# endif /*ALTON_BUILD_TIME_DAY*/
# define ALTON_BUILD_TIME_DAY %s  // Eigth


// -- Minor timings --
// - Hour -
# ifdef ALTON_BUILD_TIME_HOUR
	# undef ALTON_BUILD_TIME_HOUR
# endif /*ALTON_BUILD_TIME_HOUR*/
# define ALTON_BUILD_TIME_HOUR %s  // Ninth

// - Minute -
# ifdef ALTON_BUILD_TIME_MINUTE
	# undef ALTON_BUILD_TIME_MINUTE
# endif /*ALTON_BUILD_TIME_MINUTE*/
# define ALTON_BUILD_TIME_MINUTE %s  // Tenth

// - Second -
# ifdef ALTON_BUILD_TIME_SECOND
	# undef ALTON_BUILD_TIME_SECOND
# endif /*ALTON_BUILD_TIME_SECOND*/
# define ALTON_BUILD_TIME_SECOND %s  // Eleventh!



// --- Build Platform ---
// -- The System's Version Info --
// - The System's Operating System -
# ifdef ALTON_OS
	# undef ALTON_OS
# endif /*ALTON_OS*/

# ifndef ALTON_OS_TEXT
	# undef ALTON_OS_TEXT
# endif /*ALTON_OS_TEXT*/

// Twelveth
%s

// Thirteenth
# %sse
	# error This operating system is not recognised by Alton.\
			Please modify /Path/To/Alton/ETC/_Generation/ExampleVersionData.hpp.
# endif

// - The System's CPU Architecture -
# ifdef ALTON_ARCH
	# undef ALTON_ARCH
# endif /*ALTON_ARCH*/

# ifdef ALTON_ARCH_TEXT
	# undef ALTON_ARCH_TEXT
# endif /*ALTON_ARCH_TEXT*/

// Fourteenth
%s

// Fifteenth
# %sse
	# error This architecture is not recognised by Alton.\
			Please modify /Path/To/Alton/ETC/_Generation/ExampleVersionData.hpp.
# endif

// Sixteenth
%s

// Seventeenth
# %sse
	# error This compiler is not recognised by Alton.\
			Please modify /Path/To/Alton/ETC/_Generation/ExampleVersionData.hpp.
# endif

// -- The Python Executable's Platform Info --
# ifdef ALTON_PYTHON_VERSION_INFO
	# undef ALTON_PYTHON_VERSION_INFO
# endif /*ALTON_PYTHON_VERSION_INFO*/
# define ALTON_PYTHON_VERSION_INFO U"%s"  // Eighteenth

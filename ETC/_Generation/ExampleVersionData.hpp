// This file was synthesized by /Path/To/Alton/Tools/Instructions/LexedTree/TokenHeaderGenerator.py

# pragma once

// --- Versioning ---
// -- The major release's index --
# ifdef ALTON_MAJOR_VERSION
	# undef ALTON_MAJOR_VERSION
# endif /*ALTON_MAJOR_VERSION*/
# define ALTON_MAJOR_VERSION 0x%s  // First


// -- The major release's name --
# ifdef ALTON_RELEASE_NAME
	# undef ALTON_RELEASE_NAME
# endif /*ALTON_MAJOR_VERSION*/
# define ALTON_RELEASE_NAME U"%s"  // Second


// -- The standard that this build complies with --
# ifdef ALFIE_STANDARD_COMPLIANCE
	# undef ALFIE_STANDARD_COMPLIANCE
# endif /*ALFIE_STANDARD_COMPLIANCE*/
# define ALFIE_STANDARD_COMPLIANCE 0x%s  // Third


// -- The number of commits after the major release --
# ifdef ALTON_COMMIT_NUMBER
	# undef ALTON_COMMIT_NUMBER
# endif /*ALTON_COMMIT_NUMBER*/
# define ALTON_COMMIT_NUMBER 0x%s  // Fourth



// --- Build timing ---
// -- Major timings --
// - Year -
# ifdef ALTON_BUILD_TIME_YEAR
	# undef ALTON_BUILD_TIME_YEAR
# endif /*ALTON_BUILD_TIME_YEAR*/
# define ALTON_BUILD_TIME_YEAR %s  // Fifth

// - Month -
# ifdef ALTON_BUILD_TIME_MONTH
	# undef ALTON_BUILD_TIME_MONTH
# endif /*ALTON_BUILD_TIME_MONTH*/
# define ALTON_BUILD_TIME_MONTH %s  // Sixth

// - Day -
# ifdef ALTON_BUILD_TIME_DAY
	# undef ALTON_BUILD_TIME_DAY
# endif /*ALTON_BUILD_TIME_DAY*/
# define ALTON_BUILD_TIME_DAY %s  // Seventh


// -- Minor timings --
// - Hour -
# ifdef ALTON_BUILD_TIME_HOUR
	# undef ALTON_BUILD_TIME_HOUR
# endif /*ALTON_BUILD_TIME_HOUR*/
# define ALTON_BUILD_TIME_HOUR %s  // Eigth

// - Minute -
# ifdef ALTON_BUILD_TIME_MINUTE
	# undef ALTON_BUILD_TIME_MINUTE
# endif /*ALTON_BUILD_TIME_MINUTE*/
# define ALTON_BUILD_TIME_MINUTE %s  // Ninth

// - Second -
# ifdef ALTON_BUILD_TIME_SECOND
	# undef ALTON_BUILD_TIME_SECOND
# endif /*ALTON_BUILD_TIME_SECOND*/
# define ALTON_BUILD_TIME_SECOND %s  // Tenth!

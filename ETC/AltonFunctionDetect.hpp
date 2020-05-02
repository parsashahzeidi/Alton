# pragma once

# ifdef ALTON_FUNCTION_DETECT
	# undef ALTON_FUNCTION_DETECT
# endif /* ALTON_FUNCTION_DETECT */

// The ALTON_FUNCTION_DETECT macro
# if ( ALTON_COMPILER == COMPILER_GNUC )				\
	|| ( ALTON_COMPILER == COMPILER_METROWERKS )		\
	|| ( ALTON_COMPILER == COMPILER_INTELC )			\
	|| ( ALTON_COMPILER == COMPILER_GREENHILL )		\
	|| ( ALTON_COMPILER == COMPILER_DM )				\
	|| ( ALTON_COMPILER == COMPILER_CLANG )

	# define ALTON_FUNCTION_DETECT Alton::Conversions::str_to_text\
	(\
		__PRETTY_FUNCTION__\
	)

# elif defined(__FUNCSIG__)											\
	|| ( ALTON_COMPILER == COMPILER_MSVC )

	# define ALTON_FUNCTION_DETECT Alton::Conversions::str_to_text\
	(\
		__FUNCSIG__\
	)

# else
	# define ALTON_FUNCTION_DETECT Alton::Conversions::str_to_text\
	(\
		__func__\
	)

# endif /* __PRETTY_FUNCTION__ */

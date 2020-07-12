# pragma once

# ifdef ALTON_DEBUG_MODE
	# undef ALTON_DEBUG_MODE
# endif  /* defined (ALTON_DEBUG_MODE) */

# if defined (NDEBUG) && NDEBUG == 1
	# define ALTON_DEBUG_MODE false

# else
	# define ALTON_DEBUG_MODE true

# endif

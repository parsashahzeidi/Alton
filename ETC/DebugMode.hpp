# pragma once

# ifdef DEBUG_MODE
	# undef DEBUG_MODE
# endif  /* defined (DEBUG_MODE) */

# if defined (NDEBUG) && NDEBUG == 1
	# define DEBUG_MODE false

# else
	# define DEBUG_MODE true

# endif

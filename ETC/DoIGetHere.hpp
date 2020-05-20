# pragma once

# include <ETC/DebugMode.hpp>
# include <Clinic/Clinic.hpp>

# ifdef do_i_get_here
	# undef do_i_get_here
# endif  /* defined (do_i_get_here) */

# if DEBUG_MODE
	# define do_i_get_here(component) \
		Clinic::say\
		(\
			component,\
			text_init U"You have reached the function " + ALTON_FUNCTION_DETECT\
		)

# else
	# define do_i_get_here()

# endif

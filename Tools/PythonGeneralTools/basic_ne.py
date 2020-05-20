#!/usr/bin/pypy3

def basic_ne(a, b):
	# This function needs to be heavily optimized, so NotImplemented checks are
	#	removed.
	result = (a == b)

	if\
			   result == 0\
			or result == False:
		return True
	return False

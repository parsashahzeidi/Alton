#!/usr/bin/pypy3

def basic_ne(a, b):
	result = (a == b)

	if result == NotImplemented:
		return 0
	
	elif result == 0:
		return 1
	
	else: return 0


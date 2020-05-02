#!/usr/bin/pypy3

def remove_repetitions(iterable):
	output = type(iterable)()

	for i in iterable:
		if i not in output:
			output += [i]

	return output

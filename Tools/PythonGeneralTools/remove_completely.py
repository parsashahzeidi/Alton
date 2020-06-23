#!/usr/bin/pypy3

def remove_completely (input: list, exclude: list):
	# --- Head
	output = []

	# --- Body
	for i in input:
		if i not in exclude:
			output.append (i)

	return output

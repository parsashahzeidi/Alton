#!/usr/bin/pypy3
from copy import deepcopy


def make_multiplication (item, axis: list):
	array = item
	new_array = []

	for i in axis:
		for _ in range (i):
			new_array.append (deepcopy (array))

		array = new_array
		new_array = []

	return array

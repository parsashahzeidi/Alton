#!/usr/bin/pypy3
from copy import deepcopy


def make_multiplication (item, axis: list):
	array = []

	if axis != []:
		for i in range (axis [0]):
			array.append (make_multiplication (item, axis [1:]))

		return array

	else:
		return deepcopy (item)

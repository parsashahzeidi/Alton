#!/usr/bin/pypy3
from copy import deepcopy


def make_multiplication(item, times: int):
	array = []

	for _ in range (times):
		array.append (deepcopy (item))

	return array
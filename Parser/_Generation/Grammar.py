#!/usr/bin/pypy3

from os import getcwd
from sys import path
path.append(getcwd())

from Parser._Generation.Symbol import Symbol
from Tools.PythonGeneralTools.basic_ne import basic_ne

s0_symbol = Symbol ("s0", 0)


class Grammar:
	def __init__ (self):
		self.name = None
		self.non_terminal = None
		self.product = []

	def __eq__(self, item):
		if self.name != item.name:
			return 0

		if self.product != item.product:
			return 0

		return NotImplemented

	def __ne__(self, item):
		return basic_ne(self, item)

	def get_cpp_parserule_representation (self):
		output = "ParseRule (Symbol::nterm_"
		if self.symbol () != s0_symbol:
			output += self.name + ", "
		else:
			output += "start, "
		output += str (len (self.product)) + ")"

		return output

	def symbol (self):
		if self.non_terminal is None:
			self.non_terminal = Symbol (self.name)

		return self.non_terminal

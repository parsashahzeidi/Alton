#!/usr/bin/pypy3

from os import getcwd
from sys import path
path.append(getcwd())

from Tools.PythonGeneralTools.basic_ne import basic_ne
from Parser._Generation.Symbol import Symbol


class ParseTransition:
	def __init__ (self, symbol: Symbol, new_state: int):
		self.symbol = symbol
		self.new_state = new_state

	def verify (self, symbol: Symbol, new_state: int):
		# --- Body
		if self.verify_symbol (symbol):
			return False

		elif self.new_state != new_state:
			return False

		else: return True

	def verify_symbol (self, symbol: Symbol):
		# --- Body
		if self.symbol == symbol:
			return True
		else: return False

	def __eq__ (self, item):
		return verify (item.symbol, item.new_state)

	def __ne__ (self, item):
		return basic_ne (self, item)

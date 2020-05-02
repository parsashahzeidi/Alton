#!/usr/bin/pypy3

from os import getcwd
from sys import path
path.append(getcwd())

from Parser._Generation.Grammar import Grammar
from Parser._Generation.Symbol import Symbol
from Tools.PythonGeneralTools.basic_ne import basic_ne
from copy import deepcopy

class Configuration(Grammar):
	def __init__(self, grammar: Grammar, lookahead: Symbol, position: int):
		self.product = grammar.product
		self.name = grammar.name
		self.lookahead = lookahead
		self.position = position

	def __str__(self):
		# --- NOTE: The character '·' has the unicode value of u00B7.
		# --- Head
		position = 0

		# -- "X -> "
		output = self.name + " -> "

		# --- Body
		# -- "X -> a "
		while position < self.position:
			output += self.product[position].symbol + " "
			position += 1

		# -- "X -> a ·"
		output += "·"

		# -- "X -> a · X"
		if not self.reached_end():
			while position < len(self.product):
				output += " " + self.product[position].symbol
				position += 1

		# -- "X -> a · X, a"
		output += ", " + self.lookahead.symbol

		return output

	def __eq__(self, item):
		if len(self.product) != len(item.product):
			return 0

		else:
			for i in range(len(self.product)):
				if self.product[i] != item.product[i]:
					return 0

		if self.name != item.name:
			return 0

		if self.lookahead != item.lookahead:
			return 0

		if self.position != item.position:
			return 0

		# No need to return NotImplemented, Cuz we alrdy checked
		# the parent ( Grammar )'s values, such as product and name.
		return 1

	def __ne__(self, item):
		return basic_ne(self, item)

	def get_next_symbol(self, pos=1):
		# NOTE: There's no need to add one to the position; since the next configuration would be the configuration
		#	after the dot, and the dot's position is indexed from the start, BEHIND the first configuration.
		if pos > 1:
			return self.advanced().get_next_symbol(pos - 1)

		elif self.reached_end():
			return self.lookahead

		else: return self.product[self.position]

	def get_grammar(self):
		# --- Head
		text = ""
		product_list = []

		# --- Body
		# -- A Grammar only has two members.
		text += self.name + "->"

		for i in self.product:
			product_list.append(i.symbol)

		text += " ".join(product_list)

		return Grammar(text)

	def reached_end(self):
		if self.position == len(self.product):
			return 1

		else: return 0

	def advanced(self):
		cache = deepcopy(self)
		cache.position += 1
		return cache

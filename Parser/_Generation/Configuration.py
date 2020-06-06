#!/usr/bin/pypy3

from os import getcwd
from sys import path
path.append(getcwd())

from Parser._Generation.Grammar import Grammar
from Parser._Generation.Symbol import Symbol
from Tools.PythonGeneralTools.basic_ne import basic_ne

_grammar_list = []

def get_product_index (product: Grammar):
	# --- Head
	index = None

	# --- Body
	# -- Checking if we're supposed to add the product to the list or not
	if product not in _grammar_list:
		# - In this case, just return the length.
		index = len (_grammar_list)
		_grammar_list.append (product)

	else:
		# - Find it!
		index = _grammar_list.index (product)

	return index


def get_product (index: int):
	return _grammar_list [index]


class Configuration():
	def __init__(self, grammar: Grammar, lookahead: Symbol, position: int):
		self._product = get_product_index (grammar.product)
		self._actual_product = grammar.product
		self.name = grammar.name
		self.lookahead = lookahead
		self.position = position

	def __str__(self):
		# --- NOTE: The character '·' has the unicode value of u00B7
		# --- Head
		position = 0

		# -- "X -> "
		output = self.name + " ->"

		# --- Body
		# -- "X -> a"
		while position < self.position:
			output += " " + self.product () [position].symbol
			position += 1

		# -- "X -> a ·"
		output += " ·"

		# -- "X -> a · X"
		if not self.reached_end():
			while position < len(self.product ()):
				output += " " + self.product () [position].symbol
				position += 1

		# -- "X -> a·X -> a"
		output += " -> " + self.lookahead.symbol

		return output

	def __eq__(self, item):
		return self.strict_eq (item)

	def lalr_eq (self, item):
		if\
				   self._product	!= item._product	\
				or self.name		!= item.name		\
				or self.position	!= item.position:
			return False

		else: return True

	def strict_eq (self, item):
		if\
				   self._product	!= item._product	\
				or self.name		!= item.name		\
				or self.position	!= item.position	\
				or self.lookahead	!= item.lookahead:
			return False

		else: return True

	def __ne__(self, item):
		return basic_ne(self, item)

	def product (self):
		return self._actual_product

	def get_next_next_symbol (self):
		if self.position + 1 == len (self.product ()):
			return self.lookahead

		else: return self.product () [self.position + 1]

	def get_next_symbol(self):
		# NOTE: There's no need to add one to the position; since the next configuration would be the configuration
		#	after the dot, and the dot's position is indexed from the start, BEHIND the first configuration.
		if self.reached_end ():
			return self.lookahead

		else: return self.product () [self.position]

	def reached_end(self):
		if self.position == len (self.product ()):
			return 1

		else: return 0

	def advance (self):
		self.position += 1

#!/usr/bin/pypy3

from os import getcwd
from sys import path
path.append(getcwd())

from Parser._Generation.Grammar import Grammar
from Parser._Generation.Symbol import Symbol
from Tools.PythonGeneralTools.basic_ne import basic_ne
from Tools.PythonGeneralTools.list_equality import list_equality

grammar_list = []
_lookahead_list = []


def get_product_index (product: Grammar):
	# --- Head
	index = None

	# --- Body
	# -- Checking if we're supposed to add the product to the list or not
	if product not in grammar_list:
		# - In this case, just return the length.
		index = len (grammar_list)
		grammar_list.append (product)

	else:
		# - Find it!
		index = grammar_list.index (product)

	return index


def get_product (index: int):
	return grammar_list [index]


def make_lookahead (lookahead: list):
	# --- Head
	index = len (_lookahead_list)

	# --- Body
	_lookahead_list.append (lookahead)

	return index


def get_lookahead (index: int):
	return _lookahead_list [index]


def add_lookahead (index: int, symbol: Symbol):
	_lookahead_list [index].append (symbol)


class Configuration:
	def __init__(self, grammar: Grammar, lookahead: list, position: int):
		self._product = get_product_index (grammar)
		self._actual_product = grammar.product
		self.name = grammar.name
		self._lookahead = make_lookahead (lookahead)
		self.position = position

	def get_markdown (self, conflicts: list):
		# NOTE: The character '·' has the unicode value of u00B7
		# --- Head
		position = 0
		lookahead_symbol_list = self.lookahead ()
		lookahead_list = [i.symbol for i in lookahead_symbol_list]
		symbol = None
		symbol_text = ""

		# -- "X -> "
		output = self.name + " ->"

		# --- Body
		# -- "X -> a · X"
		for position in range (self.length ()):
			symbol = self.product () [position]
			symbol_text = symbol.symbol

			# - If we've reached the dot
			if position == self.position:
				# - Add the dot, duh.
				output += " **·**"

				# - Check for a shift / ??? conflict
				if symbol in conflicts:
					# Emphasize the conflicting symbol, for better readability
					symbol_text = "__" + symbol_text + "__"

			output += " " + symbol_text

		# -- "X -> a · X, "
		if self.reached_end ():
			output += " **·**,"
		else: output += ","

		# -- "X -> a · X, a / b"
		# - Take the slow route if we've reached the end and we have a conflict
		#	This is done to find the conflicting symbol and emphasize it.
		if self.reached_end () and conflicts != []:
			for symbol in lookahead_symbol_list:
				symbol_text = symbol.symbol

				# Look for the conflict
				if symbol in conflicts:
					# NOTE: The following comment is a copy/paste from the
					#	other conflict emphasizing segment up top. idk y I wrote
					#	this.
					# Emphasize the conflicting symbol, for better readability
					symbol_text = "__" + symbol_text + "__"

				output += " " + symbol_text

		# - Take the fast route
		else: output += " " + " ".join (lookahead_list)

		return output

	def __ne__(self, item):
		raise BaseException ("Please use strict_eq or lalr_eq")

	# DRY - Don't Repeat Yoursleff.
	__eq__ = __ne__

	def lalr_eq (self, item):
		if\
				   self._product	!= item._product	\
				or self.name		!= item.name		\
				or self.position	!= item.position:
			return False

		else:
			return True

	def strict_eq (self, item):
		if\
				   self._product	!= item._product	\
				or self.name		!= item.name		\
				or self.position	!= item.position	\
				or self._lookahead	!= item._lookahead:
			return False

		else:
			return True

	def merge (self, item):
		if not self.lalr_eq (item):
			raise BaseException ("Invalid item passed thru Configuration.merge")

		else:
			for i in item.lookahead ():
				if i not in self.lookahead ():
					add_lookahead (self._lookahead, i)

	def product (self):
		return self._actual_product

	def lookahead (self):
		return get_lookahead (self._lookahead)

	def get_next_next_symbols (self):
		if self.position + 1 == len (self.product ()):
			return self.lookahead ()

		else: return [self.product () [self.position + 1]]

	def get_next_non_lookaheads (self):
		if self.reached_end ():
			return []

		else: return [self.product () [self.position]]

	def get_next_symbols(self):
		# NOTE: There's no need to add one to the position; since the next
		#	configuration would be the configuration after the dot, and the
		#	dot's position is indexed from the start, BEHIND the first symbol.
		if self.reached_end ():
			return self.lookahead ()

		else: return [self.product () [self.position]]

	def reached_end(self):
		if self.position >= len (self.product ()):
			return 1

		else: return 0

	def advance (self):
		# --- NOTE: There is no check here, causing speedups.
		self.position += 1

	def length (self):
		return len (self.product ())

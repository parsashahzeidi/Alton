#!/usr/bin/pypy3

# NOTE: This class is not an exact copy of the C++ class over at
#	/Path/To/Alton/Parser/ParseState.hpp. Despite the same behaviour,
#	ParseState.py describes a list of states and transition information,
#	whilst ParseState.hpp is just a wrapper over two integers.

from os import getcwd
from sys import path
path.append(getcwd())

from Parser._Generation.Configuration import Configuration
from Parser._Generation.Grammar import Grammar
from Parser._Generation.Symbol import Symbol
from Parser._Generation.ParseTransition import ParseTransition
from Tools.PythonGeneralTools.basic_ne import basic_ne
from copy import copy


def state_0 (rules, first):
	# --- Head
	grammar = Grammar ("s0 -> start")
	ending_symbol = Symbol ("ending", 1)
	configurations = [Configuration (grammar, ending_symbol, 0)]
	state_kernel = ParseState (configurations)
	closure = state_kernel.closure (rules, first)

	# --- Body
	return closure


class ParseState:
	def __init__ (self, items: list):
		self.items = items
		self.transition = []

	def __eq__ (self, item):
		for i in self.items:
			if i not in item.items:
				return False

		for i in item.items:
			if i not in self.items:
				return False

		return True

	def __ne__ (self, item):
		return basic_ne (self, item)

	def find_item (self, conf):
		for i in range (self.size ()):
			if self.items[i] == conf:
				return i

		return None

	def is_empty (self):
		if self.size () != 0:
			return False
		else: return True

	def append (self, item: Configuration):
		index = self.find_item (item)

		if index is None:
			index = self.size ()
			self.items.append (item)
			return False, index

		else:
			return True, index


	def closure (self, rules: list, first, kernel: list = []):
		# --- Head
		result = None
		last_size = 0
		item = None
		state_exists = None
		new_index = -1
		new_items = []

		# --- Body
		# -- Specifying the kernel if its empty
		if kernel == []:
			kernel = list (range (self.size ()))

		# -- for every item A [ A -> b·cd, e]
		for i in kernel:
			# - Psuedo-head
			item = self.items [i]

			if item.reached_end():
				continue

			# - for every rule c [ c -> f ]
			for rule in rules:
				if rule.name != item.get_next_symbol().symbol:
					continue

				# for l in first(d) add [ c -> ·g, l ],
				#	if not existing already
				for lookahead in first (item.get_next_next_symbol ()):
					result = Configuration(
						rule, lookahead, 0
					)

					state_exists, new_index = self.append(result)

					if not state_exists:
						new_items.append (new_index)

		if new_items != []:
			self.closure (rules, first, new_items)

		return self

	def successor (self, symbol: Symbol):
		# --- Head
		result = ParseState ([])
		item = None

		# --- Body
		for i in self.items:
			if i.reached_end():
				continue

			if i.get_next_symbol() != symbol:
				continue
			item = copy (i)
			item.advance ()

			result.append(item)

		return result

	def goto (self, symbol: Symbol, rules: list, first):
		return self.successor (symbol).closure (rules, first)

	def add_transition (self, symbol: Symbol, state: int):
		# --- Head
		transition = ParseTransition (symbol, state)

		# --- Body
		self.transition.append (transition)

	def find_transition (self, symbol: Symbol):
		# --- Body
		# -- Fleeing thru the transitions
		for i in self.transition:
			# - Checking for the symbol every time
			if i.verify_symbol (symbol):
				return i.new_state

		# -- Failed
		return None

	def size (self):
		return len (self.items)

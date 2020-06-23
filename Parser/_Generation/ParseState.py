#!/usr/bin/pypy3

# NOTE: This class is not an exact copy of the C++ class over at
#	/Path/To/Alton/Parser/ParseState.hpp. Despite the same behaviour,
#	ParseState.py describes a list of states and transition information,
#	whilst ParseState.hpp is just a wrapper over two integers.

from os import getcwd
from sys import path
path.append(getcwd())

from Parser._Generation.Configuration import Configuration, grammar_list
from Parser._Generation.Grammar import Grammar
from Parser._Generation.Symbol import Symbol
from Parser._Generation.ParseTransition import ParseTransition
from Tools.PythonGeneralTools.basic_ne import basic_ne
from copy import copy


def state_0 (first):
	# --- Head
	grammar = Grammar ()
	grammar.name = "s0"
	grammar.product = [Symbol ("start", 1)]
	ending_symbol = Symbol ("ending", 1)
	configurations = [Configuration (grammar, [ending_symbol], 0)]
	state_kernel = ParseState (configurations)
	closure = state_kernel.closure (first)

	# --- Body
	return closure


class ParseState:
	def __init__ (self, items: list):
		self.items = items
		self.transition = []
		self.is_result_of = None
		self.conflicts = []
		self.parents = []
		self.children = []

	def __eq__ (self, item):
		return self.strict_eq (item)

	def strict_eq (self, item):
		for i in self.items:
			if not item.strictly_has_conf (i):
				return False

		for i in item.items:
			if not self.strictly_has_conf (i):
				return False

		return True

	def lalr_eq (self, item):
		for i in self.items:
			if not item.has_conf (i):
				return False

		for i in item.items:
			if not self.has_conf (i):
				return False

		return True

	def __ne__ (self, item):
		return basic_ne (self, item)

	def find_item (self, conf):
		for i in range (self.size ()):
			if self.items[i].strict_eq(conf):
				return i

		return None

	def find_equivalent_item (self, item):
		for i in range (self.size ()):
			if self.items [i].lalr_eq (item):
				return i

		return None

	def has_conf (self, item):
		for i in range (self.size ()):
			if self.items[i].lalr_eq (item):
				return True

		else: return False


	def strictly_has_conf (self, item):
		for i in range (self.size ()):
			if self.items[i].strict_eq (item):
				return True

		else: return False

	def is_empty (self):
		if self.size () != 0:
			return False

		else: return True

	def append (self, item: Configuration):
		# --- Head
		index = self.find_equivalent_item (item)

		# --- Body
		# -- If the configuration doesn't already exist
		if index == None:
			index = self.size ()
			self.items.append (item)
			return False, index

		else:
			self.items [index].merge (item)
			return True, index


	def closure (self, first, kernel: list = []):
		# --- Head
		result = None
		last_size = 0
		item = None
		state_exists = None
		new_index = -1
		new_items = []
		lookahead = []

		# --- Body
		# -- Specifying the kernel if its empty
		if kernel == []:
			kernel = list (range (self.size ()))

		# -- for every item A [ A -> b · cd, e]
		for i in kernel:
			# - Psuedo-head
			item = self.items [i]

			if item.reached_end():
				continue

			# - for every rule c [ c -> f ]
			for rule in grammar_list:
				if rule.symbol () not in item.get_next_symbols():
					continue

				# for l in first(d) add [ c -> · g, l ],
				#	if not existing already
				lookahead = first (item.get_next_next_symbols ())

				result = Configuration (
					rule, lookahead, 0
				)

				state_exists, new_index = self.append(result)

				if not state_exists:
					new_items.append (new_index)

		if new_items != []:
			self.closure (first, new_items)

		return self

	def successor (self, symbol: Symbol):
		# --- Head
		result = ParseState ([])
		item = None

		result.is_result_of = symbol

		# --- Body
		for i in self.items:
			# -- NOTE: if the item hasn't reached the end yet, there should only
			#	be one symbol in the get_next_non_lookaheads command, This
			#	reduces the need for a reached_end check, thereby speeding the
			#	code
			if [symbol] != i.get_next_non_lookaheads():
				continue

			# -- Alternatively, cleaner, but slower code:
			#
			#	if i.reached_end ():
			#		continue
			#
			#	elif symbol not in i.get_next_symbols ():
			#		continue
			#

			item = copy (i)
			item.advance ()

			result.append(item)

		return result

	def goto (self, symbol: Symbol, first):
		# --- Head
		successor = self.successor (symbol)

		# --- Body
		if successor.is_empty ():
			return ParseState ([])

		else:
			return successor.closure (first)

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

	def merge (self, state):
		# --- Head
		index = 0

		# --- Body
		# -- Managing the configurations
		for i in state.items:
			index = self.find_equivalent_item (i)
			if index is not None:
				self.items [index].merge (i)

		# -- Managing each transition
		for i in state.transition:
			if i not in self.transition:
				self.transition.append (i)

	def add_conflict (self, symbol: Symbol):
		if symbol not in self.conflicts:
			self.conflicts.append (symbol)

	def add_child (self, child: int, symbol: Symbol):
		if (child, symbol) not in self.children:
			self.children.append ((child, symbol))

	def add_parent (self, parent: int):
		if parent not in self.parents:
			self.parents.append (parent)

	def __get_markdown_children (self):
		# --- Head
		markdown = ""

		# --- Body
		for state, symbol in self.children:
			markdown += "\n* State **" + str (state) + "**, as a result of "	\
			"shifting **" + symbol.symbol + "**"

		return markdown + "\n"

	def __get_markdown_parents (self):
		# --- Head
		markdown = ""

		# --- Body
		for i in self.parents:
			markdown += "\n* State **" + str (i) + "**"

		return markdown + "\n"

	def __get_markdown_conflicts (self):
		# --- Head
		markdown = ""

		# --- Body
		for i in self.conflicts:
			markdown += "\n* Symbol **" + i.symbol + "**"

		return markdown + "\n"


	def _get_markdown_notes (self):
		# --- Head
		markdown = "\n\n### Notes\n\n"

		# --- Body
		# -- Case one: A state with no parents
		if self.is_result_of is None:
			markdown += "This state is a state-0, it doesn't "\
			"have any parents. This state has " + str (len (self.children))		\
			+ " children, all of which are mentioned below.\n"					\
			+ self.__get_markdown_children ()

		# -- Case group two: Cases with parents
		else:
			markdown += "This state preceeds a"

			if self.is_result_of.symbol [0] in "aeiou":
				markdown += "n"

			markdown += " **" + self.is_result_of.symbol + "** symbol.\n"

			if len (self.parents) > 1:
				markdown += "\nThe state has " + str (len (self.parents))		\
				+ " parents, namely the ones below.\n"							\
				+ self.__get_markdown_parents ()

			else:
				markdown += "\nThe state has one parent state, the one below.\n"	\
				+ self.__get_markdown_parents ()

			# - Case two: A case with both parents and children
			if self.children != []:
				if len (self.children) > 1:
					markdown += "\nThis state also has "						\
					+ str (len (self.children))									\
					+ " children, details are written below.\n"			\
					+ self.__get_markdown_children ()

				else:
					markdown += "\nThis state also has one child state, details"\
					" are written below.\n" + self.__get_markdown_children ()

			# - Case three: A case with parents but without children
			else:
				markdown += "\nThis state is a leaf state, it does not have any"\
				" children, and is only able to reduce. **Most R / R conflicts "\
				"either happen or initiate in these states.**\n"

		# -- Checking for conflicts
		if self.conflicts != []:
			markdown += "\nThe state is also prone to conflicts, namely on the "\
			"symbols below.\n" + self.__get_markdown_conflicts ()

		return markdown + "\n"

	def _get_markdown_state_row (self, symbol_list, table_row):
		# --- Head
		markdown = "### Table Row\n\n"

		symbol_line = "| null_symbol | "
		splitting_line = "| :---: | "
		table_data = "| - | "

		# --- Body
		for i in range (len (symbol_list)):
			symbol_line += symbol_list [i].symbol + " | "
			splitting_line += ":---: | "
			table_data += str (table_row [i]) + " | "

		symbol_line += "ending |\n"
		splitting_line += ":---: |\n"
		table_data += str (table_row [-1]) + " |\n\n"

		markdown += symbol_line + splitting_line + table_data

		return markdown

	def _get_markdown_items (self):
		# --- Head
		markdown = "### Items\n"

		# --- Body
		for i in self.items:
			markdown += "\n* " + i.get_markdown (self.conflicts)

		return markdown + "\n"

	def get_markdown (
			self,
			state_number: int,
			table_row: list,
			symbol_list: list):
		# --- Head
		markdown = "\n## State " + str (state_number)

		# --- Body
		markdown += self._get_markdown_notes ()
		markdown += self._get_markdown_state_row (symbol_list, table_row)
		markdown += self._get_markdown_items ()

		return markdown

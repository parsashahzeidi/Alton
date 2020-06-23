#!/usr/bin/pypy3

from os import getcwd
from sys import path
path.append(getcwd())

from Parser._Generation.Symbol import Symbol, get_lexing_symbols, count_of_symbols, get_symbol_text_from_index
from Parser._Generation.Configuration import Configuration, grammar_list
from Parser._Generation.ParseOperation import ParseOperation
from Parser._Generation.ParseState import ParseState, state_0
from Parser._Generation.ParseTransition import ParseTransition
from Parser._Generation.GrammarParser import GrammarParser
from Tools.PythonGeneralTools.remove_repetitions import remove_repetitions
from Tools.PythonGeneralTools.remove_completely import remove_completely
from Tools.PythonGeneralTools.multiply_without_referencing import make_multiplication
from Tools.PythonGeneralTools.list_equality import list_equality
from copy import copy
from time import time


class ParserGenerator:
	def __init__(self):
		self.symbols = get_lexing_symbols()
		self.first_memory = {}
		#self.follow_memory = {}
		self.state_list = []
		self.parse_table = []

		self.parse_grammar()

		# --- NOTE: These symbols are put here, to avoid reconstructing them
		#	each time some functions alike self.create_parse_table are called.
		self.rvalue_symbol = Symbol ("rval", 0)
		self.lvalue_symbol = Symbol ("lval", 0)
		self.expression_symbol = Symbol ("expression", 1)

		self.state_list.append (self.state_0 ())

	def parse_grammar (self):
		# --- Head
		file = open ("./Parser/_Generation/GrammarList.txt", 'r')
		text = file.read (); file.close ()

		parser = GrammarParser ()

		# --- Body
		parser.parse_grammar (text, self)

	def _calculate_first(self, symbol: Symbol, stack: list = []):
		# --- Head
		name = symbol.symbol
		_set = []

		# --- Body
		if symbol.is_term():
			return [symbol]

		else:
			for i in grammar_list:
				# -- Identified the bitch.
				if i.name == name:
					_set += self.first ([i.product [0]], stack)

		_set = remove_repetitions(_set)

		return _set

	def _calculate_follow(self, symbol: Symbol, stack: list = []):
		# --- Head
		_set = []
		next_sym = Symbol("")
		curr_sym = Symbol("")

		# --- Body
		for i in grammar_list:
			for j in range(len(i.product)):
				curr_sym = i.product[j]

				# -- Identified.
				if curr_sym.symbol == symbol.symbol:
					# - If it's the last item
					if j == len(i.product) - 1:
						# Calculate it's follow
						_set += self.follow(Symbol(i.name, 0), stack)

					# -- If it's in the center
					else:
						next_sym = i.product[j + 1]

						_set += self.first(next_sym)

		if symbol.symbol == "start":
			_set.append(Symbol("ending", 1))

		_set = remove_repetitions(_set)

		return _set

	# TODO: Make a memorizing function and add it to the "PythonGeneralTools"
	#	Then replace first and follow.
	def first(self, symbols: list, _stack: list = [], exclude: list = []):
		# --- Head
		stack = _stack
		index = 0
		mem = self.first_memory
		function = self._calculate_first
		result = []

		# --- Body
		for symbol in symbols:
			if symbol in stack:
				continue

			index = symbol.index

			# -- If the dictionary needs updating
			if index not in mem:
				stack.append (symbol)
				mem.update (
					{  # NOTE: We don't pass exclude thru function, it can
					   #	corrupt the memory.
						index: function(symbol, stack)
					}
				)
				# -- Restore the stack
				stack.pop ()

			result += mem.get(index)

		if exclude != []:
			result = remove_completely (result, exclude)

		return result

	def follow(self, symbol: Symbol, stack: list = []):
		# --- Head
		name = symbol.symbol
		mem = self.follow_memory
		function = self._calculate_follow

		# --- Body
		# -- If the dictionary needs updating
		if name not in mem:
			if symbol in stack:
				return []

			else:
				stack.append (symbol)
				mem.update (
					{
						name: function(symbol, stack)
					}
				)

		return mem.get(name)

	def find_state_index(self, state):
		# LR:
		#	for i in range (self.count_of_states ()):
		#		if self.state_list[i].strict_eq (state):
		#			return i
		#
		#	return None

		# LALR:
		for i in range (self.count_of_states ()):
			if self.state_list[i].lalr_eq (state):
				return i

		return None

	def add_relationship (self, parent: int, child: int, symbol: Symbol):
		self.state_list [parent].add_child (child, symbol)
		self.state_list [child].add_parent (parent)

	def add_state (self, state: int, preceeder: int, symbol: Symbol):
		# --- Kill condition
		if state.is_empty ():
			raise BaseException ("You sent an empty state thru add_state, m8.")

		# --- Head
		# NOTE: LR differs from LALR in this part:
		#	LR would merge the states only if they were exactly identical, But
		#	LALR would merge the states even if they have differences in their
		#	lookaheads, which compresses the state list more than LR.
		#	LALR 1 is actually considered to be a stronger subset of LR 0, so
		#	every LALR 1 grammar isn't LR 0, but is LR 1. Some people think of
		#	this like the following 2 lines.
		#		~LALR 1 = LR 0 + Lookahead x1
		#		~LR 1	= LR 1 + Lookahead x1
		index = self.find_state_index (state)
		reprocess = False

		# --- Body
		# -- Checking if the state doesn't exist
		if index is None:
			index = self.count_of_states ()
			reprocess = True
			self.state_list.append (state)

		else:
			reprocess = False
			self.state_list [index].merge (state)

		self.add_relationship (preceeder, index, symbol)

		return reprocess, index

	def get_symbol_from_index (self, index: int):
		# --- Head
		text = get_symbol_text_from_index (index)

		# --- Body
		return Symbol (text, index = index)

	def state_0 (self):
		return state_0 (self.first)

	def create_state_list(self, _kernels: list = [0]):
		# --- Head
		kernels = _kernels
		previous_size = -1
		new_index = -1
		preceeder = None
		changed = None
		new_states = []
		goto = []

		# --- Body
		# NOTE: Taking a recursive approach would make the
		while kernels != []:
			# -- For every state_list i and every symbol s
			for i in kernels:
				for s in self.symbols:
					# - If "succ ( i, s )" isn't empty
					#	Add "closure ( succ ( i, s ) )" to the state list,
					#		if not already existing

					# - The Closure of a Successor is called a goto, I'll be
					#	using that name to simplify the code a little bit.
					goto = self.goto (i, s)

					# - Checking if the state existed or not; Reprocessing
					#	already existing states causes infinite recursions.
					if not goto.is_empty ():
						changed, new_index = self.add_state (goto, i, s)

						# - Adding a transition helps speed up the table
						#	creation proceedure.
						self.state_list [i].add_transition (s, new_index)

						# - Checking if we don't have a duplicate, since
						#	more than one state can be merged into
						#	another state, this'll cause performance
						#	boosts, so a state doesn't have to be computed
						#	more than once.
						if changed and new_index not in new_states:
							new_states.append (new_index)

			kernels = new_states
			new_states = []

	def count_of_states (self):
		return len (self.state_list)

	def find_rule_index(self, product: Configuration):
		# --- Body
		return product._product

	def goto (self, _state: int, symbol: Symbol):
		# --- Head
		state = self.state_list [_state]

		# --- Body
		return state.goto (symbol, self.first)

	def clear_parse_table (self):
		empty_item = ParseOperation ()

		new_table = make_multiplication (
			empty_item,
			[
				self.count_of_states (),
				count_of_symbols ()
			]
		)

		self.parse_table = new_table

	def create_parse_table_field (
			self,
			symbol: Symbol,
			rule_index: int,
			rule_name: str,
			reached_end: bool,
			state: int,
			expression_flag: bool):
		# --- Head
		is_conflict = False
		index = symbol.index
		value = 0
		operation = ParseOperation.OPERATION_UNDEFINED

		# --- Psuedocode
		# -- For each configuration j in the state I:
		#		For each symbol s in j's follow-up symbol lists:
		#			If j's dot is at the end, ( like j -> a b c ·, d )
		#				If j is [ s0 -> start, ending ]:
		#					Set action [ j, s ] to "Accept"
		#
		#				If not:
		#					Set action [ j, s ] to "Reduce j -> a b c"
		#
		#			If not:
		#				Set action [ j, s ] to "Shift" or "Goto" depending on
		#					the symbol

		# --- Body
		# -- If j's dot is at the end, ( like j -> a b c ·, d )
		if reached_end:
			# - If j is [ s0 -> start, ending ]:
			if rule_name == "s0":
				# Set action [ j, s ] to "Accept"
				operation = ParseOperation.OPERATION_ACCEPT

			# - If not:
			else:
				# Set action [ j, s ] to "Reduce j -> a b c"
				value = rule_index
				operation = ParseOperation.OPERATION_REDUCE

		# -- If not:
		else:
			# - The values for goto and shift are equal, we set them here.
			value = self.state_list [state].find_transition (symbol)

			# - Set action [ j, s ] to "Shift" or "Goto" depending on the symbol
			# - Shift
			if symbol.is_term ():
				operation = ParseOperation.OPERATION_SHIFT

			# - Goto
			elif not expression_flag:
				operation = ParseOperation.OPERATION_GOTO

			else:
				operation = ParseOperation.OPERATION_PARSE_EXPRESSION

		# -- The return value for an override is a boolean indicator to check if
		#	a conflict happened during the overriding, or not. Checking for a
		#	conflict helps produce a better "buildlog", via the get_markdown
		#	functions.
		is_conflict = self.parse_table [state] [index].\
				override_operation (
					operation, value, state, symbol
				)

		if is_conflict:
			self.state_list [state].add_conflict (symbol)

	def create_parse_table(self):
		# --- Head
		symbol_list = []
		expression_first = self.first (
			[self.rvalue_symbol, self.lvalue_symbol],
			exclude = [self.expression_symbol]
		)

		# --- Psuedocode
		# -- For each state I:
		#		For each configuration j in the state I:
		#			For each symbol s in j's follow-up symbol lists:
		#				If j's dot is at the end, ( like j -> a b c ·, d )
		#					If j is [ s0 -> start, ending ]:
		#						Set action [ j, s ] to "Accept"
		#
		#					If not:
		#						Set action [ j, s ] to "Reduce j -> a b c"
		#
		#				If not:
		#					Set action [ j, s ] to "Shift" or "Goto" depending
		#						on the symbol

		# --- Body
		self.clear_parse_table ()

		# -- For each state I:
		for i in range (self.count_of_states ()):
			# - For each configuration j in the state I:
			for j in self.state_list [i].items:
				symbol_list = j.get_next_symbols ()

				# For each symbol s in j's follow-up-symbols list:
				for k in symbol_list:
					"""if k == self.expression_symbol:
						# This is a hack: The expression symbol is a terminal,
						#	since if it was not, the Parser would have problems
						#	switching to another parser, and risking losing it's
						#	state. Shifting `Symbol ("expression", 1)` would
						#	trigger an internal switch in C++, to call a
						#	recursive descent parser, to parse a
						#	`Symbol ("expression", 0)`. There should be a
						#	lookahead to tell the parser when to shift an
						#	expression_symbol, the hack finds just that.
						for l in expression_first:
							self.create_parse_table_field (
								l,
								self.find_rule_index (j),
								j.name,
								j.reached_end (),
								i,
								True
							)"""

					else:
						self.create_parse_table_field (
							k,
							self.find_rule_index (j),
							j.name,
							j.reached_end (),
							i,
							False
						)

			# -- Finalizing the table.
			for j in range (len (self.parse_table[i])):
				self.parse_table[i][j].finalize ()

	def parse_table_cpp(self):
		# --- Head
		# -- Formattings
		format1 = "\n\t\t\t"
		format2 = ""
		format3 = "\n\t\t\t"

		# -- Files
		template = open ("Parser/_Generation/TemplateParseTable.cpp", 'r')
		output = open ("Parser/ParseTable.cpp", 'w')

		# -- Strings
		string = template.read (); template.close ()

		# -- Cache values
		length = 0
		symbol_name = ""
		item = None
		row = ""
		column = ""

		# --- Body
		self.create_state_list ()
		self.create_parse_table ()

		# -- Formats
		# - Format 1
		format1 += "rules.reserve (" + str (len (grammar_list)) + ");\n\t\t\t"
		for i in grammar_list:
			format1 +=\
					"rules.push_back (" + i.get_cpp_parserule_representation () \
					+ ");\n\t\t\t"

		# - Format 2
		format2 = str (len (self.parse_table))

		# - Format 3
		for i in range (len (self.parse_table)):
			# Resizing the row
			row = "table [" + str (i) + "]"
			format3 += row + ".resize (symbol_count);\n\t\t\t"

			for j in range (len (self.parse_table [i])):
				item = self.parse_table [i][j]
				symbol = self.get_symbol_from_index (j).get_cpp_name()

				column = " [Symbol::" + symbol + "]"

				if item.operation == ParseOperation.OPERATION_ERROR:
					continue

				format3 += \
						row + column + item.get_cpp_override_representation ()\
						+ ";\n\t\t\t"

		# -- Saving
		string %= format1, format2, format3
		output.write (string); output.close()

	def symbol_hpp(self):
		"""
		Replaces the file /Path/To/Alton/Parser/symbol.hpp
		:return: Unfortunately, nothing.
		"""
		# --- Head
		format1 = ""
		template = open("./Parser/_Generation/TemplateSymbol.hpp", 'r').read()
		file = open("./Parser/Symbol.hpp", 'w')

		# --- Body
		# -- First format
		for i in range (len (self.symbols)):
			format1 += self.symbols[i].get_cpp_name ()\
					+ ",  // #" + str (i + 1) + "\n\t\t\t"

		# -- Save
		file.write(template % format1)
		file.close()

	def parser_generator_md (self):
		# NOTE: String concatenation is pretty slow in Python and PyPy, That's
		#	why I directly write to the file directly, and not use a template.
		#	If I were to use a template, it would be "%s".
		# --- Head
		# -- Files
		output = open ("./BuildLogs/ParserGenerator.md", 'w')

		# -- Caches
		state_text = ""
		splitting_line = ""

		# --- Body
		# -- First format
		output.write ("# States\n")
		for i in range (len (self.state_list)):
			state_text = self.state_list [i].get_markdown (
				i,
				self.parse_table [i],
				self.symbols
			)

			output.write (state_text)

		output.close ()


def main ():
	# --- Head
	cc = ParserGenerator ()

	# --- Body
	cc.symbol_hpp ()

	cc.parse_table_cpp ()
	cc.parser_generator_md ()


if __name__ == "__main__":
	main ()

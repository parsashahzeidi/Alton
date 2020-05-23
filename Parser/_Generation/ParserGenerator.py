#!/usr/bin/pypy3

from os import getcwd
from sys import path
path.append(getcwd())

from Parser._Generation.Symbol import Symbol, get_lexing_symbols, get_symbol_index, count_of_symbols, get_symbol_text_from_index
from Parser._Generation.Grammar import Grammar
from Parser._Generation.Configuration import Configuration
from Parser._Generation.ParseOperation import ParseOperation
from Parser._Generation.ParseState import ParseState, state_0
from Parser._Generation.ParseTransition import ParseTransition
from Tools.PythonGeneralTools.remove_repetitions import remove_repetitions
from Tools.PythonGeneralTools.multiply_without_referencing import make_multiplication
from Tools.PythonGeneralTools.list_equality import list_equality
from copy import copy


class ParserGenerator:
	def __init__(self):
		self.symbols = get_lexing_symbols()
		self.grammar = self.read_grammar()
		self.first_memory = {}
		self.follow_memory = {}
		self.state_list = [self.state_0 ()]
		self.parse_table = []

	def read_grammar(self):
		"""
		Reads the grammar from /Path/To/Alton/Parser/_Generation/GrammarList.txt
		:return: A list of grammars
		"""
		# --- Head
		file = open("./Parser/_Generation/GrammarList.txt", 'r')
		lines = file.readlines(); file.close()
		grammar = []
		non_terminals = []
		previous_symbols = []
		name = ""
		symbol = None

		# --- Body
		# -- Parsing
		for i in lines:
			# Detecting an empty line
			if len(i) <= 1:
				continue

			# Detecting a comment
			if i[0] == "#":
				continue

			# Successfully passed thru limiters
			grammar.append(Grammar(i))

			name = grammar[-1].name
			symbol = Symbol(name, 0)

			# Need to add the symbol too.
			if name not in previous_symbols:
				non_terminals.append(symbol)
				previous_symbols.append(name)

		self.symbols += non_terminals

		return grammar

	def _calculate_first(self, symbol: Symbol, stack: list = []):
		# --- Head
		name = symbol.symbol
		_set = []

		# --- Body
		if symbol.is_term():
			return [symbol]

		else:
			for i in self.grammar:
				# -- Identified the bitch.
				if i.name == name:
					# - Found a terminal
					if i.product[0].is_term():
						_set.append(i.product[0])

					# - Nope! it's a non-terminal.
					else:
						# Detecting left-recursion
						if i.product[0].symbol == i.name:
							continue

						_set += self.first(i.product[0], stack)

		_set = remove_repetitions(_set)

		return _set

	def _calculate_follow(self, symbol: Symbol, stack: list = []):
		# --- Head
		_set = []
		next_sym = Symbol("")
		curr_sym = Symbol("")

		# --- Body
		for i in self.grammar:
			for j in range(len(i.product)):
				curr_sym = i.product[j]

				# -- Identified.
				if curr_sym.symbol == symbol.symbol:
					# - If it's the last item
					if j == len(i.product) - 1:
						# Detecting right recursion
						if i.name != symbol.symbol:
							_set += self.follow(Symbol(i.name, 0), stack)

					# -- If it's in the center
					else:
						next_sym = i.product[j + 1]

						# If it's a terminal
						if next_sym.is_term():
							_set.append(next_sym)

						# If it's a non-terminal
						else:
							_set += self.first(next_sym)

		if symbol.symbol == "start":
			_set.append(Symbol("ending", 1))

		_set = remove_repetitions(_set)

		return _set

	def find_state_index(self, state):
		for i in range (self.count_of_states ()):
			if self.state_list[i] == state:
				return i

		return None

	def add_state (self, state):
		# --- Kill condition
		if state.is_empty ():
			return True, None

		# --- Head
		index = self.find_state_index (state)

		# --- Body
		# -- Checking if the state exists
		if index is None:
			index = self.count_of_states ()
			self.state_list.append (state)

			return False, index

		else:
			return True, index

	# TODO: Make a memorizing function and add it to the "PythonGeneralTools"
	#	Then replace first and follow.
	def first(self, symbol: Symbol, stack: list = []):
		# --- Head
		name = symbol.symbol
		mem = self.first_memory
		function = self._calculate_first

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

	def get_symbol_from_index (self, index: int):
		# --- Head
		text = get_symbol_text_from_index (index)

		# --- Body
		return Symbol (text, index = index)

	def state_0 (self):
		return state_0 (self.grammar, self.first)

	def create_state_list(self, kernels: list = [0]):
		# --- Head
		previous_size = -1
		new_index = -1
		preceeder = None
		state_existed = False
		new_states = []
		goto = []

		# --- Body
		# -- For every state_list i and every symbol s
		for i in kernels:
			for s in self.symbols:
				# - If "succ ( i, s )" isn't empty
				#	Add "closure ( succ ( i, s ) )" to the state list,
				#		if not already existing

				# - The Closure of a Successor is called a goto, I'll be using
				#	that name to simplify the code a little bit.
				preceeder = self.state_list [i]
				goto = self.goto (preceeder, s)

				state_existed, new_index = self.add_state (goto)

				# - We need to access the state list directly,
				#	modifying "preceeder" won't change the actual
				#	value.
				self.state_list [i].add_transition (s, new_index)

				# - Checking if the state existed or not; Reprocessing
				#	already existing states causes infinite recursions.
				if not state_existed and new_index is not None:
					new_states.append (new_index)

		if len (new_states) != 0:
			self.create_state_list (new_states)

	def get_symbol_index(self, symbol: Symbol):
		text = symbol.symbol
		index = get_symbol_index (text)

		return index

	def count_of_states (self):
		return len (self.state_list)

	def find_rule_index(self, product: Configuration):
		# --- Body
		# -- Checking thru each rule
		for i in range (len (self.grammar)):
			# - Checking the products
			if self.grammar[i].product == product.product():
				# Checking the names
				if self.grammar[i].name == product.name:
					# Found the bastard!
					return i

		return None

	def goto (self, state: ParseState, symbol: Symbol):
		return state.goto (symbol, self.grammar, self.first)

	def clear_parse_table (self):
		empty_item = ParseOperation ()

		new_table = make_multiplication (
			empty_item,
			[
				count_of_symbols (),
				self.count_of_states ()
			]
		)

		self.parse_table = new_table

	def create_parse_table(self):
		# --- Head
		index = 0
		value = -0
		next_sym = None
		goto_state = []

		# --- Body
		# -- If [A –> u·, a] is in Ii
			# - then set Action[i,a] to reduce A –> u (A is not S').

		# -- If [S' –> S·, $] is in Ii
			# - then set Action[i,$] to accept.

		# -- If [A –> u·av, b] is in Ii and succ(Ii, a) is Ij
			# - then set Action[i,a] to shift j (a must be a terminal).

		self.clear_parse_table ()

		for i in range(len(self.state_list)):
			for j in self.state_list [i].items:
				next_sym = j.get_next_symbol ()
				index = self.get_symbol_index (next_sym)

				if j.reached_end():
					# -- The values for Accept and reduce are equal.
					value = self.find_rule_index (j)

					# -- Accept
					if j.name == "s0":
						self.parse_table[i][index].override_operation (
							ParseOperation.OPERATION_ACCEPT,
							value, i, next_sym
						)

					# -- Reduce
					else:
						self.parse_table[i][index].override_operation (
							ParseOperation.OPERATION_REDUCE,
							value, i, next_sym
						)

				else:
					# -- The values for goto and shift are equal.
					value = self.state_list [i].find_transition (next_sym)

					# -- Goto
					if next_sym.is_term ():
						self.parse_table[i][index].override_operation (
							ParseOperation.OPERATION_SHIFT,
							value, i, next_sym
						)

					# -- Shift
					else:
						self.parse_table[i][index].override_operation (
							ParseOperation.OPERATION_GOTO,
							value, i, next_sym
						)

			# -- Finalizing the table.
			for j in range (len (self.parse_table[i])):
				self.parse_table[i][j].finalize ()

	def parse_table_cpp(self):
		# --- Head
		# -- Formattings
		format1 = "\n"
		format2 = "\n"
		format3 = "\n"

		# -- Files
		template = open ("Parser/_Generation/TemplateParseTable.cpp", 'r')
		output = open ("Parser/ParseTable.cpp", 'w')

		# -- Strings
		string = template.read (); template.close ()

		# -- Cache values
		length = 0
		symbol_name = ""
		item = None

		# --- Body
		self.create_state_list ()
		self.create_parse_table ()

		# -- Formats
		# - Format 1
		for index in range (len (self.grammar)):
			length = len (self.grammar[index].product)
			format1 += """\
			case """ + str (index) + """: return """ + str (length) + """;\n"""

		# - Format 2
		for i in range (len (self.parse_table)):
			for j in range (len (self.parse_table [i])):
				item = self.parse_table [i][j]
				symbol_name = self.get_symbol_from_index (j).get_cpp_name()

				if item.operation == ParseOperation.OPERATION_ERROR:
					continue

				format2 += """
			if (state == """ + str (i) + """ && item == Symbol::""" + symbol_name + """)
				operation""" + item.get_cpp_override_representation () + """; else\n\n"""

		# - Format 3
		for i in range (len (self.grammar)):
			symbol = Symbol (self.grammar[i].name, 0).get_cpp_name()

			format3 += "\t\t\tcase " + str (i) + ": return Symbol::" + symbol + ";\n"

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
		#	why I directly write to the file and don't use a template in this
		#	function. If I were using a template, the string would be "%s%s".
		# --- Head
		# -- Files
		output = open ("./BuildLogs/ParserGenerator.md", 'w')

		# -- Caches
		state_text = ""
		splitting_line = ""

		# --- Body
		# -- First format
		# - Head
		# The header
		output.write ("# Table\n\n| index | 0 |")
		splitting_line += "| :--- | :---: |"

		# The body
		for i in self.symbols:
			output.write (" " + i.symbol + " |")
			splitting_line += " :---: |"

		output.write (" $ |\n" + splitting_line + " :---: |" + "\n")

		# - Body
		for i in range (len (self.state_list)):
			output.write ("| \\#" + str (i) + " |")

			for j in self.parse_table[i]:
				output.write (" " + str (j) + " |")

			output.write ('\n')

		# -- Second format
		# - Head
		output.write ("# States\n\n")

		# - Body
		for i in range (len (self.state_list)):
			state_text = "## State " + str (i) + "\n\n"

			output.write (state_text)

			for j in self.state_list [i].items:
				output.write ("* __" + str (j) + "__\n")

			output.write ("\n")

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

#!/usr/bin/pypy3

from os import getcwd
from sys import path
path.append(getcwd())

from Parser._Generation.Symbol import Symbol, get_lexing_symbols
from Parser._Generation.Grammar import Grammar
from Parser._Generation.Configuration import Configuration
from Tools.PythonGeneralTools.remove_repetitions import remove_repetitions
from Parser._Generation.ParseOperation import ParseOperation
from Tools.PythonGeneralTools.multiply_without_referencing import make_multiplication
from Tools.PythonGeneralTools.list_equality import list_equality


class ParserGenerator:
	def __init__(self):
		self.symbols = get_lexing_symbols()
		self.grammar = self.read_grammar()
		self.first_memory = {}
		self.follow_memory = {}
		self.state_list = []
		self.parse_table = []
		self.symbol_indexes = {}

		self.setup_symbol_indexes()

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
		symbol = Symbol("", 0)

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

	def setup_symbol_indexes(self):
		# --- Head
		name = ""
		index = 0

		# --- Body
		for i in self.symbols:
			name = i.symbol

			index += 1
			self.symbol_indexes.update( {name: index} )

		index += 1
		self.symbol_indexes.update( {"ending": index} )

		index += 1
		self.symbol_indexes.update( {"count": index} )

	def _calculate_first(self, symbol: Symbol):
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
						if i.product[0].symbol != i.name:
							_set += self.first(i.product[0])

		_set = remove_repetitions(_set)

		return _set

	def _calculate_follow(self, symbol: Symbol):
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
							_set += self.follow(Symbol(i.name, 0))

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

	@staticmethod
	def states_are_equal (a, b):
		_a = remove_repetitions (a)
		_b = remove_repetitions (b)

		if len (_a) != len (_b):
			return False

		else:
			for i in range (len (_a)):
				if _a[0] not in _b:
					return False
				else:
					_b.remove (_a [0])
					_a = _a [1:]

			return True

	def state_exists(self, state):
		for i in self.state_list:
			if self.states_are_equal(state, i):
				return True

		return False

	@staticmethod
	def configuration_exists(list, conf):
		for i in list:
			if i == conf:
				return True

		return False

	def find_state_index(self, state):
		for i in range (len (self.state_list)):
			if self.states_are_equal(self.state_list[i], state):
				return i

		return None

	def first(self, symbol: Symbol):
		# --- Head
		name = symbol.symbol
		mem = self.first_memory

		# --- Body
		# -- If the dictionary needs updating
		if name not in mem:
			mem.update(
				{
					name: self._calculate_first(symbol)
				}
			)

		return mem.get(name)

	def follow(self, symbol: Symbol):
		# --- Head
		name = symbol.symbol
		mem = self.follow_memory

		# --- Body
		# -- If the dictionary needs updating
		if name not in mem:
			mem.update(
				{
					name: self._calculate_follow(symbol)
				}
			)

		return mem.get(name)

	def get_symbol_from_index (self, index: int):
		# --- Head
		augmented_index = index - 1

		# --- Body
		# -- Special cases
		if augmented_index == len (self.symbols):
			return Symbol("ending", 1)

		elif augmented_index == -1:
			return Symbol("null_symbol", 1)

		# -- Regularity
		else: return self.symbols[augmented_index]

	def state_0(self):
		self.state_list.append(
			self.closure(
				[
					Configuration(
						Grammar(
							"s0 -> start"
						),
						Symbol("ending", 1),
						0
					)
				]
			)
		)

	def closure(self, state: list):
		# --- Head
		output_state = state
		output_state = remove_repetitions(output_state)
		result = None
		last_size = 0
		equal = True

		# --- Body
		# -- While we can append stuff to the output
		while last_size != len(output_state):
			last_size = len(output_state)

			# ------- [ S0 -> ·start, ending ]
			# -- for every item A [ A -> b·cd, e]
			for item in output_state:
				if item.reached_end():
					continue

				# - for every rule c [ c -> f ]
				for rule in self.grammar:
					if rule.name != item.get_next_symbol().symbol:
						continue

					# for l in first(d) add [ c -> ·g, l ], if not existing already
					for lookahead in self.first(item.get_next_symbol(2)):
						result = Configuration(
							rule, lookahead, 0
						)

						if not self.configuration_exists(output_state, result):
							output_state.append(result)

		return output_state

	def successor(self, state: list, symbol: Symbol):
		# --- Head
		result = []

		# --- Body
		for i in state:
			if i.reached_end():
				continue

			if i.get_next_symbol().symbol != symbol.symbol:
				continue

			result.append(i.advanced())

		return result

	def create_state_list(self):
		# --- Head
		previous_size = 0
		successing = []
		closure = []

		# --- Psuedo-head
		self.state_0()

		# --- Body
		# -- While we can still add stuff to the state list
		while previous_size != len(self.state_list):
			previous_size = len(self.state_list)

			# - For every state_list i and every symbol s
			for i in self.state_list:
				for s in self.symbols:
					# If succ ( i, s ) isn't empty
					successing = self.successor(i, s)

					if len(successing) != 0:
						# Add closure ( succ ( i, s ) ) to the state list, if not already existing
						closure = self.closure(successing)

						if not self.state_exists(closure):
							self.state_list.append(closure)

	def get_symbol_index(self, symbol:Symbol):
		text = symbol.symbol
		index = self.symbol_indexes[text]

		return index

	def count_of_symbols(self):
		return self.symbol_indexes["count"]

	def find_rule_index(self, product: Grammar):
		# --- Body
		# -- Checking thru each rule
		for i in range (len (self.grammar)):
			# - Checking the products
			if list_equality (self.grammar[i].product, product.product):
				# Checking the names
				if self.grammar[i].name == product.name:
					# Found the bastard!
					return i

		return None

	def goto (self, state:list, symbol:Symbol):
		return self.closure (self.successor (state, symbol))

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

		for i in range(len(self.state_list)):
			# -- Add the state to the table
			self.parse_table.append(make_multiplication(ParseOperation(), self.count_of_symbols()))

			for j in self.state_list[i]:
				next_sym = j.get_next_symbol ()
				index = self.get_symbol_index (next_sym)

				if j.reached_end():
					# -- The values for Accept and reduce are equal.
					value = self.find_rule_index (j.get_grammar ())

					# -- Accept
					if j.lookahead == Symbol("ending", 1) and j.name == "s0":
						self.parse_table[-1][index].override_operation (
							ParseOperation.OPERATION_ACCEPT,
							value, i, next_sym
						)

					# -- Reduce
					else:
						self.parse_table[-1][index].override_operation (
							ParseOperation.OPERATION_REDUCE,
							value, i, next_sym
						)

				else:
					# -- The values for goto and shift are equal.
					goto_state = self.goto (self.state_list[i], j.get_next_symbol ())
					value = self.find_state_index (goto_state)

					# -- Goto
					if j.get_next_symbol ().is_term ():
						self.parse_table[-1][index].override_operation (
							ParseOperation.OPERATION_SHIFT,
							value, i, next_sym
						)

					# -- Shift
					else:
						self.parse_table[-1][index].override_operation (
							ParseOperation.OPERATION_GOTO,
							value, i, next_sym
						)

			# -- Finalizing the table.
			for i in range (len (self.parse_table[-1])):
				self.parse_table[-1][i].finalize ()

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
		operation = ""
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

				format2 += """\n\
			if (state == """ + str (i) + """ && item == Symbol::""" + symbol_name + """)
				operation""" + item.get_cpp_override_representation () + """; else\n"""

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
		augmented_name = ""

		# --- Body
		# -- First format
		for i in range (len (self.symbols)):
			format1 += self.symbols[i].get_cpp_name ()\
					+ ",  // #" + str (i + 1) + "\n\t\t\t"

		# -- Save
		file.write(template % format1)
		file.close()

	def parser_generator_log (self):
		# --- Head
		# -- Files
		output = open ("./BuildLogs/ParserGenerator.txt", 'w')

		# -- Templates
		template = "%s\n%s"

		# -- Strings
		table = "Table:\n\t\t0"
		states = "States:"

		# -- Caches
		state_text = ""

		# --- Body
		# -- First format
		# - Header
		for i in range (len (self.symbols)):
			table += "\t" + str (i + 1)

		table += "\t$\n"

		# - Body
		for i in range (len (self.state_list)):
			state_text = "\tState " + str (i)

			table += state_text + "\n\t"

			for j in self.parse_table[i]:
				table += "\t" + str (j)

			table += '\n'

		# -- Second format
		for i in range (len (self.state_list)):
			state_text = "\tState " + str (i)

			states += "\n" + state_text + '\n'

			for j in self.state_list[i]:
				states += "\t\t" + str (j) + '\n'

		# -- Formatting and saving
		template %= states, table
		output.write (template); output.close ()

def main ():
	# --- Head
	cc = ParserGenerator ()

	# --- Body
	cc.symbol_hpp ()
	cc.parse_table_cpp ()
	cc.parser_generator_log ()

if __name__ == "__main__":
	main ()

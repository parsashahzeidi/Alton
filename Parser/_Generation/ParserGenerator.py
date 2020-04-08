#!/usr/bin/pypy3

from os import getcwd
from sys import path
path.append(getcwd())

from Parser._Generation.Symbol import Symbol, get_lexing_symbols
from Lexer._Generation.Token import Token


class ParserGenerator:
	def __init__(self):
		self.symbols = get_lexing_symbols()
		self.grammatic_symbols = self.read_grammar()

	def read_grammar(self):
		"""
		Reads the grammar from /Path/To/Alton/Parser/_Generation/GrammarList.txt
		:return: A list of symbols
		"""
		# --- Head
		lines = open("Parser/_Generation/GrammarList.txt", 'r').readlines()
		grammar = []
		cache = ""
		symbol_cache = Symbol("")
		existing = []

		# --- Body
		# -- Parsing
		for i in lines:
			if len(i) == 1 or i[0] == '#' or i[0] == ' ' or i[0] == '\t':
				# - Assume empty / commented line
				continue

			else:
				# - Resetting cache
				cache = ""
				
				# - Assume valid grammar
				for j in i:
					# - Found a space
					if j == ' ' or j == '\t':
						# Converting cache into a symbol
						symbol_cache = Symbol(cache)

						# Detecting repetition
						if cache not in existing:
							# Boy. He. Bout. To. Do. It.
							grammar.append(symbol_cache)

						existing.append(cache)
						break

					else:
						cache += j

		return grammar

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
		for i in self.symbols:
			format1 += i.symbol + ',\n\t\t\t'

		format1 += "\n\t\t\t"

		for i in self.grammatic_symbols:
			format1 += "nterm_" + i.symbol + ',\n\t\t\t'
		
		# -- Save
		file.write(template % format1)
		file.close()

	def parser_hpp(self):
		"""
		Replaces the file /Path/To/Alton/Parser/Parser.hpp
		:return: Nope.
		"""
		# --- Head
		format1 = ""
		format2 = ""
		template = open("./Parser/_Generation/TemplateParser.hpp", 'r').read()
		file = open("./Parser/Parser.hpp", 'w')

		# --- Body
		# -- First and second formats
		for i in self.grammatic_symbols:
			format1 += """
			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_%s();\n""" % i.symbol

			format2 += """
			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_%s();\n""" % i.symbol
		
		# -- Save
		file.write(template % (format1, format2))
		file.close()


def main():
	# --- Head
	cc = ParserGenerator()

	# --- Body
	cc.symbol_hpp()
	cc.parser_hpp()


if __name__ == "__main__":
	main()

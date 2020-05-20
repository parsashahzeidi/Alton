#!/usr/bin/pypy3

from os import getcwd
from sys import path
path.append(getcwd())

from Lexer._Generation.Token import get_all_tokens as get_lexing_tokens
from Tools.PythonGeneralTools.basic_ne import basic_ne

_symbol_list = {}
_index_list = {}


def add_symbol (text: str):
	next_index = len (_symbol_list)
	_symbol_list.update ({text: next_index})
	_index_list.update ({next_index: text})

	return next_index


def get_symbol_index (text: str):
	index = 0

	if text in _symbol_list:
		index = _symbol_list [text]

	else: index = add_symbol (text)

	return index


def count_of_symbols ():
	return len (_symbol_list)


def get_symbol_text_from_index (index: int):
	# --- Head
	return _index_list [index]


def determine_term(text: str):
	# --- Head
	terminals = [i.token for i in get_lexing_tokens()]

	# --- Body
	if text in terminals:
		return 1

	elif text == "ending":
		return 1

	else: return 0


class Symbol:
	def __init__(self, name: str, terminal: int = 2, index: int = None):
		# --- Head
		self.symbol = name

		# --- Body
		# -- Parsing the `terminal` parameter
		# - Explicitly declared terminal / non-terminal
		if terminal == 0 or terminal == 1:
			self.terminal = terminal

		# - Implicitly declaring the terminal-ness
		elif terminal == 2:
			self.terminal = determine_term(name)

		# - Error
		else:
			BaseException ("Bru, you forgot the terminal parameter")

		# -- Parsing the `index` parameter
		#	NOTE: The index is for faster equality checking

		# - Implicit indexing
		if index is None:
			self.index = self.get_index ()

		# - Explicit indexing
		else:
			self.index = index

	def __eq__(self, item):
		return self.index == item.index

	def __ne__(self, item):
		return basic_ne(self, item)

	def get_index (self):
		# --- Head
		index = 0
		symbol_string = self.symbol

		# --- Body
		# -- Need to register the symbol
		if self.symbol not in _symbol_list:
			index = add_symbol (symbol_string)

		else: index = get_symbol_index (symbol_string)

		return index

	def is_term(self):
		if self.terminal == 1:
			return 1

		elif self.terminal == 0:
			return 0

		else:
			return None

	def symbol (self):
		return _symbol_list [self.index]

	def get_cpp_name(self):
		if self.is_term():
			return self.symbol

		else:
			return "nterm_" + self.symbol


def get_lexing_symbols():
	# --- Head
	lexing_tokens = get_lexing_tokens()
	parsing_symbols = []

	# --- Body
	for i in lexing_tokens:
		parsing_symbols.append (Symbol (i.token, 1))

	return parsing_symbols

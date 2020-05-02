#!/usr/bin/pypy3

from os import getcwd
from sys import path
path.append(getcwd())

from Lexer._Generation.Token import get_all_tokens as get_lexing_tokens
from Tools.PythonGeneralTools.basic_ne import basic_ne


def get_lexing_symbols():
	return [Symbol(i.token, 1) for i in get_lexing_tokens()]

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
	def __init__(self, name: str, terminal: int = 2):
		self.symbol = name

		if terminal == 0 or terminal == 1:
			self.terminal = terminal

		else:
			self.terminal = determine_term(name)

	def __eq__(self, item):
		if self.symbol == item.symbol:
			# Returning NotImplemented caused bugs, Will never do again.
			return 1

		else: return 0

	def __ne__(self, item):
		return basic_ne(self, item)

	def is_term(self):
		if self.terminal == 1:
			return 1

		elif self.terminal == 0:
			return 0

		else:
			return None

	def get_cpp_name(self):
		if self.is_term():
			return self.symbol

		else:
			return "nterm_" + self.symbol

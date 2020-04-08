#!/usr/bin/pypy3

from os import getcwd
from sys import path
path.append(getcwd())

from Lexer._Generation.Token import get_all_tokens as get_lexing_tokens


def get_lexing_symbols():
	return [Symbol(i.token) for i in get_lexing_tokens()]


class Symbol:
	def __init__(self, name: str):
		self.symbol = name

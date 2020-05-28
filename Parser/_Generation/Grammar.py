#!/usr/bin/pypy3

from os import getcwd
from sys import path
path.append(getcwd())

from Parser._Generation.Symbol import Symbol, get_lexing_symbols
from Tools.PythonGeneralTools.basic_ne import basic_ne

class Grammar:
	def __init__(self, text: str):
		self._tokenize(text)

	def __eq__(self, item):
		if self.name != item.name:
			return 0

		if self.product != item.product:
			return 0

		return NotImplemented

	def __ne__(self, item):
		return basic_ne(self, item)

	def ___char_is_name_start(self, char):
		# --- Head
		integer = char.encode()[0]

		# --- Body
		if char == "_":
			return 1

		elif integer >= b'a'[0] and integer <= b'z'[0]:
			return 1

		elif integer >= b'A'[0] and integer <= b'Z'[0]:
			return 1

		else: return 0

	def ___char_is_name(self, char):
		# --- Head
		integer = char.encode()[0]

		# --- Body
		if self.___char_is_name_start(char):
			return 1

		elif integer >= b'0'[0] and integer <= b'9'[0]:
			return 1

		else: return 0

	def __advance_name(self, text:str):
		# --- Head
		token, output = "", text + "$"
		character = output[0]

		# --- Body
		# -- If the character is not a name start then quit.
		if not self.___char_is_name_start(character):
			return token, output

		# -- Separate each character
		while self.___char_is_name(character):
			token += character
			output = output[1:]
			character = output[0]

		return token, output[:-1]

	def __advance_whitespace(self, text: str):
		# --- Head
		whitespace = ['\n', '\t', ' ', '\r', '\v']
		output = text + "$"

		# --- Body
		while output[0] in whitespace:
			output = output[1:]

		return "", output[:-1]

	def __advance_arrow(self, text: str):
		if len(text) < 2:
			return "", text

		if text[:2] == "->":
			return "->", text[2:]

		else: return "", text

	def _tokenize(self, text:str):
		# --- Head
		remaining_text = text
		error_text = text
		token_cache = ""
		last_length = 0

		# --- Body
		# -- Clearing tarilin' newlines
		while len(remaining_text) != 0 and remaining_text[-1] == "\n":
			remaining_text = remaining_text[:-1]

		error_text = "Rule \"" + remaining_text + "\" "

		# -- Detecting emptyness
		if len(remaining_text) == 0:
			raise SyntaxError(error_text + "hasn't a character.")

		# -- Detecting comment-ness
		if remaining_text[0] == "#":
			raise BaseException("Comment passed thru _tokenize. comment is \"" + remaining_text + "\"")

		# -- Advancing the non-terminal's name
		token_cache, remaining_text = self.__advance_name(remaining_text)

		if token_cache == "":
			raise SyntaxError(error_text + "contains no valid name.")

		self.name = token_cache

		# -- Advancing dat arrow
		token_cache, remaining_text = self.__advance_whitespace(remaining_text)
		token_cache, remaining_text = self.__advance_arrow(remaining_text)

		if token_cache == "":
			raise SyntaxError(error_text + "has no arrow / delimiter.")

		# -- Advancing the rest
		last_length = len(remaining_text)
		self.product = []

		while last_length != 0:
			token_cache, remaining_text = self.__advance_whitespace (remaining_text)
			token_cache, remaining_text = self.__advance_name (remaining_text)

			self.product.append(Symbol(token_cache))

			# - Detecting if nothing advanced
			if last_length == len(remaining_text):
				raise SyntaxError(
					error_text + "has an invalid character.\n                   "
					+ (  #      ^ here.
						" " * (len(text) - len(remaining_text))
					)
					+ "^ here."
				)


			last_length = len(remaining_text)

	def get_cpp_parserule_representation (self):
		output = "ParseRule (Symbol::nterm_" + self.name + ", "
		output += str (len (self.product)) + ")"

		return output

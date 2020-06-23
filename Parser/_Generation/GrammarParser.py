#!/usr/bin/pypy3

from os import getcwd
from sys import path
path.append(getcwd())

from Parser._Generation.Grammar import Grammar
from Parser._Generation.Symbol import Symbol
from Parser._Generation.Configuration import get_product_index
from copy import copy


class GrammarParser:
	def __char_is_name_start(self, char):
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

	def __char_is_name(self, char):
		# --- Head
		integer = char.encode()[0]

		# --- Body
		if self.__char_is_name_start(char):
			return 1

		elif integer >= b'0'[0] and integer <= b'9'[0]:
			return 1

		else: return 0

	def _advance_whitespace (self, text):
		# --- Head
		# -- Defines where we currently are.
		where = 0

		# -- Makes a definition of whitespace
		whitespace = ['\t', '\n', '\r', '\v', ' ']

		# -- Trimmed and Trimmer are the left and the right side of the
		#	whitespace's ending, respectively.
		trimmed = ""
		trimmer = ""

		# --- Body
		# -- Finding the whitespace's ending
		while where != len (text) and text [where] in whitespace:
			where += 1

		# -- Triim Boae
		trimmed = text [where:]
		trimmer = text [:where]

		return trimmer, trimmed

	def _advance_semicolon (self, text):
		# --- Body
		# -- checking if we can advance a semicolon thru
		if len (text) != 0 and text[0] == ';':
			return ';', text [1:]

		else:
			return '', text

	def _advance_colon (self, text):
		# --- Body
		# -- checking if we can advance a colon thru
		if len (text) != 0 and text[0] == ':':
			return ':', text [1:]

		else:
			return '', text

	def _advance_or (self, text):
		# --- Body
		# -- checking if we can advance a bitwise-"or" sign thru
		if len (text) != 0 and text[0] == '|':
			return '|', text [1:]

		else:
			return '', text

	def _advance_name(self, text):
		# --- Head
		trimmer, trimmed = "", text + "$"
		character = trimmed [0]

		# --- Body
		# -- If the character is not a name start then quit.
		if not self.__char_is_name_start(character):
			return trimmer, text

		# -- Separate each character
		while self.__char_is_name(character):
			trimmer += character
			trimmed = trimmed [1:]
			character = trimmed [0]

		return trimmer, trimmed [:-1]

	def _advance_comment (self, text):
		# --- Kill condition
		if len (text) < 2 or text[:2] != "//":
			return "", text

		# --- Head
		# -- Defines where we currently are.
		where = 0

		# -- Trimmed and Trimmer are the left and the right side of the
		#	whitespace's ending, respectively.
		trimmed = ""
		trimmer = ""

		# --- Body
		# -- Advancing to a newline
		while text[where] != '\n':
			where += 1

			if where == len (text):
				break

		# -- TRIMBOI
		trimmed = text [where:]
		trimmer = text [:where]

		return trimmer, trimmed

	def _advance_waste (self, _text):
		# --- Head
		comment = "Hello! I'm a placeholder. I don't affect anything since I'm"
		whitespace = "gonna be replaced by \"waste\" in the next while loop."
		text = _text

		# --- Body
		while comment != "" or whitespace != "":
			whitespace, text = self._advance_whitespace (text)
			comment, text = self._advance_comment (text)

		return text

	def _verify (self, result, error, text):
		if result == "":
			raise SyntaxError (error + " from rule `" + text + "`.")

	def parse_rule (self, _text, pgen):
		# --- Kill condition
		if ';' not in _text:
			raise SyntaxError ("Semicolon is missing from rule `" + _text + "`.")

		# --- Head
		# -- Just a duplicate of _text to match my personal coding standards.
		text = _text

		# -- The error text, something like `RULE_NAME: stuff|stuff;`
		# - A semicolon check is at the kill condition segment, this shouldn't
		#	produce an error.
		next_semicolon = _text.index (';')
		error_text = text [:next_semicolon]

		# -- Components of the rule
		symbol = None
		grammar = Grammar ()
		cache = ""

		# --- Body
		# -- Advancing the rule's name
		cache, text = self._advance_name (text)
		self._verify (cache, "Name is missing", error_text)
		text = self._advance_waste (text)

		# - Also add the name as a non terminal
		grammar.name = cache
		pgen.symbols.append (Symbol (cache, 0))

		# -- Advancing the colon between the name and the product
		cache, text = self._advance_colon (text)
		self._verify (cache, "Colon separator is missing", error_text)
		text = self._advance_waste (text)

		# -- Advancing the product
		while 1:
			# - Advancing each outcome
			while 1:
				# Advancing each symbol
				cache, text = self._advance_name (text)
				text = self._advance_waste (text)

				# Nothing advanced? We may have hit a `|` or a `;`
				if cache == "":
					break

				# Appending the symbol to the end of the rules
				symbol = Symbol (cache)
				grammar.product.append (symbol)

			# -- Nothing advanced? The rule shouldn't be empty!
			if grammar.product == []:
				raise SyntaxError\
						("A product is missing from rule `" + error_text + "`.")

			# -- Appending the rule, via the get_product_index function. Despite
			#	the name, this function adds a product, if it's not already
			#	existing, then returns the index The copying is required.
			get_product_index (copy (grammar))

			# -- Resetting the product
			grammar.product = []

			# -- Advancing the ; or the |
			# - Advancing the or first, since it's more common.
			cache, text = self._advance_or (text)
			text = self._advance_waste (text)

			# - If that failed, Advance the semicolon.
			if cache == "":
				cache, text = self._advance_semicolon (text)
				self._verify (cache, "Invalid characters", error_text)
				break

		return text

	def trim_percent (self, _text):
		# --- Head
		text = _text
		split = []

		# --- Body
		# -- Checking for a %%
		split = text.split ("%%")

		if len (split) < 2:
			raise SyntaxError (
				"No %% sign to separate the Bison stuff with mine."
			)

		elif len (split) < 2:
			raise SyntaxError (
				"More that one %% sign. Remove one."
			)

		else:
			return split [1]

	def parse_grammar (self, _text, pgen):
		# --- Head
		text = self.trim_percent (_text)

		# --- Body
		# -- Parsing
		text = self._advance_waste (text)
		while text != "":
			text = self.parse_rule (text, pgen)
			text = self._advance_waste (text)

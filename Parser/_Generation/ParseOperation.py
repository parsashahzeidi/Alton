#!/usr/bin/pypy3

from os import getcwd
from sys import path
path.append(getcwd())

from Parser._Generation.Symbol import Symbol


# This class is a translation of the class over at /Path/To/Alton/Parser/ParseOperation.hpp
class ParseOperation:
	OPERATION_UNDEFINED = 0
	OPERATION_SHIFT = 1
	OPERATION_REDUCE = 2
	OPERATION_ACCEPT = 3
	OPERATION_ERROR = 4
	OPERATION_GOTO = 5
	OPERATION_PARSE_EXPRESSION = 6

	def __init__(self):
		self.operation = ParseOperation.OPERATION_UNDEFINED
		self.value = 0

	def __str__ (self):
		if self.operation == ParseOperation.OPERATION_ERROR:
			return "-"
		else: return self.get_operation_char () + str (self.value)

	def get_operation_char(self, operation:int = None):
		if operation is None:
			operation = self.operation

		if operation == ParseOperation.OPERATION_SHIFT:
			return "S"

		if operation == ParseOperation.OPERATION_REDUCE:
			return "R"

		if operation == ParseOperation.OPERATION_ACCEPT:
			return "A"

		if operation == ParseOperation.OPERATION_GOTO:
			return "G"

		if operation == ParseOperation.OPERATION_PARSE_EXPRESSION:
			return "X"

		else:
			return "?"

	def get_cpp_override_representation(self):
		# --- Head
		operation = ".override (ParseOperationType::"

		# --- Body
		# -- The operation name translation
		#	AKA .override (ParseOperationType::shift,
		if self.operation == ParseOperation.OPERATION_SHIFT:
			operation += "shift"

		elif self.operation == ParseOperation.OPERATION_REDUCE:
			operation += "reduce"

		elif self.operation == ParseOperation.OPERATION_ACCEPT:
			operation += "accept"

		elif self.operation == ParseOperation.OPERATION_GOTO:
			operation += "go_to"

		elif self.operation == ParseOperation.OPERATION_ERROR:
			operation += "error"

		elif self.operation == ParseOperation.OPERATION_PARSE_EXPRESSION:
			operation += "parse_expression"

		operation += ", "

		# -- The operation's value
		#	AKA .override (ParseOperationType::shift, 5)
		#	NOTE: No semicolon. :D

		if self.value is not None:
			operation += str (self.value)
		else:
			operation += "0"

		operation += ")"

		return operation

	def override_operation (
			self, override:int, value:int, state:int, symbol:Symbol):
		# --- Kill condition
		if override == ParseOperation.OPERATION_UNDEFINED:
			return

		# --- Head
		is_conflict = False

		# --- Body
		# -- Checking for conflicts
		if self.operation != ParseOperation.OPERATION_UNDEFINED and (self.operation != override and self.value != value):
			print (
				self.get_operation_char (), "/",
				self.get_operation_char (override), "conflict at State",
				state, "on", symbol.symbol
			)
			is_conflict = True

		self.operation = override
		self.value = override

		return is_conflict

	def finalize(self):
		# --- Body
		# -- Replaces the operation type if not an error.
		if self.operation == ParseOperation.OPERATION_UNDEFINED:
			self.operation = ParseOperation.OPERATION_ERROR

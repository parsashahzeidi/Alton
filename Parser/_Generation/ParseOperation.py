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

	def __init__(self):
		self.operation = ParseOperation.OPERATION_UNDEFINED
		self.value = 0

	def __str__ (self):
		return self.get_operation_char () + str (self.value)

	def get_operation_char(self, operation:int = None):
		if operation is None:
			operation = self.operation

		if operation == ParseOperation.OPERATION_UNDEFINED:
			return "E"

		if operation == ParseOperation.OPERATION_SHIFT:
			return "S"

		if operation == ParseOperation.OPERATION_REDUCE:
			return "R"

		if operation == ParseOperation.OPERATION_ACCEPT:
			return "A"

		if operation == ParseOperation.OPERATION_GOTO:
			return "G"

		if operation == ParseOperation.OPERATION_ERROR:
			return "E"

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
				self, override:int, value:int, state:int, symbol:Symbol
			):
		# --- Body
		# -- Kill condition
		if override == ParseOperation.OPERATION_UNDEFINED:
			return

		# -- Checking for conflicts
		if self.operation != ParseOperation.OPERATION_UNDEFINED:
			if self.operation != override and self.value != value:
				print (
					self.get_operation_char (), "/",
					self.get_operation_char (override), "conflict at state:",
					state, "; symbol:", symbol.symbol
				)

		self.operation = override
		self.override_value (value)

	def override_value(self, override):
		self.value = override

	def finalize(self):
		# --- Body
		# -- Replaces the operation type if not an error.
		if self.operation == ParseOperation.OPERATION_UNDEFINED:
			self.operation = ParseOperation.OPERATION_ERROR

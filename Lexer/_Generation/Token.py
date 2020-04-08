#! /usr/bin/pypy3


def get_tokens(filepath: str, prependix: str):
	"""
	Grabs the tokens at /Path/To/Alton/Tools/Instructions/LexedTree/TokenLists.txt
	:return: a list of strings and a list of strings
	"""
	file = open(filepath).read()

	lines = [i.split(" ") for i in file.split("\n")]

	tokens = []
	strings = []

	for j in lines:
		if j[0] == "":
			continue

		else:
			token = prependix + j[0]
			if len(j) > 1:
				tokens.append(token)
				strings.append(j[1])

			else:
				tokens.append(token)
				strings.append("")

	return [Token(tokens[i], strings[i]) for i in range(len(tokens))]


def get_all_tokens():
	return get_tokens("./Lexer/_Generation/KeywordList.txt", "keyword_") +\
		get_tokens("./Lexer/_Generation/OperatorList.txt", "oper_") +\
		get_tokens("./Lexer/_Generation/TokenList.txt", "")


class Token:
	def __init__(self, token: str, string: str):
		self.token = token
		self.string = string

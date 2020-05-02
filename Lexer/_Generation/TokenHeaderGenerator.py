# /usr/bin/pypy3

from os import getcwd
from sys import path
path.append(getcwd())

from Lexer._Generation.Token import get_tokens as get_lexing_tokens


def main():
	symbols = get_lexing_tokens("./Lexer/_Generation/TokenList.txt", "")
	symbols += get_lexing_tokens("./Lexer/_Generation/OperatorList.txt", "oper_")
	keywords = get_lexing_tokens("./Lexer/_Generation/KeywordList.txt", "keyword_")

	source = open("./Lexer/Tokens.hpp", 'w')
	header = open("./Lexer/Tokens.cpp", 'w')
	source_template_file = open("./Lexer/_Generation/ExampleTokens.cpp", 'r')
	header_template_file = open("./Lexer/_Generation/ExampleTokens.hpp", 'r')
	source_template = source_template_file.read()
	header_template = header_template_file.read()


	format0, format1, format2, format3, format4, format5, format6 = "", "", "", "", "", "", ""
	cache = ""

	for i in symbols:
		format0 += "\n\t\t\t" + i.token + ","
		format6 += "\n\t\t\tcase Token::" + i.token + ": return U\"" + i.token + "\";"

		if i.string == "":
			continue

		cache = "\n\t\t\tif (in == U\"" + i.string + "\") return Token::" + i.token + "; else"

		if len(i.string) == 3:
			format1 += cache
		elif len(i.string) == 2:
			format2 += cache
		elif len(i.string) == 1:
			format3 += cache
		else:
			format4 += cache

	for i in keywords:
		format0 += "\n\t\t\t" + i.token + ","
		format6 += "\n\t\t\tcase Token::" + i.token + ": return U\"" + i.token + "\";"

		if i.string == "":
			continue

		format5 += "\n\t\t\tif (in == U\"" + i.string + "\") return Token::" + i.token + "; else"

	header_template %= format0
	source_template %= format1, format2, format3, format4, format5, format6

	source.write(header_template)
	source_template_file.close()
	source.close()

	header.write(source_template)
	header_template_file.close()
	header.close()


if __name__ == "__main__":
	main()

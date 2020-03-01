# /usr/bin/pypy3
# TODO: Use a dictionary instead of constant switches / infinite if statements..

def get_tokens():
	"""
	Grabs the tokens at /Path/To/Alton/Tools/Instructions/LexedTree/TokenLists
	:return: a list of strings and a list of strings
	"""
	file = open("./Lexer/_Generation/TokenLists").read()

	lines = [i.split(" ") for i in file.split("\n")]

	tokens = []
	strings = []

	for j in lines:
		if j[0] == "":
			continue

		else:
			if len(j) > 1:
				tokens.append(j[0])
				strings.append(j[1])
			else:
				tokens.append(j[0])
				strings.append("")

	return tokens, strings


if __name__ == "__main__":
	token, string = get_tokens()

	outfile = open("./Lexer/Tokens.hpp", "w")
	template = open("./Lexer/_Generation/ExampleTokens.hpp").read()

	format0, format1, format2, format3, format4, format5 = "", "", "", "", "", ""

	for i in range(len(token)):
		format0 += "\n\t\t\t" + token[i] + ","

		if string[i] != "":
			format1 += "\n\t\t\tcase token::" + token[i] + ": return U\"" + string[i] + "\";"

			if len(string[i]) == 3:
				format2 += "\n\t\t\tif (in == U\"" + string[i] + "\") return token::" + token[i] + "; else"
			elif len(string[i]) == 2:
				format3 += "\n\t\t\tif (in == U\"" + string[i] + "\") return token::" + token[i] + "; else"
			elif len(string[i]) == 1:
				format4 += "\n\t\t\tif (in == U\"" + string[i] + "\") return token::" + token[i] + "; else"
			else:
				format5 += "\n\t\t\tif (in == U\"" + string[i] + "\") return token::" + token[i] + "; else"

	template %= format0, format1, format2, format3, format4, format5

	outfile.write(template)
	outfile.close()

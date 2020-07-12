#!/usr/bin/pypy3

# --- Pardon the unclean code

def main ():
	# --- Head
	name = ""
	inheriter = ""

	cpp_file = None
	cpp_template = (
"# include <Parser/AST/%s.hpp>\n\nnamespace Alton\n{\n\tnamespace Parser\n\t{\n"
"\t\tnamespace AST\n\t\t{\n\t\t\tvoid %s::parse (ParseHelper &h)\n\t\t\t{\n\t\t"
"\t\t// TODO: Finish me!\n\t\t\t\t...\n\t\t\t}\n\t\t\t%s::%s ()\n\t\t\t{ }\n\t"
"\t}  // AST\n\t}  // Parser\n}  // Alton\n"
	)  # Goes like name, name, name, name

	hpp_file = None
	hpp_template = (
"# pragma once\n\n# include <Parser/AST/%s.hpp>\n\n\nnamespace Alton\n{\n\tname"
"space Parser\n\t{\n\t\tnamespace AST\n\t\t{\n\t\t\tclass %s: %s\n\t\t\t{\n\t\t"
"\t\t// --- Head\n\t\t\tprivate:\n\n\t\t\tpublic:\n\n\t\t\t\t// --- Body\n\t\t"
"\tprivate:\n\n\t\t\tpublic:\n\t\t\t\tvoid parse (ParseHelper &);\n\n\t\t\t\t//"
" --- CTOR ~ DTOR\n\t\t\tpublic:\n\t\t\t\t%s ();\n\t\t\t};\n\t\t}  // AST\n\t} "
" // Parser\n}  // Alton\n"
	)  # Goes like inheriter, name, inheriter, name

	# --- Body
	# -- Getting inputs
	# - The name
	print (
		"\033[32m"+"\nThis Python file isn't supposed to be run in the build pr"
		"ocess,\n\n\033[1m Run this file in the folder it exists in, Parser/AST"
		"/_Helper.\033[0m\n\nHello!\nI am an Abstract Syntax Tree Node Generato"
		"r, just because generating nodes is a tedious process.\nI don't actual"
		"ly create functioning CPP and HPP files, you'll have to modify them la"
		"ter.\n\nPlease input the name of your Abstract Syntax Tree node\033[1m"
	)
	name = input ()

	# - The inheriter
	print (
		"\033[0m\nNeat. Now please input the inheriter's name. Optionally, just"
		" press <enter> to set it to BaseAST\033[1m"
	)
	inheriter = input ()

	# Replacing it, just in case it's empty.
	if inheriter == "":
		inheriter = "BaseAST"

	# -- Verification
	print (
		"\033[0m\nNice! Let's see if I got this right,\n\nThe filenames will be"
		"\n  \033[1m" + name + ".hpp\033[0m and\n  \033[1m" + name + ".cpp\033["
		"0m\nand the class declaration will be\n  \033[1mclass " + name + ": " +
		inheriter + "\033[0m\n\nPress <enter> to continue, or <ctrl+c> to quit."
	); input ()

	# -- Processing
	# - Formatting
	print ("Processing the templates")
	cpp_template %= name, name, name, name
	hpp_template %= inheriter, name, inheriter, name

	# - Opening the files
	print ("Opening the files")
	cpp_file = open ("../" + name + ".cpp", 'w')
	hpp_file = open ("../" + name + ".hpp", 'w')

	# - Writing to the files
	print ("Writing the files")
	cpp_file.write (cpp_template)
	hpp_file.write (hpp_template)


if __name__ == '__main__':
	main ()

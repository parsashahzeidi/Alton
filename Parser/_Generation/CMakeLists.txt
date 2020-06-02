# --- Head ---
# -- Dependencies --
set 						(PARSER_HEADER_DEPENDENCIES
	${dir}/Parser/_Generation/GrammarList.txt
	${dir}/Parser/_Generation/ParserGenerator.py
	${dir}/Parser/_Generation/Symbol.py
	${dir}/Parser/_Generation/Configuration.py
	${dir}/Parser/_Generation/Grammar.py
	${dir}/Parser/_Generation/ParseOperation.py
	${dir}/Parser/_Generation/TemplateParseTable.cpp
	${dir}/Parser/_Generation/TemplateSymbol.hpp
	${dir}/Parser/_Generation/ParseState.py
	${dir}/Parser/_Generation/ParseTransition.py
	${dir}/Parser/_Generation/GrammarParser.py
)


# --- Body ---
# -- PreCompile targets --
add_custom_command			(OUTPUT ${dir}/TouchFiles/parser_headers.touch
	COMMAND ${PYTHON_RUNTIME} ${dir}/Parser/_Generation/ParserGenerator.py
	COMMAND ${TOUCH} ${dir}/TouchFiles/parser_headers.touch
	WORKING_DIRECTORY ${dir}
	DEPENDS
		${PARSER_HEADER_DEPENDENCIES}
)
add_custom_target			(parser_headers
	DEPENDS ${dir}/TouchFiles/parser_headers.touch
)

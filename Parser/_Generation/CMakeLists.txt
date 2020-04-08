# --- Head ---
# -- Dependencies --
set 						(PARSER_HEADER_DEPENDENCIES
	${dir}/Parser/_Generation/GrammarList.txt
	${dir}/Parser/_Generation/ParserGenerator.py
	${dir}/Parser/_Generation/Symbol.py
	${dir}/Parser/_Generation/TemplateParser.hpp
	${dir}/Parser/_Generation/TemplateSymbol.hpp
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
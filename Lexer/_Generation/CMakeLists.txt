# --- Head ---
# -- Dependencies --
set							(LEXER_HEADER_DEPENDENCIES
	${dir}/Lexer/_Generation/ExampleTokens.hpp
	${dir}/Lexer/_Generation/Token.py
	${dir}/Lexer/_Generation/TokenHeaderGenerator.py
	${dir}/Lexer/_Generation/TokenList.txt
	${dir}/Lexer/_Generation/OperatorList.txt
	${dir}/Lexer/_Generation/KeywordList.txt
)


# --- Body ---
# -- PreCompile targets --
add_custom_command			(OUTPUT ${dir}/TouchFiles/lexer_headers.touch
	COMMAND ${PYTHON_RUNTIME} -B ${dir}/Lexer/_Generation/TokenHeaderGenerator.py
	COMMAND ${TOUCH} ${dir}/TouchFiles/lexer_headers.touch
	WORKING_DIRECTORY ${dir}
	DEPENDS
		${LEXER_HEADER_DEPENDENCIES}
)
add_custom_target			(lexer_headers
	DEPENDS ${dir}/TouchFiles/lexer_headers.touch
)

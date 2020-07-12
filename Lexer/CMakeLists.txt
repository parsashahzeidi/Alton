# --- Head ---
# -- Sources --
set									(LEXER_LIB_SOURCES
	${dir}/Lexer/Lexer.cpp
	${dir}/Lexer/LexemeHelper.cpp
	${dir}/Lexer/Tokens.cpp
)

# -- Dependencies --
add_subdirectory					(${dir}/Lexer/_Generation/)

# --- Body ---
# -- Library targets --
add_library							(lexer_lib
	STATIC EXCLUDE_FROM_ALL
	${LEXER_LIB_SOURCES}
)

# -- Dependencies --
add_dependencies					(lexer_lib lexer_headers)

# -- CXX includes --
target_include_directories			(lexer_lib PUBLIC ${dir})

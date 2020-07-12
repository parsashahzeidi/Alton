# --- Head ---
# -- Sources --
set (PARSER_LIB_SOURCES
	${dir}/Parser/Parser.cpp
	${dir}/Parser/ParseHelper.cpp
)

# -- Dependencies --
add_subdirectory					(${dir}/Parser/AST/ BINARY_DIR)

# --- Body ---
# -- Library targets --
add_library (parser_lib STATIC EXCLUDE_FROM_ALL
		   ${PARSER_LIB_SOURCES} $<TARGET_OBJECTS:ast_lib>
)

# -- CXX includes --
target_include_directories (parser_lib PUBLIC ${dir})

# --- Head ---
# -- Sources --
set							(PARSER_LIB_SOURCES
	${dir}/Parser/Parser.cpp
	${dir}/Parser/ParseHelper.cpp
	${dir}/Parser/Symbol.cpp
)

# -- Dependencies --
add_subdirectory			(${dir}/Parser/_Generation/)


# --- Body ---
# -- Library targets --
add_library							(parser_lib
	STATIC EXCLUDE_FROM_ALL
	${PARSER_LIB_SOURCES}
)

# -- Dependencies --
add_dependencies					(parser_lib parser_headers)

# -- CXX includes --
target_include_directories			(parser_lib PUBLIC ${dir})

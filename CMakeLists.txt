cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

# --- Head ---
# -- Head's Head --
project(AltonMain)
enable_testing()

# -- Variables --
set							(dir			${CMAKE_CURRENT_SOURCE_DIR})
set							(SOURCE			Alton.cpp)

# -- Compiler Args --
set							(DBG_FLAGS		-O0 -g -pg)
set							(BLD_FLAGS		-Ofast -c -m64)
set							(LNK_FLAGS		-Ofast)
set							(ALL_FLAGS		-std=c++2a -Wpedantic -Werror -pthread)

# -- Options --
option						(USE_DEBUG_TARGETS "Speed up the compiling process by using debug compile flags" OFF)

include_directories			(${dir})

# --- Body ---
# -- Proceedral Headers --
# - The Lexer's _Generation folder -
add_custom_target			(${PROJECT_NAME}_lexer_headers ALL
	COMMAND python3 ${dir}/Lexer/_Generation/TokenHeaderGenerator.py
	WORKING_DIRECTORY ${dir}
)

# -- Targets --
add_executable (${PROJECT_NAME}Run ${SOURCE})

# - Build target -
if (!USE_DEBUG_TARGETS)
	target_compile_options	(${PROJECT_NAME}Run		PRIVATE		${BLD_FLAGS} ${ALL_FLAGS})
	target_link_options		(${PROJECT_NAME}Run		PRIVATE		${LNK_FLAGS} ${ALL_FLAGS})

# - Debug target -
else ()
	target_compile_options	(${PROJECT_NAME}Run		PRIVATE		${DBG_FLAGS} ${ALL_FLAGS})
	target_link_options		(${PROJECT_NAME}Run		PRIVATE		${DBG_FLAGS} ${ALL_FLAGS})

endif ()

# -- Tests --
add_test 				(NAME MainTest
	COMMAND ${PROJECT_NAME} -i=${dir}/Tests/Tests.lfi
	WORKING_DIRECTORY ${dir}/Tests/
)

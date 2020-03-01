cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

project(AltonMain)

enable_testing()

set (dir ${CMAKE_CURRENT_SOURCE_DIR})
set (SOURCE Alton.cpp)

set (DBG_FLAGS -O0 -g -pg)
set (BLD_FLAGS -Ofast -c -m64)
set (LNK_FLAGS -Ofast)
set (ALL_FLAGS -std=c++2a -Wpedantic -Werror -pthread)

include_directories (${dir})

add_executable			(${PROJECT_NAME}								${SOURCE})
target_compile_options	(${PROJECT_NAME}		PRIVATE		${BLD_FLAGS} ${ALL_FLAGS})
target_link_options		(${PROJECT_NAME}		PRIVATE		${LNK_FLAGS} ${ALL_FLAGS})

add_executable			(debug_${PROJECT_NAME}							${SOURCE})
target_compile_options	(debug_${PROJECT_NAME}	PRIVATE		${DBG_FLAGS} ${ALL_FLAGS})
target_link_options		(debug_${PROJECT_NAME}	PRIVATE		${DBG_FLAGS} ${ALL_FLAGS})

add_custom_target (
	NAME run_debug
	COMMAND make MainTest
)

add_test (
		NAME MainTest
		WORKING_DIRECTORY ${dir}/Tests/
		COMMAND valgrind --track-origins=yes --leak-check=full --show-leak-kinds=all ${PROJECT_NAME} -i=${dir}/Tests/Tests.lfi
)

# --- Head ---
# -- Head's Head --
cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(AltonMain)

# -- Options --
option (NDEBUG "Option to force disablation of debugging arguments" on)

# -- Build options --
# - Debugging -
if (NDEBUG)

	set (CMAKE_BUILD_TYPE RELEASE)

else ()

	set (CMAKE_BUILD_TYPE DEBUG)

endif ()

# -- Compile Args --
find_package (Python3 REQUIRED)
set (PYTHON_RUNTIME python3 -B -OO -u)

set (CMAKE_CXX_STANDARD_REQUIRED "c++20")

set (CMAKE_CXX_FLAGS
  "${CMAKE_CXX_FLAGS} -std=c++20 -Wpedantic -Werror")

set (CMAKE_CXX_FLAGS_DEBUG
  "${CMAKE_CXX_FLAGS_DEBUG} ${CMAKE_CXX_FLAGS} -O0 -g")

set (CMAKE_CXX_FLAGS_RELEASE
  "${CMAKE_CXX_FLAGS_RELEASE} ${CMAKE_CXX_FLAGS} -O2 -DNDEBUG")

# -- Platform dependent --
# - Windows -
if (WIN32)

	set (POSIX_EQUIVELANT_TOOLS_DIR
		${dir}/Tools/WindowsPosixEquivelantCommands/)
	set (TOUCH ${POSIX_EQUIVELANT_TOOLS_DIR}touch)

# - Unix -
elseif (UNIX)

	set (TOUCH touch)

endif ()

# -- Variables --
set (dir ${CMAKE_HOME_DIRECTORY})
set (SOURCE Alton.cpp)

# --- Body ---
# -- CMake includes --
add_subdirectory (${dir}/ETC/_Generation/ EXCLUDE_FROM_ALL)
add_subdirectory (${dir}/ArgumentProcessor/ EXCLUDE_FROM_ALL)
add_subdirectory (${dir}/Parser/ EXCLUDE_FROM_ALL)
add_subdirectory (${dir}/Conversions/ EXCLUDE_FROM_ALL)
add_subdirectory (${dir}/Clinic/ EXCLUDE_FROM_ALL)
add_subdirectory (${dir}/Lexer/ EXCLUDE_FROM_ALL)
add_subdirectory (${dir}/Tools/ EXCLUDE_FROM_ALL)

# - Out of tree dependencies -
add_dependencies (parser_lib lexer_lib)

# -- Main executable --
add_executable (Run ${SOURCE})

# -- CXX Linkings --
target_link_libraries (Run
	parser_lib
	lexer_lib
	arg_lib
	clinic_lib
	convert_lib
	tool_lib)

# -- CXX includes --
target_include_directories (Run PUBLIC ${dir})

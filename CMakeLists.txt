# --- Head ---
# -- Head's Head --
cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(AltonMain)

# -- Options --
option (NDEBUG "Option to force disablation of debugging arguments" on)

set (TARGET_PLATFORM "" CACHE STRING "The specific target to compile for, set   \
		empty to ignore targetting")
set (SYSROOT "" CACHE PATH "The LLVM sdk path for the cross compilation target, \
		set empty to ignore")
set (LINKER "" CACHE FILE "The linker to enforce, Usually ld.lld, lld-link,     \
		ld64.lld, and wasm-ld. Set empty to ignore")

# -- Build options --
# - Debugging -
if (NDEBUG)

	set (CMAKE_BUILD_TYPE RELEASE)

else ()

	set (CMAKE_BUILD_TYPE DEBUG)

endif ()

# - Cross Compilation -
if (NOT "${TARGET_PLATFORM}" STREQUAL "")

	# Checking if the compiler isn't Clang
	if (NOT "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")

		message (FATAL_ERROR "Targetting requires Clang.")

	endif ()

	set (CMAKE_CXX_FLAGS
	   ${CMAKE_CXX_FLAGS} -target ${TARGET_PLATFORM})

	if (NOT "${SYSROOT}" STREQUAL "")

		set (CMAKE_CXX_FLAGS
		   ${CMAKE_CXX_FLAGS} -sysroot ${SYSROOT})

	endif ()

	if (NOT ${LINKER} STREQUAL "")

		set (CMAKE_CXX_FLAGS
		   ${CMAKE_CXX_FLAGS} -fuse-ld=${SYSROOT})

	endif ()

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

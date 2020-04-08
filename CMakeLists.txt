cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

# --- Head ---
# -- Head's Head --
project(AltonMain)

# -- Options --
option						(NDEBUG "Option to force disablation of debugging arguments" on)
find_package				(Python3 REQUIRED)

# -- Compile Args --
set							(PYTHON_RUNTIME				python3	-OO -u)
set							(CMAKE_CXX_FLAGS			"${CMAKE_CXX_FLAGS} -std=c++2a -Wpedantic -Werror -pthread")
set							(CMAKE_CXX_FLAGS_DEBUG		"${CMAKE_CXX_FLAGS_DEBUG}	${CMAKE_CXX_FLAGS}	-O0 -g -pg")
set							(CMAKE_CXX_FLAGS_RELEASE	"${CMAKE_CXX_FLAGS_RELEASE}	${CMAKE_CXX_FLAGS}	-Ofast")

# -- Platform dependent --
# - Windows -
if		(WIN32)
	set						(POSIX_EQUIVELANT_TOOLS_DIR ${dir}/Tools/WindowsPosixEquivelantCommands/)
	set						(TOUCH ${POSIX_EQUIVELANT_TOOLS_DIR}touch)
endif	(WIN32)

# - Unix -
if		(UNIX)
	set						(TOUCH touch)
endif	(UNIX)

# -- Build options --
if		(NDEBUG)
	set						(CMAKE_BUILD_TYPE			RELEASE)
	set						(CMAKE_CXX_FLAGS_DEBUG		"${CMAKE_CXX_FLAGS_DEBUG} -DNDEBUG=1")
else	(!NDEBUG)
	set						(CMAKE_BUILD_TYPE			DEBUG)
endif	(NDEBUG)

# -- Variables --
set							(dir			${CMAKE_HOME_DIRECTORY})
set							(SOURCE			Alton.cpp)

# --- Body ---
# -- CMake includes --
add_subdirectory			(${dir}/ETC/_Generation/
	EXCLUDE_FROM_ALL
)
add_subdirectory			(${dir}/ArgumentProcessor/
	EXCLUDE_FROM_ALL
)
add_subdirectory			(${dir}/Parser/
	EXCLUDE_FROM_ALL
)
add_subdirectory			(${dir}/Conversions/
	EXCLUDE_FROM_ALL
)
add_subdirectory			(${dir}/Clinic/
	EXCLUDE_FROM_ALL
)
add_subdirectory			(${dir}/Lexer/
	EXCLUDE_FROM_ALL
)
add_subdirectory			(${dir}/Tools/
	EXCLUDE_FROM_ALL
)

# -- Main executable --
add_executable						(Run ${SOURCE})

# -- CXX Linkings --
target_link_libraries				(Run parser_lib lexer_lib arg_lib clinic_lib convert_lib tool_lib)

# -- CXX includes --
target_include_directories			(Run PUBLIC ${dir})

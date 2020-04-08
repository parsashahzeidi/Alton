# --- Head ---
# -- Sources --
set							(TOOL_LIB_SOURCES
	${dir}/Tools/FileReader.cpp
	${dir}/Tools/TextFill.cpp
)


# --- Body ---
# -- Library targets --
add_library							(tool_lib
	STATIC EXCLUDE_FROM_ALL
	${TOOL_LIB_SOURCES}
)

# -- CXX includes --
target_include_directories			(tool_lib PUBLIC ${dir})

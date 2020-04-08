# --- Head ---
# -- Sources --
set									(ARG_LIB_SOURCES
	${dir}/ArgumentProcessor/ArgumentProcessor.cpp
	${dir}/ArgumentProcessor/ArgumentHelper.cpp
)


# --- Body ---
# -- Library targets --
add_library							(arg_lib
	STATIC EXCLUDE_FROM_ALL
	${ARG_LIB_SOURCES}
)

# -- CXX includes --
target_include_directories			(arg_lib PUBLIC ${dir})

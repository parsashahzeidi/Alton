# --- Head ---
# -- Sources --
set									(CONVERT_LIB_SOURCES
	${dir}/Conversions/StringConvert.cpp
)


# --- Body ---
# -- Library targets --
add_library							(convert_lib
	STATIC EXCLUDE_FROM_ALL
	${CONVERT_LIB_SOURCES}
)

# -- CXX includes --
target_include_directories			(convert_lib PUBLIC ${dir})

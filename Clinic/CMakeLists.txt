# --- Head ---
# -- Sources --
set									(CLINIC_LIB_SOURCES
	${dir}/Clinic/Clinic.cpp
	${dir}/Clinic/Component.cpp
)


# --- Body ---
# -- Library targets --
add_library							(clinic_lib
	STATIC EXCLUDE_FROM_ALL
	${CLINIC_LIB_SOURCES}
)

# -- Dependencies --
add_dependencies					(clinic_lib etc_headers)

# -- CXX includes --
target_include_directories			(clinic_lib PUBLIC ${dir})

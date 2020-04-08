# --- Head ---
# -- Dependencies --
set							(ETC_HEADER_DEPENDENCIES
	${dir}/ETC/_Generation/ArchitectureMacros.txt
	${dir}/ETC/_Generation/ExampleVersionData.hpp
	${dir}/ETC/_Generation/MajorVersioningNames.txt
	${dir}/ETC/_Generation/OperatingSystemMacros.txt
	${dir}/ETC/_Generation/Version.txt
	${dir}/ETC/_Generation/VersionDataHeaderGenerator.py
)


# --- Body ---
# -- PreCompile targets --
add_custom_command			(OUTPUT ${dir}/TouchFiles/etc_headers.touch
	COMMAND ${PYTHON_RUNTIME} ${dir}/ETC/_Generation/VersionDataHeaderGenerator.py 
	COMMAND ${TOUCH} ${dir}/TouchFiles/etc_headers.touch
	WORKING_DIRECTORY ${dir}
	DEPENDS
		${ETC_HEADER_DEPENDENCIES}
)
add_custom_target			(etc_headers
	DEPENDS ${dir}/TouchFiles/etc_headers.touch
)

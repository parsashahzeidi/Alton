# --- Head ---
# -- Sources --
set (AST_LIB_SOURCES
	${dir}/Parser/AST/Arguments.cpp
	${dir}/Parser/AST/BaseAST.cpp
	${dir}/Parser/AST/Configuration.cpp
	${dir}/Parser/AST/Function.cpp
	${dir}/Parser/AST/InterfaceFunction.cpp
	${dir}/Parser/AST/Location.cpp
	${dir}/Parser/AST/NamespaceInternals.cpp
	${dir}/Parser/AST/ShaderFunction.cpp
	${dir}/Parser/AST/Type.cpp
	${dir}/Parser/AST/TypeIdentifier.cpp
)

# --- Body ---
# -- Library targets --
add_library (ast_lib OBJECT
		   ${AST_LIB_SOURCES}
)

# -- CXX includes --
target_include_directories (ast_lib PUBLIC ${dir})

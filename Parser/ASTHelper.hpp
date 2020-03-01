# pragma once
# include <ETC/Macros.hpp>
# include <Types/BaseHelper.hpp>
# include <Lexer/lexem_t.hpp>
# include <Types/BaseTreeContainer.hpp>

namespace Alton
{
	namespace Parser
	{
		typedef tree_t<Lexer::lexem_t> ast_t;
		
		class ASTHelper: public BaseHelper<Lexer::lexem_t, Lexer::lxm_vec, false>
		{
			// --- Head

			// --- Body
			// --- CTOR ~ DTOR
		public:
			// CTORs
			ASTHelper() = delete;
			ASTHelper(const Lexer::lxm_vec &in):
					BaseHelper(in)
			{ }

			// DTOR
			~ASTHelper() { }
		};
	}
}
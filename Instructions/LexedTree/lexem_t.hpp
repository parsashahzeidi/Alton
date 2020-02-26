# pragma once

# include <ETC/Macros.hpp>
# include <Instructions/LexedTree/Tokens.hpp>

namespace Alton
{
	namespace Lexer
	{
		struct _lexem
		{
			token token_type = token::null_token;
			natural_num_t position_in_code = 0;
			text_t enumeration = U"";

			natural_num_t value = 0;
		};
		typedef  _lexem lexem_t;
		typedef cont_t<lexem_t> lxm_vec;
	}
}
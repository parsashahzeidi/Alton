# pragma once

# include <ETC/Macros.hpp>
# include <Lexer/Tokens.hpp>

namespace Alton
{
	namespace Lexer
	{
		struct _lexem
		{
			token token_type = token::null_token;
			natnum_t position_in_code = 0;
			text_t enumeration = U"";

			natnum_t value = 0;
		};
		typedef  _lexem lexem_t;
		typedef cont_t<lexem_t> lxm_vec;
	}
}
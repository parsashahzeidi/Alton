# pragma once

# include <ETC/Macros.hpp>
# include <ArgProcessor/arg_id.hpp>

namespace Alton
{
	namespace ArgProcessor
	{
		struct _arg
		{
			arg_id arg;
			text_t value;
		};

		typedef  _arg arg_t;
		typedef cont_t<arg_t> arg_list_t;
	}
}
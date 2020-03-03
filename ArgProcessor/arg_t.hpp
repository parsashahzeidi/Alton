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

		using arg_t = _arg;
		using arg_list_t = cont_t<arg_t>;
	}
}
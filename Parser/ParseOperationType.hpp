# pragma once

namespace Alton
{
	namespace Parser
	{
		enum ParseOperationType
		{
			error,
			reduce,
			accept,
			shift,
			go_to,
			parse_expression
		};
	} // namespace Parser
} // namespace Alton

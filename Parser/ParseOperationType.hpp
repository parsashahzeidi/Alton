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
		};
	} // namespace Parser
} // namespace Alton

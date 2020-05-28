# pragma once

# include <ETC/BareboneMacros.hpp>
# include <Parser/ParseOperationType.hpp>


namespace Alton
{
	namespace Parser
	{
		class ParseOperation
		{
			// --- Head
		public:
			ParseOperationType type = ParseOperationType::error;
			Natural result = 0;

			// --- Body
		public:
			/**
			 * BRIEF: Overrides the operation's values.
			 *
			 * PARAM: _type The operation type override.
			 * PARAM: _result The resulting state's value override.
			 */
			void override (ParseOperationType _type, Natural _result);
		};
	} // namespace Parser
} // namespace Alton

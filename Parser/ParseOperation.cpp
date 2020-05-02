# include <Parser/ParseOperation.hpp>


namespace Alton
{
	namespace Parser
	{
		void ParseOperation::override (ParseOperationType _type, Natural _result)
		{
			// --- Body ---
			type = _type;
			result = _result;
		}
	} // namespace Parser
} // namespace Alton

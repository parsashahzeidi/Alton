/** NOTE: This file is synthesized by /Path/To/Alton/Parser/_Generation/ParserGenerator.py */
# include <ETC/BareboneMacros.hpp>
# include <Parser/Parser.hpp>
# include <Parser/ParseHelper.hpp>


namespace Alton
{
	namespace Parser
	{
		Natural ParseHelper::____get_rule_size (Natural rule)
		{
			switch (rule)
			{  // First %s
			default:
				Clinic::raise_internal
				(
					Clinic::Exceptions::UnexistentSwitchCaseException (),
					__FILE__, ALTON_FUNCTION_DETECT, __LINE__
				);
				return Symbol::null_symbol;
			}
		}

		ParseOperation ParseHelper::__get_table_item (Natural state, Symbol item)
		{
			// --- Head ---
			ParseOperation operation;

			// --- Body ---
			// Second %s
			operation.override (ParseOperationType::error, 0);

			return operation;
		}

		Symbol ParseHelper::____rule_symbol (Natural rule)
		{
			// --- Body ---
			switch (rule)
			{  // Third %s
			default:
				Clinic::raise_internal
				(
					Clinic::Exceptions::UnexistentSwitchCaseException (),
					__FILE__, ALTON_FUNCTION_DETECT, __LINE__
				);
				return Symbol::null_symbol;
			}
		}
	} // namespace Parser
} // namespace Alton

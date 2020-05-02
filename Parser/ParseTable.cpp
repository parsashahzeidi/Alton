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
			{  // First 
			case 0: return 1;
			case 1: return 2;
			case 2: return 1;
			case 3: return 4;
			case 4: return 3;
			case 5: return 2;
			case 6: return 1;

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
			// Second 

			if (state == 0 && item == Symbol::identifier)
				operation.override (ParseOperationType::shift, 1); else

			if (state == 0 && item == Symbol::nterm_start)
				operation.override (ParseOperationType::go_to, 2); else

			if (state == 0 && item == Symbol::nterm_grammar_list)
				operation.override (ParseOperationType::go_to, 3); else

			if (state == 0 && item == Symbol::nterm_grammar)
				operation.override (ParseOperationType::go_to, 4); else

			if (state == 1 && item == Symbol::oper_arrow)
				operation.override (ParseOperationType::shift, 5); else

			if (state == 2 && item == Symbol::ending)
				operation.override (ParseOperationType::accept, 0); else

			if (state == 3 && item == Symbol::ending)
				operation.override (ParseOperationType::reduce, 0); else

			if (state == 4 && item == Symbol::identifier)
				operation.override (ParseOperationType::shift, 1); else

			if (state == 4 && item == Symbol::nterm_grammar_list)
				operation.override (ParseOperationType::go_to, 6); else

			if (state == 4 && item == Symbol::nterm_grammar)
				operation.override (ParseOperationType::go_to, 4); else

			if (state == 4 && item == Symbol::ending)
				operation.override (ParseOperationType::reduce, 2); else

			if (state == 5 && item == Symbol::identifier)
				operation.override (ParseOperationType::shift, 7); else

			if (state == 5 && item == Symbol::statement_end)
				operation.override (ParseOperationType::shift, 8); else

			if (state == 5 && item == Symbol::nterm_product)
				operation.override (ParseOperationType::go_to, 9); else

			if (state == 6 && item == Symbol::ending)
				operation.override (ParseOperationType::reduce, 1); else

			if (state == 7 && item == Symbol::identifier)
				operation.override (ParseOperationType::shift, 7); else

			if (state == 7 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 6); else

			if (state == 7 && item == Symbol::nterm_product)
				operation.override (ParseOperationType::go_to, 10); else

			if (state == 8 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 4); else

			if (state == 8 && item == Symbol::ending)
				operation.override (ParseOperationType::reduce, 4); else

			if (state == 9 && item == Symbol::statement_end)
				operation.override (ParseOperationType::shift, 11); else

			if (state == 10 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 5); else

			if (state == 11 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 3); else

			if (state == 11 && item == Symbol::ending)
				operation.override (ParseOperationType::reduce, 3); else

			operation.override (ParseOperationType::error, 0);

			return operation;
		}

		Symbol ParseHelper::____rule_symbol (Natural rule)
		{
			// --- Body ---
			switch (rule)
			{  // Third 
			case 0: return Symbol::nterm_start;
			case 1: return Symbol::nterm_grammar_list;
			case 2: return Symbol::nterm_grammar_list;
			case 3: return Symbol::nterm_grammar;
			case 4: return Symbol::nterm_grammar;
			case 5: return Symbol::nterm_product;
			case 6: return Symbol::nterm_product;

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

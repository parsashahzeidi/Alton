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
			case 1: return 1;
			case 2: return 2;
			case 3: return 1;
			case 4: return 1;
			case 5: return 1;
			case 6: return 4;
			case 7: return 3;
			case 8: return 1;
			case 9: return 1;
			case 10: return 3;
			case 11: return 4;
			case 12: return 3;
			case 13: return 2;
			case 14: return 1;
			case 15: return 1;
			case 16: return 2;
			case 17: return 1;
			case 18: return 1;
			case 19: return 1;
			case 20: return 1;
			case 21: return 1;
			case 22: return 3;
			case 23: return 5;
			case 24: return 5;
			case 25: return 3;
			case 26: return 1;
			case 27: return 5;
			case 28: return 5;
			case 29: return 5;
			case 30: return 5;
			case 31: return 3;
			case 32: return 3;
			case 33: return 3;
			case 34: return 1;
			case 35: return 2;
			case 36: return 2;
			case 37: return 4;
			case 38: return 3;
			case 39: return 2;
			case 40: return 3;
			case 41: return 2;
			case 42: return 1;
			case 43: return 3;
			case 44: return 1;
			case 45: return 1;
			case 46: return 1;
			case 47: return 1;
			case 48: return 1;
			case 49: return 1;
			case 50: return 2;
			case 51: return 4;
			case 52: return 3;
			case 53: return 4;
			case 54: return 1;
			case 55: return 1;
			case 56: return 1;
			case 57: return 1;
			case 58: return 1;
			case 59: return 1;
			case 60: return 1;
			case 61: return 2;
			case 62: return 1;
			case 63: return 1;
			case 64: return 1;
			case 65: return 1;
			case 66: return 1;
			case 67: return 1;
			case 68: return 1;
			case 69: return 1;
			case 70: return 1;
			case 71: return 1;
			case 72: return 1;
			case 73: return 1;
			case 74: return 3;
			case 75: return 1;
			case 76: return 3;
			case 77: return 1;
			case 78: return 3;
			case 79: return 1;
			case 80: return 3;
			case 81: return 1;

			default:
				Clinic::raise_internal
				(
					Clinic::Exceptions::UnexistentSwitchCaseException (),
					__FILE__, ALTON_FUNCTION_DETECT, __LINE__
				);
				return 0;
			}
		}

		ParseOperation ParseHelper::__get_table_item (Natural state, Symbol item)
		{
			// --- Head ---
			ParseOperation operation;

			// --- Body ---
			// Second 

			if (state == 0 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 1); else


			if (state == 0 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::shift, 2); else


			if (state == 0 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::shift, 3); else


			if (state == 0 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::shift, 4); else


			if (state == 0 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::shift, 5); else


			if (state == 0 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::shift, 6); else


			if (state == 0 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::shift, 7); else


			if (state == 0 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::shift, 8); else


			if (state == 0 && item == Symbol::keyword_else)
				operation.override (ParseOperationType::go_to, 11); else


			if (state == 0 && item == Symbol::nterm_start)
				operation.override (ParseOperationType::go_to, 9); else


			if (state == 0 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 10); else


			if (state == 0 && item == Symbol::nterm_module_space)
				operation.override (ParseOperationType::go_to, 12); else


			if (state == 0 && item == Symbol::nterm_module_item)
				operation.override (ParseOperationType::go_to, 13); else


			if (state == 0 && item == Symbol::nterm_module)
				operation.override (ParseOperationType::go_to, 14); else


			if (state == 0 && item == Symbol::nterm_function)
				operation.override (ParseOperationType::go_to, 15); else


			if (state == 0 && item == Symbol::nterm_interface)
				operation.override (ParseOperationType::go_to, 16); else


			if (state == 0 && item == Symbol::nterm_shader)
				operation.override (ParseOperationType::go_to, 18); else


			if (state == 0 && item == Symbol::nterm_item)
				operation.override (ParseOperationType::go_to, 17); else


			if (state == 0 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 21); else


			if (state == 0 && item == Symbol::nterm_sid_union)
				operation.override (ParseOperationType::go_to, 19); else


			if (state == 0 && item == Symbol::nterm_def_union)
				operation.override (ParseOperationType::go_to, 20); else


			if (state == 1 && item == Symbol::rparen)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 1 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 1 && item == Symbol::oper_union)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 2 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 63); else


			if (state == 3 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 64); else


			if (state == 4 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 66); else


			if (state == 5 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 65); else


			if (state == 6 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 67); else


			if (state == 7 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 68); else


			if (state == 8 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 22); else


			if (state == 8 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::shift, 2); else


			if (state == 8 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::shift, 3); else


			if (state == 8 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::shift, 4); else


			if (state == 8 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::shift, 5); else


			if (state == 8 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::shift, 6); else


			if (state == 8 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::shift, 7); else


			if (state == 8 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 23); else


			if (state == 8 && item == Symbol::nterm_shader)
				operation.override (ParseOperationType::go_to, 24); else


			if (state == 8 && item == Symbol::nterm_item)
				operation.override (ParseOperationType::go_to, 17); else


			if (state == 8 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 21); else


			if (state == 8 && item == Symbol::nterm_sid_union)
				operation.override (ParseOperationType::go_to, 19); else


			if (state == 8 && item == Symbol::nterm_def_union)
				operation.override (ParseOperationType::go_to, 20); else


			if (state == 9 && item == Symbol::nterm_location)
				operation.override (ParseOperationType::accept, 0); else


			if (state == 10 && item == Symbol::rparen)
				operation.override (ParseOperationType::shift, 25); else


			if (state == 10 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 10 && item == Symbol::oper_union)
				operation.override (ParseOperationType::shift, 26); else


			if (state == 11 && item == Symbol::nterm_location)
				operation.override (ParseOperationType::reduce, 0); else


			if (state == 12 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 1); else


			if (state == 12 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::shift, 2); else


			if (state == 12 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::shift, 3); else


			if (state == 12 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::shift, 4); else


			if (state == 12 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::shift, 5); else


			if (state == 12 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::shift, 6); else


			if (state == 12 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::shift, 7); else


			if (state == 12 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::shift, 8); else


			if (state == 12 && item == Symbol::keyword_else)
				operation.override (ParseOperationType::go_to, 27); else


			if (state == 12 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 10); else


			if (state == 12 && item == Symbol::nterm_module_space)
				operation.override (ParseOperationType::go_to, 12); else


			if (state == 12 && item == Symbol::nterm_module_item)
				operation.override (ParseOperationType::go_to, 13); else


			if (state == 12 && item == Symbol::nterm_module)
				operation.override (ParseOperationType::go_to, 14); else


			if (state == 12 && item == Symbol::nterm_function)
				operation.override (ParseOperationType::go_to, 15); else


			if (state == 12 && item == Symbol::nterm_interface)
				operation.override (ParseOperationType::go_to, 16); else


			if (state == 12 && item == Symbol::nterm_shader)
				operation.override (ParseOperationType::go_to, 18); else


			if (state == 12 && item == Symbol::nterm_item)
				operation.override (ParseOperationType::go_to, 17); else


			if (state == 12 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 21); else


			if (state == 12 && item == Symbol::nterm_sid_union)
				operation.override (ParseOperationType::go_to, 19); else


			if (state == 12 && item == Symbol::nterm_def_union)
				operation.override (ParseOperationType::go_to, 20); else


			if (state == 12 && item == Symbol::nterm_location)
				operation.override (ParseOperationType::reduce, 3); else


			if (state == 13 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 4); else


			if (state == 13 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 4); else


			if (state == 13 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 4); else


			if (state == 13 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 4); else


			if (state == 13 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 4); else


			if (state == 13 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 4); else


			if (state == 13 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 4); else


			if (state == 13 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::reduce, 4); else


			if (state == 13 && item == Symbol::nterm_location)
				operation.override (ParseOperationType::reduce, 4); else


			if (state == 14 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 5); else


			if (state == 14 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 5); else


			if (state == 14 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 5); else


			if (state == 14 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 5); else


			if (state == 14 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 5); else


			if (state == 14 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 5); else


			if (state == 14 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 5); else


			if (state == 14 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::reduce, 5); else


			if (state == 14 && item == Symbol::nterm_location)
				operation.override (ParseOperationType::reduce, 5); else


			if (state == 15 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 8); else


			if (state == 15 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 8); else


			if (state == 15 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 8); else


			if (state == 15 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 8); else


			if (state == 15 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 8); else


			if (state == 15 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 8); else


			if (state == 15 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 8); else


			if (state == 15 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::reduce, 8); else


			if (state == 15 && item == Symbol::nterm_location)
				operation.override (ParseOperationType::reduce, 8); else


			if (state == 16 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 9); else


			if (state == 16 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 9); else


			if (state == 16 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 9); else


			if (state == 16 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 9); else


			if (state == 16 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 9); else


			if (state == 16 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 9); else


			if (state == 16 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 9); else


			if (state == 16 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::reduce, 9); else


			if (state == 16 && item == Symbol::nterm_location)
				operation.override (ParseOperationType::reduce, 9); else


			if (state == 17 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 28); else


			if (state == 17 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 29); else


			if (state == 18 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 30); else


			if (state == 18 && item == Symbol::nterm_code)
				operation.override (ParseOperationType::go_to, 31); else


			if (state == 19 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 59); else


			if (state == 20 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 60); else


			if (state == 21 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 62); else


			if (state == 22 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 22 && item == Symbol::oper_union)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 23 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 23 && item == Symbol::oper_union)
				operation.override (ParseOperationType::shift, 26); else


			if (state == 24 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 30); else


			if (state == 24 && item == Symbol::nterm_code)
				operation.override (ParseOperationType::go_to, 32); else


			if (state == 25 && item == Symbol::lscope)
				operation.override (ParseOperationType::shift, 33); else


			if (state == 25 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 1); else


			if (state == 25 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::shift, 2); else


			if (state == 25 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::shift, 3); else


			if (state == 25 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::shift, 4); else


			if (state == 25 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::shift, 5); else


			if (state == 25 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::shift, 6); else


			if (state == 25 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::shift, 7); else


			if (state == 25 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::shift, 34); else


			if (state == 25 && item == Symbol::keyword_else)
				operation.override (ParseOperationType::go_to, 36); else


			if (state == 25 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 35); else


			if (state == 25 && item == Symbol::nterm_module_space)
				operation.override (ParseOperationType::go_to, 37); else


			if (state == 25 && item == Symbol::nterm_module_item)
				operation.override (ParseOperationType::go_to, 38); else


			if (state == 25 && item == Symbol::nterm_module)
				operation.override (ParseOperationType::go_to, 39); else


			if (state == 25 && item == Symbol::nterm_function)
				operation.override (ParseOperationType::go_to, 40); else


			if (state == 25 && item == Symbol::nterm_interface)
				operation.override (ParseOperationType::go_to, 41); else


			if (state == 25 && item == Symbol::nterm_shader)
				operation.override (ParseOperationType::go_to, 42); else


			if (state == 25 && item == Symbol::nterm_item)
				operation.override (ParseOperationType::go_to, 17); else


			if (state == 25 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 21); else


			if (state == 25 && item == Symbol::nterm_sid_union)
				operation.override (ParseOperationType::go_to, 19); else


			if (state == 25 && item == Symbol::nterm_def_union)
				operation.override (ParseOperationType::go_to, 20); else


			if (state == 26 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 22); else


			if (state == 26 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 23); else


			if (state == 26 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 43); else


			if (state == 27 && item == Symbol::nterm_location)
				operation.override (ParseOperationType::reduce, 2); else


			if (state == 28 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 29 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 61); else


			if (state == 30 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 44); else


			if (state == 30 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 22); else


			if (state == 30 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::shift, 2); else


			if (state == 30 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::shift, 3); else


			if (state == 30 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::shift, 4); else


			if (state == 30 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::shift, 5); else


			if (state == 30 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::shift, 6); else


			if (state == 30 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::shift, 7); else


			if (state == 30 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 23); else


			if (state == 30 && item == Symbol::nterm_shader)
				operation.override (ParseOperationType::go_to, 46); else


			if (state == 30 && item == Symbol::nterm_item)
				operation.override (ParseOperationType::go_to, 45); else


			if (state == 30 && item == Symbol::nterm_array)
				operation.override (ParseOperationType::go_to, 47); else


			if (state == 30 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 21); else


			if (state == 30 && item == Symbol::nterm_sid_union)
				operation.override (ParseOperationType::go_to, 19); else


			if (state == 30 && item == Symbol::nterm_def_union)
				operation.override (ParseOperationType::go_to, 20); else


			if (state == 31 && item == Symbol::rparen)
				operation.override (ParseOperationType::shift, 48); else


			if (state == 31 && item == Symbol::nterm_reg_if_tail)
				operation.override (ParseOperationType::go_to, 49); else


			if (state == 32 && item == Symbol::rparen)
				operation.override (ParseOperationType::shift, 48); else


			if (state == 32 && item == Symbol::nterm_reg_if_tail)
				operation.override (ParseOperationType::go_to, 50); else


			if (state == 33 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 7); else


			if (state == 33 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 7); else


			if (state == 33 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 7); else


			if (state == 33 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 7); else


			if (state == 33 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 7); else


			if (state == 33 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 7); else


			if (state == 33 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 7); else


			if (state == 33 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::reduce, 7); else


			if (state == 33 && item == Symbol::nterm_location)
				operation.override (ParseOperationType::reduce, 7); else


			if (state == 34 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 22); else


			if (state == 34 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::shift, 2); else


			if (state == 34 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::shift, 3); else


			if (state == 34 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::shift, 4); else


			if (state == 34 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::shift, 5); else


			if (state == 34 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::shift, 6); else


			if (state == 34 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::shift, 7); else


			if (state == 34 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 23); else


			if (state == 34 && item == Symbol::nterm_shader)
				operation.override (ParseOperationType::go_to, 51); else


			if (state == 34 && item == Symbol::nterm_item)
				operation.override (ParseOperationType::go_to, 17); else


			if (state == 34 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 21); else


			if (state == 34 && item == Symbol::nterm_sid_union)
				operation.override (ParseOperationType::go_to, 19); else


			if (state == 34 && item == Symbol::nterm_def_union)
				operation.override (ParseOperationType::go_to, 20); else


			if (state == 35 && item == Symbol::rparen)
				operation.override (ParseOperationType::shift, 52); else


			if (state == 35 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 35 && item == Symbol::oper_union)
				operation.override (ParseOperationType::shift, 26); else


			if (state == 36 && item == Symbol::lscope)
				operation.override (ParseOperationType::shift, 53); else


			if (state == 37 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 3); else


			if (state == 37 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 1); else


			if (state == 37 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::shift, 2); else


			if (state == 37 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::shift, 3); else


			if (state == 37 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::shift, 4); else


			if (state == 37 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::shift, 5); else


			if (state == 37 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::shift, 6); else


			if (state == 37 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::shift, 7); else


			if (state == 37 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::shift, 34); else


			if (state == 37 && item == Symbol::keyword_else)
				operation.override (ParseOperationType::go_to, 54); else


			if (state == 37 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 35); else


			if (state == 37 && item == Symbol::nterm_module_space)
				operation.override (ParseOperationType::go_to, 37); else


			if (state == 37 && item == Symbol::nterm_module_item)
				operation.override (ParseOperationType::go_to, 38); else


			if (state == 37 && item == Symbol::nterm_module)
				operation.override (ParseOperationType::go_to, 39); else


			if (state == 37 && item == Symbol::nterm_function)
				operation.override (ParseOperationType::go_to, 40); else


			if (state == 37 && item == Symbol::nterm_interface)
				operation.override (ParseOperationType::go_to, 41); else


			if (state == 37 && item == Symbol::nterm_shader)
				operation.override (ParseOperationType::go_to, 42); else


			if (state == 37 && item == Symbol::nterm_item)
				operation.override (ParseOperationType::go_to, 17); else


			if (state == 37 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 21); else


			if (state == 37 && item == Symbol::nterm_sid_union)
				operation.override (ParseOperationType::go_to, 19); else


			if (state == 37 && item == Symbol::nterm_def_union)
				operation.override (ParseOperationType::go_to, 20); else


			if (state == 38 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 4); else


			if (state == 38 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 4); else


			if (state == 38 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 4); else


			if (state == 38 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 4); else


			if (state == 38 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 4); else


			if (state == 38 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 4); else


			if (state == 38 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 4); else


			if (state == 38 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 4); else


			if (state == 38 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::reduce, 4); else


			if (state == 39 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 5); else


			if (state == 39 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 5); else


			if (state == 39 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 5); else


			if (state == 39 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 5); else


			if (state == 39 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 5); else


			if (state == 39 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 5); else


			if (state == 39 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 5); else


			if (state == 39 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 5); else


			if (state == 39 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::reduce, 5); else


			if (state == 40 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 8); else


			if (state == 40 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 8); else


			if (state == 40 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 8); else


			if (state == 40 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 8); else


			if (state == 40 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 8); else


			if (state == 40 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 8); else


			if (state == 40 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 8); else


			if (state == 40 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 8); else


			if (state == 40 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::reduce, 8); else


			if (state == 41 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 9); else


			if (state == 41 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 9); else


			if (state == 41 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 9); else


			if (state == 41 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 9); else


			if (state == 41 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 9); else


			if (state == 41 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 9); else


			if (state == 41 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 9); else


			if (state == 41 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 9); else


			if (state == 41 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::reduce, 9); else


			if (state == 42 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 30); else


			if (state == 42 && item == Symbol::nterm_code)
				operation.override (ParseOperationType::go_to, 55); else


			if (state == 43 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 44 && item == Symbol::rparen)
				operation.override (ParseOperationType::reduce, 39); else


			if (state == 45 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 56); else


			if (state == 45 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 57); else


			if (state == 46 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 79); else


			if (state == 46 && item == Symbol::statement_end)
				operation.override (ParseOperationType::shift, 58); else


			if (state == 47 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 59); else


			if (state == 48 && item == Symbol::lscope)
				operation.override (ParseOperationType::shift, 60); else


			if (state == 48 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::shift, 61); else


			if (state == 48 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::shift, 62); else


			if (state == 48 && item == Symbol::nterm_statement_list)
				operation.override (ParseOperationType::go_to, 63); else


			if (state == 48 && item == Symbol::nterm_just_if)
				operation.override (ParseOperationType::go_to, 64); else


			if (state == 48 && item == Symbol::nterm_if_else)
				operation.override (ParseOperationType::go_to, 65); else


			if (state == 48 && item == Symbol::nterm_open_while)
				operation.override (ParseOperationType::go_to, 66); else


			if (state == 48 && item == Symbol::nterm_closed_while)
				operation.override (ParseOperationType::go_to, 67); else


			if (state == 48 && item == Symbol::nterm_while_statement)
				operation.override (ParseOperationType::go_to, 68); else


			if (state == 48 && item == Symbol::nterm_vardef)
				operation.override (ParseOperationType::go_to, 69); else


			if (state == 49 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 10); else


			if (state == 49 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 10); else


			if (state == 49 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 10); else


			if (state == 49 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 10); else


			if (state == 49 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 10); else


			if (state == 49 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 10); else


			if (state == 49 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 10); else


			if (state == 49 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::reduce, 10); else


			if (state == 49 && item == Symbol::nterm_location)
				operation.override (ParseOperationType::reduce, 10); else


			if (state == 50 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 11); else


			if (state == 50 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 11); else


			if (state == 50 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 11); else


			if (state == 50 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 11); else


			if (state == 50 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 11); else


			if (state == 50 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 11); else


			if (state == 50 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 11); else


			if (state == 50 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::reduce, 11); else


			if (state == 50 && item == Symbol::nterm_location)
				operation.override (ParseOperationType::reduce, 11); else


			if (state == 51 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 30); else


			if (state == 51 && item == Symbol::nterm_code)
				operation.override (ParseOperationType::go_to, 70); else


			if (state == 52 && item == Symbol::lscope)
				operation.override (ParseOperationType::shift, 71); else


			if (state == 52 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 1); else


			if (state == 52 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::shift, 2); else


			if (state == 52 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::shift, 3); else


			if (state == 52 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::shift, 4); else


			if (state == 52 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::shift, 5); else


			if (state == 52 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::shift, 6); else


			if (state == 52 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::shift, 7); else


			if (state == 52 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::shift, 34); else


			if (state == 52 && item == Symbol::keyword_else)
				operation.override (ParseOperationType::go_to, 72); else


			if (state == 52 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 35); else


			if (state == 52 && item == Symbol::nterm_module_space)
				operation.override (ParseOperationType::go_to, 37); else


			if (state == 52 && item == Symbol::nterm_module_item)
				operation.override (ParseOperationType::go_to, 38); else


			if (state == 52 && item == Symbol::nterm_module)
				operation.override (ParseOperationType::go_to, 39); else


			if (state == 52 && item == Symbol::nterm_function)
				operation.override (ParseOperationType::go_to, 40); else


			if (state == 52 && item == Symbol::nterm_interface)
				operation.override (ParseOperationType::go_to, 41); else


			if (state == 52 && item == Symbol::nterm_shader)
				operation.override (ParseOperationType::go_to, 42); else


			if (state == 52 && item == Symbol::nterm_item)
				operation.override (ParseOperationType::go_to, 17); else


			if (state == 52 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 21); else


			if (state == 52 && item == Symbol::nterm_sid_union)
				operation.override (ParseOperationType::go_to, 19); else


			if (state == 52 && item == Symbol::nterm_def_union)
				operation.override (ParseOperationType::go_to, 20); else


			if (state == 53 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 6); else


			if (state == 53 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 6); else


			if (state == 53 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 6); else


			if (state == 53 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 6); else


			if (state == 53 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 6); else


			if (state == 53 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 6); else


			if (state == 53 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 6); else


			if (state == 53 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::reduce, 6); else


			if (state == 53 && item == Symbol::nterm_location)
				operation.override (ParseOperationType::reduce, 6); else


			if (state == 54 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 2); else


			if (state == 55 && item == Symbol::rparen)
				operation.override (ParseOperationType::shift, 73); else


			if (state == 55 && item == Symbol::nterm_reg_if_tail)
				operation.override (ParseOperationType::go_to, 74); else


			if (state == 56 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 56 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 57 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 61); else


			if (state == 57 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 61); else


			if (state == 58 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 22); else


			if (state == 58 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::shift, 2); else


			if (state == 58 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::shift, 3); else


			if (state == 58 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::shift, 4); else


			if (state == 58 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::shift, 5); else


			if (state == 58 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::shift, 6); else


			if (state == 58 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::shift, 7); else


			if (state == 58 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 23); else


			if (state == 58 && item == Symbol::nterm_shader)
				operation.override (ParseOperationType::go_to, 46); else


			if (state == 58 && item == Symbol::nterm_item)
				operation.override (ParseOperationType::go_to, 45); else


			if (state == 58 && item == Symbol::nterm_array)
				operation.override (ParseOperationType::go_to, 75); else


			if (state == 58 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 21); else


			if (state == 58 && item == Symbol::nterm_sid_union)
				operation.override (ParseOperationType::go_to, 19); else


			if (state == 58 && item == Symbol::nterm_def_union)
				operation.override (ParseOperationType::go_to, 20); else


			if (state == 59 && item == Symbol::rparen)
				operation.override (ParseOperationType::reduce, 38); else


			if (state == 60 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 60 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 60 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 60 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 60 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 60 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 60 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 60 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 60 && item == Symbol::nterm_location)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 61 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 76); else


			if (state == 61 && item == Symbol::nterm_non_scoped_statement)
				operation.override (ParseOperationType::go_to, 77); else


			if (state == 61 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 78); else


			if (state == 62 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 79); else


			if (state == 62 && item == Symbol::nterm_non_scoped_statement)
				operation.override (ParseOperationType::go_to, 80); else


			if (state == 62 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 81); else


			if (state == 63 && item == Symbol::lscope)
				operation.override (ParseOperationType::shift, 82); else


			if (state == 64 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 17); else


			if (state == 64 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::shift, 61); else


			if (state == 64 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::shift, 62); else


			if (state == 64 && item == Symbol::nterm_statement_list)
				operation.override (ParseOperationType::go_to, 83); else


			if (state == 64 && item == Symbol::nterm_just_if)
				operation.override (ParseOperationType::go_to, 64); else


			if (state == 64 && item == Symbol::nterm_if_else)
				operation.override (ParseOperationType::go_to, 65); else


			if (state == 64 && item == Symbol::nterm_open_while)
				operation.override (ParseOperationType::go_to, 66); else


			if (state == 64 && item == Symbol::nterm_closed_while)
				operation.override (ParseOperationType::go_to, 67); else


			if (state == 64 && item == Symbol::nterm_while_statement)
				operation.override (ParseOperationType::go_to, 68); else


			if (state == 64 && item == Symbol::nterm_vardef)
				operation.override (ParseOperationType::go_to, 69); else


			if (state == 65 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 18); else


			if (state == 65 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 18); else


			if (state == 65 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 18); else


			if (state == 66 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 19); else


			if (state == 66 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 19); else


			if (state == 66 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 19); else


			if (state == 67 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 20); else


			if (state == 67 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 20); else


			if (state == 67 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 20); else


			if (state == 68 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 21); else


			if (state == 68 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 21); else


			if (state == 68 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 21); else


			if (state == 69 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 26); else


			if (state == 69 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 26); else


			if (state == 69 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 26); else


			if (state == 70 && item == Symbol::rparen)
				operation.override (ParseOperationType::shift, 73); else


			if (state == 70 && item == Symbol::nterm_reg_if_tail)
				operation.override (ParseOperationType::go_to, 84); else


			if (state == 71 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 7); else


			if (state == 71 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 7); else


			if (state == 71 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 7); else


			if (state == 71 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 7); else


			if (state == 71 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 7); else


			if (state == 71 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 7); else


			if (state == 71 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 7); else


			if (state == 71 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 7); else


			if (state == 71 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::reduce, 7); else


			if (state == 72 && item == Symbol::lscope)
				operation.override (ParseOperationType::shift, 85); else


			if (state == 73 && item == Symbol::lscope)
				operation.override (ParseOperationType::shift, 86); else


			if (state == 73 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::shift, 61); else


			if (state == 73 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::shift, 62); else


			if (state == 73 && item == Symbol::nterm_statement_list)
				operation.override (ParseOperationType::go_to, 87); else


			if (state == 73 && item == Symbol::nterm_just_if)
				operation.override (ParseOperationType::go_to, 64); else


			if (state == 73 && item == Symbol::nterm_if_else)
				operation.override (ParseOperationType::go_to, 65); else


			if (state == 73 && item == Symbol::nterm_open_while)
				operation.override (ParseOperationType::go_to, 66); else


			if (state == 73 && item == Symbol::nterm_closed_while)
				operation.override (ParseOperationType::go_to, 67); else


			if (state == 73 && item == Symbol::nterm_while_statement)
				operation.override (ParseOperationType::go_to, 68); else


			if (state == 73 && item == Symbol::nterm_vardef)
				operation.override (ParseOperationType::go_to, 69); else


			if (state == 74 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 10); else


			if (state == 74 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 10); else


			if (state == 74 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 10); else


			if (state == 74 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 10); else


			if (state == 74 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 10); else


			if (state == 74 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 10); else


			if (state == 74 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 10); else


			if (state == 74 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 10); else


			if (state == 74 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::reduce, 10); else


			if (state == 75 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 78); else


			if (state == 76 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 88); else


			if (state == 76 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 89); else


			if (state == 76 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 90); else


			if (state == 76 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 91); else


			if (state == 76 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 92); else


			if (state == 76 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 93); else


			if (state == 76 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 94); else


			if (state == 76 && item == Symbol::oper_assign)
				operation.override (ParseOperationType::shift, 95); else


			if (state == 76 && item == Symbol::oper_plus)
				operation.override (ParseOperationType::shift, 96); else


			if (state == 76 && item == Symbol::oper_minus)
				operation.override (ParseOperationType::shift, 97); else


			if (state == 76 && item == Symbol::oper_star)
				operation.override (ParseOperationType::shift, 98); else


			if (state == 76 && item == Symbol::oper_less_than)
				operation.override (ParseOperationType::shift, 99); else


			if (state == 76 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 100); else


			if (state == 76 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 101); else


			if (state == 76 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 105); else


			if (state == 76 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 102); else


			if (state == 76 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 103); else


			if (state == 76 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 104); else


			if (state == 76 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 106); else


			if (state == 76 && item == Symbol::nterm_any_operator)
				operation.override (ParseOperationType::go_to, 107); else


			if (state == 76 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 108); else


			if (state == 77 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::shift, 61); else


			if (state == 77 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::shift, 62); else


			if (state == 77 && item == Symbol::nterm_open_while)
				operation.override (ParseOperationType::go_to, 109); else


			if (state == 77 && item == Symbol::nterm_closed_while)
				operation.override (ParseOperationType::go_to, 110); else


			if (state == 77 && item == Symbol::nterm_while_statement)
				operation.override (ParseOperationType::go_to, 68); else


			if (state == 77 && item == Symbol::nterm_vardef)
				operation.override (ParseOperationType::go_to, 69); else


			if (state == 78 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 44); else


			if (state == 78 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 44); else


			if (state == 79 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 88); else


			if (state == 79 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 89); else


			if (state == 79 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 90); else


			if (state == 79 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 91); else


			if (state == 79 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 92); else


			if (state == 79 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 93); else


			if (state == 79 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 94); else


			if (state == 79 && item == Symbol::oper_assign)
				operation.override (ParseOperationType::shift, 95); else


			if (state == 79 && item == Symbol::oper_plus)
				operation.override (ParseOperationType::shift, 96); else


			if (state == 79 && item == Symbol::oper_minus)
				operation.override (ParseOperationType::shift, 97); else


			if (state == 79 && item == Symbol::oper_star)
				operation.override (ParseOperationType::shift, 98); else


			if (state == 79 && item == Symbol::oper_less_than)
				operation.override (ParseOperationType::shift, 99); else


			if (state == 79 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 100); else


			if (state == 79 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 111); else


			if (state == 79 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 105); else


			if (state == 79 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 102); else


			if (state == 79 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 103); else


			if (state == 79 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 104); else


			if (state == 79 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 106); else


			if (state == 79 && item == Symbol::nterm_any_operator)
				operation.override (ParseOperationType::go_to, 112); else


			if (state == 79 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 108); else


			if (state == 80 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 113); else


			if (state == 80 && item == Symbol::rparen)
				operation.override (ParseOperationType::shift, 114); else


			if (state == 80 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 115); else


			if (state == 80 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 116); else


			if (state == 80 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 117); else


			if (state == 80 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 118); else


			if (state == 80 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 119); else


			if (state == 80 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 120); else


			if (state == 80 && item == Symbol::identifier)
				operation.override (ParseOperationType::shift, 121); else


			if (state == 80 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::shift, 2); else


			if (state == 80 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::shift, 3); else


			if (state == 80 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::shift, 4); else


			if (state == 80 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::shift, 5); else


			if (state == 80 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::shift, 6); else


			if (state == 80 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::shift, 7); else


			if (state == 80 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::shift, 122); else


			if (state == 80 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::shift, 123); else


			if (state == 80 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 124); else


			if (state == 80 && item == Symbol::nterm_reg_if_tail)
				operation.override (ParseOperationType::go_to, 125); else


			if (state == 80 && item == Symbol::nterm_statement)
				operation.override (ParseOperationType::go_to, 126); else


			if (state == 80 && item == Symbol::nterm_if_statement)
				operation.override (ParseOperationType::go_to, 130); else


			if (state == 80 && item == Symbol::nterm_open_while)
				operation.override (ParseOperationType::go_to, 127); else


			if (state == 80 && item == Symbol::nterm_closed_while)
				operation.override (ParseOperationType::go_to, 128); else


			if (state == 80 && item == Symbol::nterm_while_statement)
				operation.override (ParseOperationType::go_to, 68); else


			if (state == 80 && item == Symbol::nterm_vardef)
				operation.override (ParseOperationType::go_to, 129); else


			if (state == 80 && item == Symbol::nterm_call_args)
				operation.override (ParseOperationType::go_to, 131); else


			if (state == 80 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 132); else


			if (state == 80 && item == Symbol::nterm_item)
				operation.override (ParseOperationType::go_to, 138); else


			if (state == 80 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 136); else


			if (state == 80 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 133); else


			if (state == 80 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 134); else


			if (state == 80 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 135); else


			if (state == 80 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 137); else


			if (state == 80 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 139); else


			if (state == 80 && item == Symbol::nterm_sid_union)
				operation.override (ParseOperationType::go_to, 19); else


			if (state == 80 && item == Symbol::nterm_def_union)
				operation.override (ParseOperationType::go_to, 20); else


			if (state == 81 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 44); else


			if (state == 81 && item == Symbol::rparen)
				operation.override (ParseOperationType::reduce, 44); else


			if (state == 81 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 44); else


			if (state == 81 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::reduce, 44); else


			if (state == 81 && item == Symbol::constant_number)
				operation.override (ParseOperationType::reduce, 44); else


			if (state == 81 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::reduce, 44); else


			if (state == 81 && item == Symbol::constant_float)
				operation.override (ParseOperationType::reduce, 44); else


			if (state == 81 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 44); else


			if (state == 81 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 44); else


			if (state == 81 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 44); else


			if (state == 81 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 44); else


			if (state == 81 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 44); else


			if (state == 81 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 44); else


			if (state == 81 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 44); else


			if (state == 81 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 44); else


			if (state == 81 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 44); else


			if (state == 81 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 44); else


			if (state == 82 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 82 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 82 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 82 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 82 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 82 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 82 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 82 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 82 && item == Symbol::nterm_location)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 83 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 16); else


			if (state == 84 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 11); else


			if (state == 84 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 11); else


			if (state == 84 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 11); else


			if (state == 84 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 11); else


			if (state == 84 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 11); else


			if (state == 84 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 11); else


			if (state == 84 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 11); else


			if (state == 84 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 11); else


			if (state == 84 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::reduce, 11); else


			if (state == 85 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 6); else


			if (state == 85 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 6); else


			if (state == 85 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 6); else


			if (state == 85 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 6); else


			if (state == 85 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 6); else


			if (state == 85 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 6); else


			if (state == 85 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 6); else


			if (state == 85 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 6); else


			if (state == 85 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::reduce, 6); else


			if (state == 86 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 86 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 86 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 86 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 86 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 86 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 86 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 86 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 86 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 87 && item == Symbol::lscope)
				operation.override (ParseOperationType::shift, 140); else


			if (state == 88 && item == Symbol::oper_assign)
				operation.override (ParseOperationType::shift, 95); else


			if (state == 88 && item == Symbol::oper_plus)
				operation.override (ParseOperationType::shift, 96); else


			if (state == 88 && item == Symbol::oper_minus)
				operation.override (ParseOperationType::shift, 97); else


			if (state == 88 && item == Symbol::oper_star)
				operation.override (ParseOperationType::shift, 98); else


			if (state == 88 && item == Symbol::oper_less_than)
				operation.override (ParseOperationType::shift, 99); else


			if (state == 88 && item == Symbol::nterm_any_operator)
				operation.override (ParseOperationType::go_to, 141); else


			if (state == 89 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 142); else


			if (state == 89 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 143); else


			if (state == 89 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 144); else


			if (state == 89 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 145); else


			if (state == 89 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 146); else


			if (state == 89 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 147); else


			if (state == 89 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 148); else


			if (state == 89 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 149); else


			if (state == 89 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 150); else


			if (state == 89 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 156); else


			if (state == 89 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 154); else


			if (state == 89 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 151); else


			if (state == 89 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 152); else


			if (state == 89 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 153); else


			if (state == 89 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 155); else


			if (state == 89 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 157); else


			if (state == 90 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 90 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 90 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 91 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 91 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 91 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 92 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 92 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 92 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 93 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 93 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 93 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 94 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 94 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 94 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 94 && item == Symbol::oper_union)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 95 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 69); else


			if (state == 95 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 69); else


			if (state == 95 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::reduce, 69); else


			if (state == 95 && item == Symbol::constant_number)
				operation.override (ParseOperationType::reduce, 69); else


			if (state == 95 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::reduce, 69); else


			if (state == 95 && item == Symbol::constant_float)
				operation.override (ParseOperationType::reduce, 69); else


			if (state == 95 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 69); else


			if (state == 96 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 71); else


			if (state == 96 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 71); else


			if (state == 96 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::reduce, 71); else


			if (state == 96 && item == Symbol::constant_number)
				operation.override (ParseOperationType::reduce, 71); else


			if (state == 96 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::reduce, 71); else


			if (state == 96 && item == Symbol::constant_float)
				operation.override (ParseOperationType::reduce, 71); else


			if (state == 96 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 71); else


			if (state == 97 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 70); else


			if (state == 97 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 70); else


			if (state == 97 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::reduce, 70); else


			if (state == 97 && item == Symbol::constant_number)
				operation.override (ParseOperationType::reduce, 70); else


			if (state == 97 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::reduce, 70); else


			if (state == 97 && item == Symbol::constant_float)
				operation.override (ParseOperationType::reduce, 70); else


			if (state == 97 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 70); else


			if (state == 98 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 72); else


			if (state == 98 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 72); else


			if (state == 98 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::reduce, 72); else


			if (state == 98 && item == Symbol::constant_number)
				operation.override (ParseOperationType::reduce, 72); else


			if (state == 98 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::reduce, 72); else


			if (state == 98 && item == Symbol::constant_float)
				operation.override (ParseOperationType::reduce, 72); else


			if (state == 98 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 72); else


			if (state == 99 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 73); else


			if (state == 99 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 73); else


			if (state == 99 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::reduce, 73); else


			if (state == 99 && item == Symbol::constant_number)
				operation.override (ParseOperationType::reduce, 73); else


			if (state == 99 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::reduce, 73); else


			if (state == 99 && item == Symbol::constant_float)
				operation.override (ParseOperationType::reduce, 73); else


			if (state == 99 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 73); else


			if (state == 100 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 100 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 100 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 100 && item == Symbol::oper_union)
				operation.override (ParseOperationType::shift, 158); else


			if (state == 101 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 159); else


			if (state == 101 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 160); else


			if (state == 101 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 161); else


			if (state == 101 && item == Symbol::nterm_paren_oper)
				operation.override (ParseOperationType::go_to, 162); else


			if (state == 101 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 163); else


			if (state == 102 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 102 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 102 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 103 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 103 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 103 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 104 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 104 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 104 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 105 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 105 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 105 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 106 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 106 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 106 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 107 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 164); else


			if (state == 107 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 165); else


			if (state == 107 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 166); else


			if (state == 107 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 167); else


			if (state == 107 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 168); else


			if (state == 107 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 169); else


			if (state == 107 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 170); else


			if (state == 107 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 171); else


			if (state == 107 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 172); else


			if (state == 107 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 178); else


			if (state == 107 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 176); else


			if (state == 107 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 173); else


			if (state == 107 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 174); else


			if (state == 107 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 175); else


			if (state == 107 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 177); else


			if (state == 107 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 179); else


			if (state == 108 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 108 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 108 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 109 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 31); else


			if (state == 109 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 31); else


			if (state == 109 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 31); else


			if (state == 110 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 32); else


			if (state == 110 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 32); else


			if (state == 110 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 32); else


			if (state == 111 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 159); else


			if (state == 111 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 180); else


			if (state == 111 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 161); else


			if (state == 111 && item == Symbol::nterm_paren_oper)
				operation.override (ParseOperationType::go_to, 162); else


			if (state == 111 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 163); else


			if (state == 112 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 164); else


			if (state == 112 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 165); else


			if (state == 112 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 166); else


			if (state == 112 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 167); else


			if (state == 112 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 168); else


			if (state == 112 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 169); else


			if (state == 112 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 170); else


			if (state == 112 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 171); else


			if (state == 112 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 172); else


			if (state == 112 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 181); else


			if (state == 112 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 176); else


			if (state == 112 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 173); else


			if (state == 112 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 174); else


			if (state == 112 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 175); else


			if (state == 112 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 177); else


			if (state == 112 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 179); else


			if (state == 113 && item == Symbol::oper_assign)
				operation.override (ParseOperationType::shift, 95); else


			if (state == 113 && item == Symbol::oper_plus)
				operation.override (ParseOperationType::shift, 96); else


			if (state == 113 && item == Symbol::oper_minus)
				operation.override (ParseOperationType::shift, 97); else


			if (state == 113 && item == Symbol::oper_star)
				operation.override (ParseOperationType::shift, 98); else


			if (state == 113 && item == Symbol::oper_less_than)
				operation.override (ParseOperationType::shift, 99); else


			if (state == 113 && item == Symbol::nterm_any_operator)
				operation.override (ParseOperationType::go_to, 182); else


			if (state == 114 && item == Symbol::lscope)
				operation.override (ParseOperationType::shift, 183); else


			if (state == 114 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::shift, 61); else


			if (state == 114 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::shift, 62); else


			if (state == 114 && item == Symbol::nterm_statement_list)
				operation.override (ParseOperationType::go_to, 184); else


			if (state == 114 && item == Symbol::nterm_just_if)
				operation.override (ParseOperationType::go_to, 64); else


			if (state == 114 && item == Symbol::nterm_if_else)
				operation.override (ParseOperationType::go_to, 65); else


			if (state == 114 && item == Symbol::nterm_open_while)
				operation.override (ParseOperationType::go_to, 66); else


			if (state == 114 && item == Symbol::nterm_closed_while)
				operation.override (ParseOperationType::go_to, 67); else


			if (state == 114 && item == Symbol::nterm_while_statement)
				operation.override (ParseOperationType::go_to, 68); else


			if (state == 114 && item == Symbol::nterm_vardef)
				operation.override (ParseOperationType::go_to, 69); else


			if (state == 115 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 142); else


			if (state == 115 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 143); else


			if (state == 115 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 144); else


			if (state == 115 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 145); else


			if (state == 115 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 146); else


			if (state == 115 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 147); else


			if (state == 115 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 148); else


			if (state == 115 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 149); else


			if (state == 115 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 150); else


			if (state == 115 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 185); else


			if (state == 115 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 154); else


			if (state == 115 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 151); else


			if (state == 115 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 152); else


			if (state == 115 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 153); else


			if (state == 115 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 155); else


			if (state == 115 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 157); else


			if (state == 116 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 116 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 116 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 117 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 117 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 117 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 118 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 118 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 118 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 119 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 119 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 119 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 120 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 120 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 120 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 120 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 120 && item == Symbol::oper_union)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 121 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 34); else


			if (state == 121 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 34); else


			if (state == 121 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 34); else


			if (state == 121 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::reduce, 34); else


			if (state == 122 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 76); else


			if (state == 122 && item == Symbol::nterm_non_scoped_statement)
				operation.override (ParseOperationType::go_to, 186); else


			if (state == 122 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 78); else


			if (state == 123 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 79); else


			if (state == 123 && item == Symbol::nterm_non_scoped_statement)
				operation.override (ParseOperationType::go_to, 187); else


			if (state == 123 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 81); else


			if (state == 124 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 124 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 124 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 124 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 124 && item == Symbol::oper_union)
				operation.override (ParseOperationType::shift, 188); else


			if (state == 125 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 14); else


			if (state == 125 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 14); else


			if (state == 125 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 14); else


			if (state == 125 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::reduce, 14); else


			if (state == 126 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 25); else


			if (state == 126 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 25); else


			if (state == 126 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 25); else


			if (state == 126 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::shift, 189); else


			if (state == 127 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 22); else


			if (state == 127 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 22); else


			if (state == 127 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 22); else


			if (state == 128 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::shift, 190); else


			if (state == 129 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::reduce, 26); else


			if (state == 130 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 15); else


			if (state == 130 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 15); else


			if (state == 130 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 15); else


			if (state == 130 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::reduce, 15); else


			if (state == 131 && item == Symbol::identifier)
				operation.override (ParseOperationType::shift, 191); else


			if (state == 132 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 192); else


			if (state == 132 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 193); else


			if (state == 132 && item == Symbol::identifier)
				operation.override (ParseOperationType::shift, 194); else


			if (state == 132 && item == Symbol::nterm_paren_oper)
				operation.override (ParseOperationType::go_to, 195); else


			if (state == 132 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 196); else


			if (state == 133 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 133 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 133 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 134 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 134 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 134 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 135 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 135 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 135 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 136 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 136 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 136 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 137 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 137 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 137 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 138 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 197); else


			if (state == 138 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 198); else


			if (state == 138 && item == Symbol::nterm_call_item)
				operation.override (ParseOperationType::go_to, 199); else


			if (state == 139 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 139 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 139 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 62); else


			if (state == 139 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 140 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 140 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 140 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 140 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 140 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 140 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 140 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 140 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 140 && item == Symbol::keyword_nat)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 141 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 164); else


			if (state == 141 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 165); else


			if (state == 141 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 166); else


			if (state == 141 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 167); else


			if (state == 141 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 168); else


			if (state == 141 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 169); else


			if (state == 141 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 170); else


			if (state == 141 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 171); else


			if (state == 141 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 172); else


			if (state == 141 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 200); else


			if (state == 141 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 176); else


			if (state == 141 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 173); else


			if (state == 141 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 174); else


			if (state == 141 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 175); else


			if (state == 141 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 177); else


			if (state == 141 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 179); else


			if (state == 142 && item == Symbol::oper_assign)
				operation.override (ParseOperationType::shift, 95); else


			if (state == 142 && item == Symbol::oper_plus)
				operation.override (ParseOperationType::shift, 96); else


			if (state == 142 && item == Symbol::oper_minus)
				operation.override (ParseOperationType::shift, 97); else


			if (state == 142 && item == Symbol::oper_star)
				operation.override (ParseOperationType::shift, 98); else


			if (state == 142 && item == Symbol::oper_less_than)
				operation.override (ParseOperationType::shift, 99); else


			if (state == 142 && item == Symbol::nterm_any_operator)
				operation.override (ParseOperationType::go_to, 201); else


			if (state == 143 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 142); else


			if (state == 143 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 143); else


			if (state == 143 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 144); else


			if (state == 143 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 145); else


			if (state == 143 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 146); else


			if (state == 143 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 147); else


			if (state == 143 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 148); else


			if (state == 143 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 149); else


			if (state == 143 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 150); else


			if (state == 143 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 202); else


			if (state == 143 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 154); else


			if (state == 143 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 151); else


			if (state == 143 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 152); else


			if (state == 143 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 153); else


			if (state == 143 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 155); else


			if (state == 143 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 157); else


			if (state == 144 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 144 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 144 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 144 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 145 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 145 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 145 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 145 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 146 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 146 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 146 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 146 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 147 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 147 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 147 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 147 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 148 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 148 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 148 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 148 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 148 && item == Symbol::oper_union)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 149 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 149 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 149 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 149 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 149 && item == Symbol::oper_union)
				operation.override (ParseOperationType::shift, 203); else


			if (state == 150 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 204); else


			if (state == 150 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 205); else


			if (state == 150 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 75); else


			if (state == 150 && item == Symbol::statement_end)
				operation.override (ParseOperationType::shift, 206); else


			if (state == 150 && item == Symbol::nterm_paren_oper)
				operation.override (ParseOperationType::go_to, 207); else


			if (state == 150 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 208); else


			if (state == 151 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 151 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 151 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 151 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 152 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 152 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 152 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 152 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 153 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 153 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 153 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 153 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 154 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 154 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 154 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 154 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 155 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 155 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 155 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 155 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 156 && item == Symbol::lbrack)
				operation.override (ParseOperationType::shift, 209); else


			if (state == 157 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 157 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 157 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 157 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 158 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 94); else


			if (state == 158 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 100); else


			if (state == 158 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 210); else


			if (state == 159 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 164); else


			if (state == 159 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 211); else


			if (state == 159 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 165); else


			if (state == 159 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 166); else


			if (state == 159 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 167); else


			if (state == 159 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 168); else


			if (state == 159 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 169); else


			if (state == 159 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 170); else


			if (state == 159 && item == Symbol::oper_assign)
				operation.override (ParseOperationType::shift, 95); else


			if (state == 159 && item == Symbol::oper_plus)
				operation.override (ParseOperationType::shift, 96); else


			if (state == 159 && item == Symbol::oper_minus)
				operation.override (ParseOperationType::shift, 97); else


			if (state == 159 && item == Symbol::oper_star)
				operation.override (ParseOperationType::shift, 98); else


			if (state == 159 && item == Symbol::oper_less_than)
				operation.override (ParseOperationType::shift, 99); else


			if (state == 159 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 171); else


			if (state == 159 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 172); else


			if (state == 159 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 212); else


			if (state == 159 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 176); else


			if (state == 159 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 173); else


			if (state == 159 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 174); else


			if (state == 159 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 175); else


			if (state == 159 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 177); else


			if (state == 159 && item == Symbol::nterm_any_operator)
				operation.override (ParseOperationType::go_to, 141); else


			if (state == 159 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 179); else


			if (state == 160 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 43); else


			if (state == 160 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 43); else


			if (state == 161 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 213); else


			if (state == 161 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 214); else


			if (state == 161 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 215); else


			if (state == 161 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 216); else


			if (state == 161 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 217); else


			if (state == 161 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 218); else


			if (state == 161 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 219); else


			if (state == 161 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 220); else


			if (state == 161 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 221); else


			if (state == 161 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 225); else


			if (state == 161 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 222); else


			if (state == 161 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 223); else


			if (state == 161 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 224); else


			if (state == 161 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 226); else


			if (state == 161 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 227); else


			if (state == 162 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 162 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 162 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 163 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 163 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 163 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 164 && item == Symbol::oper_assign)
				operation.override (ParseOperationType::shift, 95); else


			if (state == 164 && item == Symbol::oper_plus)
				operation.override (ParseOperationType::shift, 96); else


			if (state == 164 && item == Symbol::oper_minus)
				operation.override (ParseOperationType::shift, 97); else


			if (state == 164 && item == Symbol::oper_star)
				operation.override (ParseOperationType::shift, 98); else


			if (state == 164 && item == Symbol::oper_less_than)
				operation.override (ParseOperationType::shift, 99); else


			if (state == 164 && item == Symbol::nterm_any_operator)
				operation.override (ParseOperationType::go_to, 228); else


			if (state == 165 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 142); else


			if (state == 165 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 143); else


			if (state == 165 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 144); else


			if (state == 165 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 145); else


			if (state == 165 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 146); else


			if (state == 165 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 147); else


			if (state == 165 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 148); else


			if (state == 165 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 149); else


			if (state == 165 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 150); else


			if (state == 165 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 229); else


			if (state == 165 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 154); else


			if (state == 165 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 151); else


			if (state == 165 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 152); else


			if (state == 165 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 153); else


			if (state == 165 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 155); else


			if (state == 165 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 157); else


			if (state == 166 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 166 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 166 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 166 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 167 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 167 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 167 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 167 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 168 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 168 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 168 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 168 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 169 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 169 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 169 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 169 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 170 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 170 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 170 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 170 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 170 && item == Symbol::oper_union)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 171 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 171 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 171 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 171 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 171 && item == Symbol::oper_union)
				operation.override (ParseOperationType::shift, 230); else


			if (state == 172 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 231); else


			if (state == 172 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 75); else


			if (state == 172 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 232); else


			if (state == 172 && item == Symbol::statement_end)
				operation.override (ParseOperationType::shift, 233); else


			if (state == 172 && item == Symbol::nterm_paren_oper)
				operation.override (ParseOperationType::go_to, 234); else


			if (state == 172 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 235); else


			if (state == 173 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 173 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 173 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 173 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 174 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 174 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 174 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 174 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 175 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 175 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 175 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 175 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 176 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 176 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 176 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 176 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 177 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 177 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 177 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 177 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 178 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 236); else


			if (state == 179 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 179 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 179 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 179 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 180 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 43); else


			if (state == 180 && item == Symbol::rparen)
				operation.override (ParseOperationType::reduce, 43); else


			if (state == 180 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 43); else


			if (state == 180 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::reduce, 43); else


			if (state == 180 && item == Symbol::constant_number)
				operation.override (ParseOperationType::reduce, 43); else


			if (state == 180 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::reduce, 43); else


			if (state == 180 && item == Symbol::constant_float)
				operation.override (ParseOperationType::reduce, 43); else


			if (state == 180 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 43); else


			if (state == 180 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 43); else


			if (state == 180 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 43); else


			if (state == 180 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 43); else


			if (state == 180 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 43); else


			if (state == 180 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 43); else


			if (state == 180 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 43); else


			if (state == 180 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 43); else


			if (state == 180 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 43); else


			if (state == 180 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 43); else


			if (state == 181 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 237); else


			if (state == 182 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 164); else


			if (state == 182 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 165); else


			if (state == 182 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 166); else


			if (state == 182 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 167); else


			if (state == 182 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 168); else


			if (state == 182 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 169); else


			if (state == 182 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 170); else


			if (state == 182 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 171); else


			if (state == 182 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 172); else


			if (state == 182 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 238); else


			if (state == 182 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 176); else


			if (state == 182 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 173); else


			if (state == 182 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 174); else


			if (state == 182 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 175); else


			if (state == 182 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 177); else


			if (state == 182 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 179); else


			if (state == 183 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 183 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 183 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 183 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 184 && item == Symbol::lscope)
				operation.override (ParseOperationType::shift, 239); else


			if (state == 185 && item == Symbol::lbrack)
				operation.override (ParseOperationType::shift, 240); else


			if (state == 186 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::shift, 122); else


			if (state == 186 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::shift, 123); else


			if (state == 186 && item == Symbol::nterm_open_while)
				operation.override (ParseOperationType::go_to, 109); else


			if (state == 186 && item == Symbol::nterm_closed_while)
				operation.override (ParseOperationType::go_to, 241); else


			if (state == 186 && item == Symbol::nterm_while_statement)
				operation.override (ParseOperationType::go_to, 68); else


			if (state == 186 && item == Symbol::nterm_vardef)
				operation.override (ParseOperationType::go_to, 129); else


			if (state == 187 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 113); else


			if (state == 187 && item == Symbol::rparen)
				operation.override (ParseOperationType::shift, 114); else


			if (state == 187 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 115); else


			if (state == 187 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 116); else


			if (state == 187 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 117); else


			if (state == 187 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 118); else


			if (state == 187 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 119); else


			if (state == 187 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 120); else


			if (state == 187 && item == Symbol::identifier)
				operation.override (ParseOperationType::shift, 121); else


			if (state == 187 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::shift, 2); else


			if (state == 187 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::shift, 3); else


			if (state == 187 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::shift, 4); else


			if (state == 187 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::shift, 5); else


			if (state == 187 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::shift, 6); else


			if (state == 187 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::shift, 7); else


			if (state == 187 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::shift, 122); else


			if (state == 187 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::shift, 123); else


			if (state == 187 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 124); else


			if (state == 187 && item == Symbol::nterm_reg_if_tail)
				operation.override (ParseOperationType::go_to, 125); else


			if (state == 187 && item == Symbol::nterm_statement)
				operation.override (ParseOperationType::go_to, 242); else


			if (state == 187 && item == Symbol::nterm_if_statement)
				operation.override (ParseOperationType::go_to, 130); else


			if (state == 187 && item == Symbol::nterm_open_while)
				operation.override (ParseOperationType::go_to, 127); else


			if (state == 187 && item == Symbol::nterm_closed_while)
				operation.override (ParseOperationType::go_to, 243); else


			if (state == 187 && item == Symbol::nterm_while_statement)
				operation.override (ParseOperationType::go_to, 68); else


			if (state == 187 && item == Symbol::nterm_vardef)
				operation.override (ParseOperationType::go_to, 129); else


			if (state == 187 && item == Symbol::nterm_call_args)
				operation.override (ParseOperationType::go_to, 131); else


			if (state == 187 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 132); else


			if (state == 187 && item == Symbol::nterm_item)
				operation.override (ParseOperationType::go_to, 138); else


			if (state == 187 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 136); else


			if (state == 187 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 133); else


			if (state == 187 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 134); else


			if (state == 187 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 135); else


			if (state == 187 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 137); else


			if (state == 187 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 139); else


			if (state == 187 && item == Symbol::nterm_sid_union)
				operation.override (ParseOperationType::go_to, 19); else


			if (state == 187 && item == Symbol::nterm_def_union)
				operation.override (ParseOperationType::go_to, 20); else


			if (state == 188 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 120); else


			if (state == 188 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 124); else


			if (state == 188 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 244); else


			if (state == 189 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 113); else


			if (state == 189 && item == Symbol::rparen)
				operation.override (ParseOperationType::shift, 245); else


			if (state == 189 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 115); else


			if (state == 189 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 116); else


			if (state == 189 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 117); else


			if (state == 189 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 118); else


			if (state == 189 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 119); else


			if (state == 189 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 120); else


			if (state == 189 && item == Symbol::identifier)
				operation.override (ParseOperationType::shift, 246); else


			if (state == 189 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::shift, 2); else


			if (state == 189 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::shift, 3); else


			if (state == 189 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::shift, 4); else


			if (state == 189 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::shift, 5); else


			if (state == 189 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::shift, 6); else


			if (state == 189 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::shift, 7); else


			if (state == 189 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::shift, 61); else


			if (state == 189 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::shift, 62); else


			if (state == 189 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 124); else


			if (state == 189 && item == Symbol::nterm_reg_if_tail)
				operation.override (ParseOperationType::go_to, 247); else


			if (state == 189 && item == Symbol::nterm_statement)
				operation.override (ParseOperationType::go_to, 248); else


			if (state == 189 && item == Symbol::nterm_if_statement)
				operation.override (ParseOperationType::go_to, 251); else


			if (state == 189 && item == Symbol::nterm_open_while)
				operation.override (ParseOperationType::go_to, 249); else


			if (state == 189 && item == Symbol::nterm_closed_while)
				operation.override (ParseOperationType::go_to, 250); else


			if (state == 189 && item == Symbol::nterm_while_statement)
				operation.override (ParseOperationType::go_to, 68); else


			if (state == 189 && item == Symbol::nterm_vardef)
				operation.override (ParseOperationType::go_to, 69); else


			if (state == 189 && item == Symbol::nterm_call_args)
				operation.override (ParseOperationType::go_to, 252); else


			if (state == 189 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 253); else


			if (state == 189 && item == Symbol::nterm_item)
				operation.override (ParseOperationType::go_to, 138); else


			if (state == 189 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 136); else


			if (state == 189 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 133); else


			if (state == 189 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 134); else


			if (state == 189 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 135); else


			if (state == 189 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 137); else


			if (state == 189 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 139); else


			if (state == 189 && item == Symbol::nterm_sid_union)
				operation.override (ParseOperationType::go_to, 19); else


			if (state == 189 && item == Symbol::nterm_def_union)
				operation.override (ParseOperationType::go_to, 20); else


			if (state == 190 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 113); else


			if (state == 190 && item == Symbol::rparen)
				operation.override (ParseOperationType::shift, 245); else


			if (state == 190 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 115); else


			if (state == 190 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 116); else


			if (state == 190 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 117); else


			if (state == 190 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 118); else


			if (state == 190 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 119); else


			if (state == 190 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 120); else


			if (state == 190 && item == Symbol::identifier)
				operation.override (ParseOperationType::shift, 246); else


			if (state == 190 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::shift, 2); else


			if (state == 190 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::shift, 3); else


			if (state == 190 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::shift, 4); else


			if (state == 190 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::shift, 5); else


			if (state == 190 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::shift, 6); else


			if (state == 190 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::shift, 7); else


			if (state == 190 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::shift, 61); else


			if (state == 190 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::shift, 62); else


			if (state == 190 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 124); else


			if (state == 190 && item == Symbol::nterm_reg_if_tail)
				operation.override (ParseOperationType::go_to, 247); else


			if (state == 190 && item == Symbol::nterm_statement)
				operation.override (ParseOperationType::go_to, 254); else


			if (state == 190 && item == Symbol::nterm_if_statement)
				operation.override (ParseOperationType::go_to, 251); else


			if (state == 190 && item == Symbol::nterm_open_while)
				operation.override (ParseOperationType::go_to, 255); else


			if (state == 190 && item == Symbol::nterm_closed_while)
				operation.override (ParseOperationType::go_to, 256); else


			if (state == 190 && item == Symbol::nterm_while_statement)
				operation.override (ParseOperationType::go_to, 68); else


			if (state == 190 && item == Symbol::nterm_vardef)
				operation.override (ParseOperationType::go_to, 69); else


			if (state == 190 && item == Symbol::nterm_call_args)
				operation.override (ParseOperationType::go_to, 252); else


			if (state == 190 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 253); else


			if (state == 190 && item == Symbol::nterm_item)
				operation.override (ParseOperationType::go_to, 138); else


			if (state == 190 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 136); else


			if (state == 190 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 133); else


			if (state == 190 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 134); else


			if (state == 190 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 135); else


			if (state == 190 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 137); else


			if (state == 190 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 139); else


			if (state == 190 && item == Symbol::nterm_sid_union)
				operation.override (ParseOperationType::go_to, 19); else


			if (state == 190 && item == Symbol::nterm_def_union)
				operation.override (ParseOperationType::go_to, 20); else


			if (state == 191 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 35); else


			if (state == 191 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 35); else


			if (state == 191 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 35); else


			if (state == 191 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::reduce, 35); else


			if (state == 192 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 164); else


			if (state == 192 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 257); else


			if (state == 192 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 165); else


			if (state == 192 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 166); else


			if (state == 192 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 167); else


			if (state == 192 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 168); else


			if (state == 192 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 169); else


			if (state == 192 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 170); else


			if (state == 192 && item == Symbol::oper_assign)
				operation.override (ParseOperationType::shift, 95); else


			if (state == 192 && item == Symbol::oper_plus)
				operation.override (ParseOperationType::shift, 96); else


			if (state == 192 && item == Symbol::oper_minus)
				operation.override (ParseOperationType::shift, 97); else


			if (state == 192 && item == Symbol::oper_star)
				operation.override (ParseOperationType::shift, 98); else


			if (state == 192 && item == Symbol::oper_less_than)
				operation.override (ParseOperationType::shift, 99); else


			if (state == 192 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 171); else


			if (state == 192 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 172); else


			if (state == 192 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 258); else


			if (state == 192 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 176); else


			if (state == 192 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 173); else


			if (state == 192 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 174); else


			if (state == 192 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 175); else


			if (state == 192 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 177); else


			if (state == 192 && item == Symbol::nterm_any_operator)
				operation.override (ParseOperationType::go_to, 182); else


			if (state == 192 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 179); else


			if (state == 193 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 213); else


			if (state == 193 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 214); else


			if (state == 193 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 215); else


			if (state == 193 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 216); else


			if (state == 193 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 217); else


			if (state == 193 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 218); else


			if (state == 193 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 219); else


			if (state == 193 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 220); else


			if (state == 193 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 259); else


			if (state == 193 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 225); else


			if (state == 193 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 222); else


			if (state == 193 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 223); else


			if (state == 193 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 224); else


			if (state == 193 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 226); else


			if (state == 193 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 227); else


			if (state == 194 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 36); else


			if (state == 194 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 36); else


			if (state == 194 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 36); else


			if (state == 194 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::reduce, 36); else


			if (state == 195 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 195 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 195 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 196 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 196 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 196 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 197 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 197 && item == Symbol::oper_dot)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 198 && item == Symbol::statement_end)
				operation.override (ParseOperationType::shift, 260); else


			if (state == 198 && item == Symbol::oper_dot)
				operation.override (ParseOperationType::reduce, 77); else


			if (state == 199 && item == Symbol::oper_dot)
				operation.override (ParseOperationType::shift, 261); else


			if (state == 200 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 262); else


			if (state == 201 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 164); else


			if (state == 201 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 165); else


			if (state == 201 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 166); else


			if (state == 201 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 167); else


			if (state == 201 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 168); else


			if (state == 201 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 169); else


			if (state == 201 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 170); else


			if (state == 201 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 171); else


			if (state == 201 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 172); else


			if (state == 201 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 263); else


			if (state == 201 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 176); else


			if (state == 201 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 173); else


			if (state == 201 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 174); else


			if (state == 201 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 175); else


			if (state == 201 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 177); else


			if (state == 201 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 179); else


			if (state == 202 && item == Symbol::lbrack)
				operation.override (ParseOperationType::shift, 264); else


			if (state == 203 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 148); else


			if (state == 203 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 149); else


			if (state == 203 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 265); else


			if (state == 204 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 164); else


			if (state == 204 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 266); else


			if (state == 204 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 165); else


			if (state == 204 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 166); else


			if (state == 204 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 167); else


			if (state == 204 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 168); else


			if (state == 204 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 169); else


			if (state == 204 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 170); else


			if (state == 204 && item == Symbol::oper_assign)
				operation.override (ParseOperationType::shift, 95); else


			if (state == 204 && item == Symbol::oper_plus)
				operation.override (ParseOperationType::shift, 96); else


			if (state == 204 && item == Symbol::oper_minus)
				operation.override (ParseOperationType::shift, 97); else


			if (state == 204 && item == Symbol::oper_star)
				operation.override (ParseOperationType::shift, 98); else


			if (state == 204 && item == Symbol::oper_less_than)
				operation.override (ParseOperationType::shift, 99); else


			if (state == 204 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 171); else


			if (state == 204 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 172); else


			if (state == 204 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 267); else


			if (state == 204 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 176); else


			if (state == 204 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 173); else


			if (state == 204 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 174); else


			if (state == 204 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 175); else


			if (state == 204 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 177); else


			if (state == 204 && item == Symbol::nterm_any_operator)
				operation.override (ParseOperationType::go_to, 201); else


			if (state == 204 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 179); else


			if (state == 205 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 213); else


			if (state == 205 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 214); else


			if (state == 205 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 215); else


			if (state == 205 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 216); else


			if (state == 205 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 217); else


			if (state == 205 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 218); else


			if (state == 205 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 219); else


			if (state == 205 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 220); else


			if (state == 205 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 268); else


			if (state == 205 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 225); else


			if (state == 205 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 222); else


			if (state == 205 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 223); else


			if (state == 205 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 224); else


			if (state == 205 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 226); else


			if (state == 205 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 227); else


			if (state == 206 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 142); else


			if (state == 206 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 143); else


			if (state == 206 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 144); else


			if (state == 206 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 145); else


			if (state == 206 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 146); else


			if (state == 206 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 147); else


			if (state == 206 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 148); else


			if (state == 206 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 149); else


			if (state == 206 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 150); else


			if (state == 206 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 269); else


			if (state == 206 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 154); else


			if (state == 206 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 151); else


			if (state == 206 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 152); else


			if (state == 206 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 153); else


			if (state == 206 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 155); else


			if (state == 206 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 157); else


			if (state == 207 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 207 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 207 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 207 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 208 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 208 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 208 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 208 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 209 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 209 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 209 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 210 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 210 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 210 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 211 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 211 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 211 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 212 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 270); else


			if (state == 213 && item == Symbol::oper_assign)
				operation.override (ParseOperationType::shift, 95); else


			if (state == 213 && item == Symbol::oper_plus)
				operation.override (ParseOperationType::shift, 96); else


			if (state == 213 && item == Symbol::oper_minus)
				operation.override (ParseOperationType::shift, 97); else


			if (state == 213 && item == Symbol::oper_star)
				operation.override (ParseOperationType::shift, 98); else


			if (state == 213 && item == Symbol::oper_less_than)
				operation.override (ParseOperationType::shift, 99); else


			if (state == 213 && item == Symbol::nterm_any_operator)
				operation.override (ParseOperationType::go_to, 271); else


			if (state == 214 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 142); else


			if (state == 214 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 143); else


			if (state == 214 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 144); else


			if (state == 214 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 145); else


			if (state == 214 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 146); else


			if (state == 214 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 147); else


			if (state == 214 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 148); else


			if (state == 214 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 149); else


			if (state == 214 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 150); else


			if (state == 214 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 272); else


			if (state == 214 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 154); else


			if (state == 214 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 151); else


			if (state == 214 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 152); else


			if (state == 214 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 153); else


			if (state == 214 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 155); else


			if (state == 214 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 157); else


			if (state == 215 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 215 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 215 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 216 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 216 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 216 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 217 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 217 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 217 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 218 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 218 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 218 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 219 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 219 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 219 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 219 && item == Symbol::oper_union)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 220 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 220 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 220 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 220 && item == Symbol::oper_union)
				operation.override (ParseOperationType::shift, 273); else


			if (state == 221 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 274); else


			if (state == 221 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 275); else


			if (state == 221 && item == Symbol::lbrack)
				operation.override (ParseOperationType::shift, 276); else


			if (state == 221 && item == Symbol::nterm_paren_oper)
				operation.override (ParseOperationType::go_to, 277); else


			if (state == 221 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 278); else


			if (state == 222 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 222 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 222 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 223 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 223 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 223 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 224 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 224 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 224 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 225 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 225 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 225 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 226 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 226 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 226 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 227 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 227 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 227 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 228 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 164); else


			if (state == 228 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 165); else


			if (state == 228 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 166); else


			if (state == 228 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 167); else


			if (state == 228 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 168); else


			if (state == 228 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 169); else


			if (state == 228 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 170); else


			if (state == 228 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 171); else


			if (state == 228 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 172); else


			if (state == 228 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 279); else


			if (state == 228 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 176); else


			if (state == 228 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 173); else


			if (state == 228 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 174); else


			if (state == 228 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 175); else


			if (state == 228 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 177); else


			if (state == 228 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 179); else


			if (state == 229 && item == Symbol::lbrack)
				operation.override (ParseOperationType::shift, 280); else


			if (state == 230 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 170); else


			if (state == 230 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 171); else


			if (state == 230 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 281); else


			if (state == 231 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 164); else


			if (state == 231 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 282); else


			if (state == 231 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 165); else


			if (state == 231 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 166); else


			if (state == 231 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 167); else


			if (state == 231 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 168); else


			if (state == 231 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 169); else


			if (state == 231 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 170); else


			if (state == 231 && item == Symbol::oper_assign)
				operation.override (ParseOperationType::shift, 95); else


			if (state == 231 && item == Symbol::oper_plus)
				operation.override (ParseOperationType::shift, 96); else


			if (state == 231 && item == Symbol::oper_minus)
				operation.override (ParseOperationType::shift, 97); else


			if (state == 231 && item == Symbol::oper_star)
				operation.override (ParseOperationType::shift, 98); else


			if (state == 231 && item == Symbol::oper_less_than)
				operation.override (ParseOperationType::shift, 99); else


			if (state == 231 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 171); else


			if (state == 231 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 172); else


			if (state == 231 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 283); else


			if (state == 231 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 176); else


			if (state == 231 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 173); else


			if (state == 231 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 174); else


			if (state == 231 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 175); else


			if (state == 231 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 177); else


			if (state == 231 && item == Symbol::nterm_any_operator)
				operation.override (ParseOperationType::go_to, 228); else


			if (state == 231 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 179); else


			if (state == 232 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 213); else


			if (state == 232 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 214); else


			if (state == 232 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 215); else


			if (state == 232 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 216); else


			if (state == 232 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 217); else


			if (state == 232 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 218); else


			if (state == 232 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 219); else


			if (state == 232 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 220); else


			if (state == 232 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 284); else


			if (state == 232 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 225); else


			if (state == 232 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 222); else


			if (state == 232 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 223); else


			if (state == 232 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 224); else


			if (state == 232 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 226); else


			if (state == 232 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 227); else


			if (state == 233 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 164); else


			if (state == 233 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 165); else


			if (state == 233 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 166); else


			if (state == 233 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 167); else


			if (state == 233 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 168); else


			if (state == 233 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 169); else


			if (state == 233 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 170); else


			if (state == 233 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 171); else


			if (state == 233 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 172); else


			if (state == 233 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 285); else


			if (state == 233 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 176); else


			if (state == 233 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 173); else


			if (state == 233 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 174); else


			if (state == 233 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 175); else


			if (state == 233 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 177); else


			if (state == 233 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 179); else


			if (state == 234 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 234 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 234 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 234 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 235 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 235 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 235 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 235 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 236 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 236 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 237 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 237 && item == Symbol::rparen)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 237 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 237 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 237 && item == Symbol::constant_number)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 237 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 237 && item == Symbol::constant_float)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 237 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 237 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 237 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 237 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 237 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 237 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 237 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 237 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 237 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 237 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 238 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 286); else


			if (state == 239 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 239 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 239 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 239 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 240 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 240 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 240 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 241 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::reduce, 32); else


			if (state == 242 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 25); else


			if (state == 242 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 25); else


			if (state == 242 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 25); else


			if (state == 242 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::shift, 287); else


			if (state == 243 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::shift, 288); else


			if (state == 244 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 244 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 244 && item == Symbol::constant_text)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 244 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 245 && item == Symbol::lscope)
				operation.override (ParseOperationType::shift, 289); else


			if (state == 245 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::shift, 61); else


			if (state == 245 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::shift, 62); else


			if (state == 245 && item == Symbol::nterm_statement_list)
				operation.override (ParseOperationType::go_to, 290); else


			if (state == 245 && item == Symbol::nterm_just_if)
				operation.override (ParseOperationType::go_to, 64); else


			if (state == 245 && item == Symbol::nterm_if_else)
				operation.override (ParseOperationType::go_to, 65); else


			if (state == 245 && item == Symbol::nterm_open_while)
				operation.override (ParseOperationType::go_to, 66); else


			if (state == 245 && item == Symbol::nterm_closed_while)
				operation.override (ParseOperationType::go_to, 67); else


			if (state == 245 && item == Symbol::nterm_while_statement)
				operation.override (ParseOperationType::go_to, 68); else


			if (state == 245 && item == Symbol::nterm_vardef)
				operation.override (ParseOperationType::go_to, 69); else


			if (state == 246 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 34); else


			if (state == 246 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 34); else


			if (state == 246 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 34); else


			if (state == 247 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 14); else


			if (state == 247 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 14); else


			if (state == 247 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 14); else


			if (state == 248 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 28); else


			if (state == 248 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 28); else


			if (state == 248 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 28); else


			if (state == 249 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 24); else


			if (state == 249 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 24); else


			if (state == 249 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 24); else


			if (state == 250 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 27); else


			if (state == 250 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 27); else


			if (state == 250 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 27); else


			if (state == 251 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 15); else


			if (state == 251 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 15); else


			if (state == 251 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 15); else


			if (state == 252 && item == Symbol::identifier)
				operation.override (ParseOperationType::shift, 291); else


			if (state == 253 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 192); else


			if (state == 253 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 193); else


			if (state == 253 && item == Symbol::identifier)
				operation.override (ParseOperationType::shift, 292); else


			if (state == 253 && item == Symbol::nterm_paren_oper)
				operation.override (ParseOperationType::go_to, 195); else


			if (state == 253 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 196); else


			if (state == 254 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 30); else


			if (state == 254 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 30); else


			if (state == 254 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 30); else


			if (state == 255 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 23); else


			if (state == 255 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 23); else


			if (state == 255 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 23); else


			if (state == 256 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 29); else


			if (state == 256 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 29); else


			if (state == 256 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 29); else


			if (state == 257 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 257 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 257 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 258 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 293); else


			if (state == 259 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 274); else


			if (state == 259 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 275); else


			if (state == 259 && item == Symbol::lbrack)
				operation.override (ParseOperationType::shift, 294); else


			if (state == 259 && item == Symbol::nterm_paren_oper)
				operation.override (ParseOperationType::go_to, 277); else


			if (state == 259 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 278); else


			if (state == 260 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 197); else


			if (state == 260 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 198); else


			if (state == 260 && item == Symbol::nterm_call_item)
				operation.override (ParseOperationType::go_to, 295); else


			if (state == 261 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 296); else


			if (state == 261 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 297); else


			if (state == 261 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 298); else


			if (state == 261 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 299); else


			if (state == 261 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 300); else


			if (state == 261 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 301); else


			if (state == 261 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 302); else


			if (state == 261 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 303); else


			if (state == 261 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 304); else


			if (state == 261 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 310); else


			if (state == 261 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 308); else


			if (state == 261 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 305); else


			if (state == 261 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 306); else


			if (state == 261 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 307); else


			if (state == 261 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 309); else


			if (state == 261 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 311); else


			if (state == 262 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 262 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 262 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 263 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 312); else


			if (state == 264 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 264 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 264 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 264 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 265 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 265 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 265 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 265 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 266 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 266 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 266 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 266 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 267 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 313); else


			if (state == 268 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 274); else


			if (state == 268 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 275); else


			if (state == 268 && item == Symbol::lbrack)
				operation.override (ParseOperationType::shift, 314); else


			if (state == 268 && item == Symbol::nterm_paren_oper)
				operation.override (ParseOperationType::go_to, 277); else


			if (state == 268 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 278); else


			if (state == 269 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 74); else


			if (state == 270 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 270 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 270 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 271 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 164); else


			if (state == 271 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 165); else


			if (state == 271 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 166); else


			if (state == 271 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 167); else


			if (state == 271 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 168); else


			if (state == 271 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 169); else


			if (state == 271 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 170); else


			if (state == 271 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 171); else


			if (state == 271 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 172); else


			if (state == 271 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 315); else


			if (state == 271 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 176); else


			if (state == 271 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 173); else


			if (state == 271 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 174); else


			if (state == 271 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 175); else


			if (state == 271 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 177); else


			if (state == 271 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 179); else


			if (state == 272 && item == Symbol::lbrack)
				operation.override (ParseOperationType::shift, 316); else


			if (state == 273 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 219); else


			if (state == 273 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 220); else


			if (state == 273 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 317); else


			if (state == 274 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 164); else


			if (state == 274 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 318); else


			if (state == 274 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 165); else


			if (state == 274 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 166); else


			if (state == 274 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 167); else


			if (state == 274 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 168); else


			if (state == 274 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 169); else


			if (state == 274 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 170); else


			if (state == 274 && item == Symbol::oper_assign)
				operation.override (ParseOperationType::shift, 95); else


			if (state == 274 && item == Symbol::oper_plus)
				operation.override (ParseOperationType::shift, 96); else


			if (state == 274 && item == Symbol::oper_minus)
				operation.override (ParseOperationType::shift, 97); else


			if (state == 274 && item == Symbol::oper_star)
				operation.override (ParseOperationType::shift, 98); else


			if (state == 274 && item == Symbol::oper_less_than)
				operation.override (ParseOperationType::shift, 99); else


			if (state == 274 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 171); else


			if (state == 274 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 172); else


			if (state == 274 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 319); else


			if (state == 274 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 176); else


			if (state == 274 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 173); else


			if (state == 274 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 174); else


			if (state == 274 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 175); else


			if (state == 274 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 177); else


			if (state == 274 && item == Symbol::nterm_any_operator)
				operation.override (ParseOperationType::go_to, 271); else


			if (state == 274 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 179); else


			if (state == 275 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 213); else


			if (state == 275 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 214); else


			if (state == 275 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 215); else


			if (state == 275 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 216); else


			if (state == 275 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 217); else


			if (state == 275 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 218); else


			if (state == 275 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 219); else


			if (state == 275 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 220); else


			if (state == 275 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 320); else


			if (state == 275 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 225); else


			if (state == 275 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 222); else


			if (state == 275 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 223); else


			if (state == 275 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 224); else


			if (state == 275 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 226); else


			if (state == 275 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 227); else


			if (state == 276 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 51); else


			if (state == 276 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 51); else


			if (state == 276 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 51); else


			if (state == 277 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 277 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 277 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 278 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 278 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 278 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 279 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 321); else


			if (state == 280 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 280 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 280 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 280 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 281 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 281 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 281 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 281 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 282 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 282 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 282 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 282 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 283 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 322); else


			if (state == 284 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 274); else


			if (state == 284 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 275); else


			if (state == 284 && item == Symbol::lbrack)
				operation.override (ParseOperationType::shift, 323); else


			if (state == 284 && item == Symbol::nterm_paren_oper)
				operation.override (ParseOperationType::go_to, 277); else


			if (state == 284 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 278); else


			if (state == 285 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 74); else


			if (state == 286 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 286 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 286 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 287 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 113); else


			if (state == 287 && item == Symbol::rparen)
				operation.override (ParseOperationType::shift, 324); else


			if (state == 287 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 115); else


			if (state == 287 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 116); else


			if (state == 287 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 117); else


			if (state == 287 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 118); else


			if (state == 287 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 119); else


			if (state == 287 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 120); else


			if (state == 287 && item == Symbol::identifier)
				operation.override (ParseOperationType::shift, 325); else


			if (state == 287 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::shift, 2); else


			if (state == 287 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::shift, 3); else


			if (state == 287 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::shift, 4); else


			if (state == 287 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::shift, 5); else


			if (state == 287 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::shift, 6); else


			if (state == 287 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::shift, 7); else


			if (state == 287 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::shift, 122); else


			if (state == 287 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::shift, 123); else


			if (state == 287 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 124); else


			if (state == 287 && item == Symbol::nterm_reg_if_tail)
				operation.override (ParseOperationType::go_to, 326); else


			if (state == 287 && item == Symbol::nterm_statement)
				operation.override (ParseOperationType::go_to, 327); else


			if (state == 287 && item == Symbol::nterm_if_statement)
				operation.override (ParseOperationType::go_to, 329); else


			if (state == 287 && item == Symbol::nterm_open_while)
				operation.override (ParseOperationType::go_to, 249); else


			if (state == 287 && item == Symbol::nterm_closed_while)
				operation.override (ParseOperationType::go_to, 328); else


			if (state == 287 && item == Symbol::nterm_while_statement)
				operation.override (ParseOperationType::go_to, 68); else


			if (state == 287 && item == Symbol::nterm_vardef)
				operation.override (ParseOperationType::go_to, 129); else


			if (state == 287 && item == Symbol::nterm_call_args)
				operation.override (ParseOperationType::go_to, 330); else


			if (state == 287 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 331); else


			if (state == 287 && item == Symbol::nterm_item)
				operation.override (ParseOperationType::go_to, 138); else


			if (state == 287 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 136); else


			if (state == 287 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 133); else


			if (state == 287 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 134); else


			if (state == 287 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 135); else


			if (state == 287 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 137); else


			if (state == 287 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 139); else


			if (state == 287 && item == Symbol::nterm_sid_union)
				operation.override (ParseOperationType::go_to, 19); else


			if (state == 287 && item == Symbol::nterm_def_union)
				operation.override (ParseOperationType::go_to, 20); else


			if (state == 288 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 113); else


			if (state == 288 && item == Symbol::rparen)
				operation.override (ParseOperationType::shift, 324); else


			if (state == 288 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 115); else


			if (state == 288 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 116); else


			if (state == 288 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 117); else


			if (state == 288 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 118); else


			if (state == 288 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 119); else


			if (state == 288 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 120); else


			if (state == 288 && item == Symbol::identifier)
				operation.override (ParseOperationType::shift, 325); else


			if (state == 288 && item == Symbol::oper_greater_than_equal)
				operation.override (ParseOperationType::shift, 2); else


			if (state == 288 && item == Symbol::keyword_shader)
				operation.override (ParseOperationType::shift, 3); else


			if (state == 288 && item == Symbol::keyword_float)
				operation.override (ParseOperationType::shift, 4); else


			if (state == 288 && item == Symbol::keyword_bool)
				operation.override (ParseOperationType::shift, 5); else


			if (state == 288 && item == Symbol::keyword_void)
				operation.override (ParseOperationType::shift, 6); else


			if (state == 288 && item == Symbol::keyword_int)
				operation.override (ParseOperationType::shift, 7); else


			if (state == 288 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::shift, 122); else


			if (state == 288 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::shift, 123); else


			if (state == 288 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 124); else


			if (state == 288 && item == Symbol::nterm_reg_if_tail)
				operation.override (ParseOperationType::go_to, 326); else


			if (state == 288 && item == Symbol::nterm_statement)
				operation.override (ParseOperationType::go_to, 332); else


			if (state == 288 && item == Symbol::nterm_if_statement)
				operation.override (ParseOperationType::go_to, 329); else


			if (state == 288 && item == Symbol::nterm_open_while)
				operation.override (ParseOperationType::go_to, 255); else


			if (state == 288 && item == Symbol::nterm_closed_while)
				operation.override (ParseOperationType::go_to, 333); else


			if (state == 288 && item == Symbol::nterm_while_statement)
				operation.override (ParseOperationType::go_to, 68); else


			if (state == 288 && item == Symbol::nterm_vardef)
				operation.override (ParseOperationType::go_to, 129); else


			if (state == 288 && item == Symbol::nterm_call_args)
				operation.override (ParseOperationType::go_to, 330); else


			if (state == 288 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 331); else


			if (state == 288 && item == Symbol::nterm_item)
				operation.override (ParseOperationType::go_to, 138); else


			if (state == 288 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 136); else


			if (state == 288 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 133); else


			if (state == 288 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 134); else


			if (state == 288 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 135); else


			if (state == 288 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 137); else


			if (state == 288 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 139); else


			if (state == 288 && item == Symbol::nterm_sid_union)
				operation.override (ParseOperationType::go_to, 19); else


			if (state == 288 && item == Symbol::nterm_def_union)
				operation.override (ParseOperationType::go_to, 20); else


			if (state == 289 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 289 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 289 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 290 && item == Symbol::lscope)
				operation.override (ParseOperationType::shift, 334); else


			if (state == 291 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 35); else


			if (state == 291 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 35); else


			if (state == 291 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 35); else


			if (state == 292 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 36); else


			if (state == 292 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 36); else


			if (state == 292 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 36); else


			if (state == 293 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 293 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 293 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 294 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 51); else


			if (state == 294 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 51); else


			if (state == 294 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 51); else


			if (state == 295 && item == Symbol::oper_dot)
				operation.override (ParseOperationType::reduce, 76); else


			if (state == 296 && item == Symbol::oper_assign)
				operation.override (ParseOperationType::shift, 95); else


			if (state == 296 && item == Symbol::oper_plus)
				operation.override (ParseOperationType::shift, 96); else


			if (state == 296 && item == Symbol::oper_minus)
				operation.override (ParseOperationType::shift, 97); else


			if (state == 296 && item == Symbol::oper_star)
				operation.override (ParseOperationType::shift, 98); else


			if (state == 296 && item == Symbol::oper_less_than)
				operation.override (ParseOperationType::shift, 99); else


			if (state == 296 && item == Symbol::nterm_any_operator)
				operation.override (ParseOperationType::go_to, 335); else


			if (state == 297 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 142); else


			if (state == 297 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 143); else


			if (state == 297 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 144); else


			if (state == 297 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 145); else


			if (state == 297 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 146); else


			if (state == 297 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 147); else


			if (state == 297 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 148); else


			if (state == 297 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 149); else


			if (state == 297 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 150); else


			if (state == 297 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 336); else


			if (state == 297 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 154); else


			if (state == 297 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 151); else


			if (state == 297 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 152); else


			if (state == 297 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 153); else


			if (state == 297 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 155); else


			if (state == 297 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 157); else


			if (state == 298 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 298 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 298 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 298 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 55); else


			if (state == 299 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 299 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 299 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 299 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 56); else


			if (state == 300 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 300 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 300 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 300 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 57); else


			if (state == 301 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 301 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 301 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 301 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 58); else


			if (state == 302 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 302 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 302 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 302 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 302 && item == Symbol::oper_union)
				operation.override (ParseOperationType::reduce, 1); else


			if (state == 303 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 303 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 303 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 303 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 81); else


			if (state == 303 && item == Symbol::oper_union)
				operation.override (ParseOperationType::shift, 337); else


			if (state == 304 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 338); else


			if (state == 304 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 339); else


			if (state == 304 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 75); else


			if (state == 304 && item == Symbol::statement_end)
				operation.override (ParseOperationType::shift, 340); else


			if (state == 304 && item == Symbol::nterm_paren_oper)
				operation.override (ParseOperationType::go_to, 341); else


			if (state == 304 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 342); else


			if (state == 305 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 305 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 305 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 305 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 45); else


			if (state == 306 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 306 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 306 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 306 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 46); else


			if (state == 307 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 307 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 307 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 307 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 47); else


			if (state == 308 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 308 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 308 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 308 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 48); else


			if (state == 309 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 309 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 309 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 309 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 49); else


			if (state == 310 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 37); else


			if (state == 311 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 311 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 311 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 311 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 54); else


			if (state == 312 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 312 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 312 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 312 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 313 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 313 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 313 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 313 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 314 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 51); else


			if (state == 314 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 51); else


			if (state == 314 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 51); else


			if (state == 314 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 51); else


			if (state == 315 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 343); else


			if (state == 316 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 316 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 316 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 317 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 317 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 317 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 318 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 318 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 318 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 319 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 344); else


			if (state == 320 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 274); else


			if (state == 320 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 275); else


			if (state == 320 && item == Symbol::lbrack)
				operation.override (ParseOperationType::shift, 345); else


			if (state == 320 && item == Symbol::nterm_paren_oper)
				operation.override (ParseOperationType::go_to, 277); else


			if (state == 320 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 278); else


			if (state == 321 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 321 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 321 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 321 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 322 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 322 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 322 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 322 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 323 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 51); else


			if (state == 323 && item == Symbol::lparen)
				operation.override (ParseOperationType::reduce, 51); else


			if (state == 323 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 51); else


			if (state == 323 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 51); else


			if (state == 324 && item == Symbol::lscope)
				operation.override (ParseOperationType::shift, 346); else


			if (state == 324 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::shift, 61); else


			if (state == 324 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::shift, 62); else


			if (state == 324 && item == Symbol::nterm_statement_list)
				operation.override (ParseOperationType::go_to, 347); else


			if (state == 324 && item == Symbol::nterm_just_if)
				operation.override (ParseOperationType::go_to, 64); else


			if (state == 324 && item == Symbol::nterm_if_else)
				operation.override (ParseOperationType::go_to, 65); else


			if (state == 324 && item == Symbol::nterm_open_while)
				operation.override (ParseOperationType::go_to, 66); else


			if (state == 324 && item == Symbol::nterm_closed_while)
				operation.override (ParseOperationType::go_to, 67); else


			if (state == 324 && item == Symbol::nterm_while_statement)
				operation.override (ParseOperationType::go_to, 68); else


			if (state == 324 && item == Symbol::nterm_vardef)
				operation.override (ParseOperationType::go_to, 69); else


			if (state == 325 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::reduce, 34); else


			if (state == 326 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::reduce, 14); else


			if (state == 327 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::reduce, 28); else


			if (state == 328 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::reduce, 27); else


			if (state == 329 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::reduce, 15); else


			if (state == 330 && item == Symbol::identifier)
				operation.override (ParseOperationType::shift, 348); else


			if (state == 331 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 192); else


			if (state == 331 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 193); else


			if (state == 331 && item == Symbol::identifier)
				operation.override (ParseOperationType::shift, 349); else


			if (state == 331 && item == Symbol::nterm_paren_oper)
				operation.override (ParseOperationType::go_to, 195); else


			if (state == 331 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 196); else


			if (state == 332 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::reduce, 30); else


			if (state == 333 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::reduce, 29); else


			if (state == 334 && item == Symbol::lscope)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 334 && item == Symbol::keyword_graphic)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 334 && item == Symbol::keyword_while)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 335 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 164); else


			if (state == 335 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 165); else


			if (state == 335 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 166); else


			if (state == 335 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 167); else


			if (state == 335 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 168); else


			if (state == 335 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 169); else


			if (state == 335 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 170); else


			if (state == 335 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 171); else


			if (state == 335 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 172); else


			if (state == 335 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 350); else


			if (state == 335 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 176); else


			if (state == 335 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 173); else


			if (state == 335 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 174); else


			if (state == 335 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 175); else


			if (state == 335 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 177); else


			if (state == 335 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 179); else


			if (state == 336 && item == Symbol::lbrack)
				operation.override (ParseOperationType::shift, 351); else


			if (state == 337 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 302); else


			if (state == 337 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 303); else


			if (state == 337 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 352); else


			if (state == 338 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 164); else


			if (state == 338 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 353); else


			if (state == 338 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 165); else


			if (state == 338 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 166); else


			if (state == 338 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 167); else


			if (state == 338 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 168); else


			if (state == 338 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 169); else


			if (state == 338 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 170); else


			if (state == 338 && item == Symbol::oper_assign)
				operation.override (ParseOperationType::shift, 95); else


			if (state == 338 && item == Symbol::oper_plus)
				operation.override (ParseOperationType::shift, 96); else


			if (state == 338 && item == Symbol::oper_minus)
				operation.override (ParseOperationType::shift, 97); else


			if (state == 338 && item == Symbol::oper_star)
				operation.override (ParseOperationType::shift, 98); else


			if (state == 338 && item == Symbol::oper_less_than)
				operation.override (ParseOperationType::shift, 99); else


			if (state == 338 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 171); else


			if (state == 338 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 172); else


			if (state == 338 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 354); else


			if (state == 338 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 176); else


			if (state == 338 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 173); else


			if (state == 338 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 174); else


			if (state == 338 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 175); else


			if (state == 338 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 177); else


			if (state == 338 && item == Symbol::nterm_any_operator)
				operation.override (ParseOperationType::go_to, 335); else


			if (state == 338 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 179); else


			if (state == 339 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 213); else


			if (state == 339 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 214); else


			if (state == 339 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 215); else


			if (state == 339 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 216); else


			if (state == 339 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 217); else


			if (state == 339 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 218); else


			if (state == 339 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 219); else


			if (state == 339 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 220); else


			if (state == 339 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 355); else


			if (state == 339 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 225); else


			if (state == 339 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 222); else


			if (state == 339 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 223); else


			if (state == 339 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 224); else


			if (state == 339 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 226); else


			if (state == 339 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 227); else


			if (state == 340 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 296); else


			if (state == 340 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 297); else


			if (state == 340 && item == Symbol::preprocessor_call)
				operation.override (ParseOperationType::shift, 298); else


			if (state == 340 && item == Symbol::constant_number)
				operation.override (ParseOperationType::shift, 299); else


			if (state == 340 && item == Symbol::literalized_number)
				operation.override (ParseOperationType::shift, 300); else


			if (state == 340 && item == Symbol::constant_float)
				operation.override (ParseOperationType::shift, 301); else


			if (state == 340 && item == Symbol::constant_text)
				operation.override (ParseOperationType::shift, 302); else


			if (state == 340 && item == Symbol::nterm_sid)
				operation.override (ParseOperationType::go_to, 303); else


			if (state == 340 && item == Symbol::nterm_one_call_arg)
				operation.override (ParseOperationType::go_to, 304); else


			if (state == 340 && item == Symbol::nterm_array_access)
				operation.override (ParseOperationType::go_to, 356); else


			if (state == 340 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 308); else


			if (state == 340 && item == Symbol::nterm_type)
				operation.override (ParseOperationType::go_to, 305); else


			if (state == 340 && item == Symbol::nterm_var_footprint)
				operation.override (ParseOperationType::go_to, 306); else


			if (state == 340 && item == Symbol::nterm_compound_type)
				operation.override (ParseOperationType::go_to, 307); else


			if (state == 340 && item == Symbol::nterm_basic_type)
				operation.override (ParseOperationType::go_to, 309); else


			if (state == 340 && item == Symbol::nterm_union)
				operation.override (ParseOperationType::go_to, 311); else


			if (state == 341 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 341 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 341 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 341 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 50); else


			if (state == 342 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 342 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 342 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 342 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 42); else


			if (state == 343 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 343 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 343 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 344 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 344 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 344 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 345 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 51); else


			if (state == 345 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 51); else


			if (state == 345 && item == Symbol::lbrack)
				operation.override (ParseOperationType::reduce, 51); else


			if (state == 346 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::reduce, 13); else


			if (state == 347 && item == Symbol::lscope)
				operation.override (ParseOperationType::shift, 357); else


			if (state == 348 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::reduce, 35); else


			if (state == 349 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::reduce, 36); else


			if (state == 350 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 358); else


			if (state == 351 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 351 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 351 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 351 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 52); else


			if (state == 352 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 352 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 352 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 352 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 80); else


			if (state == 353 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 353 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 353 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 353 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 41); else


			if (state == 354 && item == Symbol::lparen)
				operation.override (ParseOperationType::shift, 359); else


			if (state == 355 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::shift, 274); else


			if (state == 355 && item == Symbol::rscope)
				operation.override (ParseOperationType::shift, 275); else


			if (state == 355 && item == Symbol::lbrack)
				operation.override (ParseOperationType::shift, 360); else


			if (state == 355 && item == Symbol::nterm_paren_oper)
				operation.override (ParseOperationType::go_to, 277); else


			if (state == 355 && item == Symbol::nterm_access)
				operation.override (ParseOperationType::go_to, 278); else


			if (state == 356 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 74); else


			if (state == 357 && item == Symbol::keyword_if)
				operation.override (ParseOperationType::reduce, 12); else


			if (state == 358 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 358 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 358 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 358 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 53); else


			if (state == 359 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 359 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 359 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 359 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 40); else


			if (state == 360 && item == Symbol::null_symbol)
				operation.override (ParseOperationType::reduce, 51); else


			if (state == 360 && item == Symbol::rscope)
				operation.override (ParseOperationType::reduce, 51); else


			if (state == 360 && item == Symbol::identifier)
				operation.override (ParseOperationType::reduce, 51); else


			if (state == 360 && item == Symbol::statement_end)
				operation.override (ParseOperationType::reduce, 51); else


			operation.override (ParseOperationType::error, 0);

			return operation;
		}

		Symbol ParseHelper::____rule_symbol (Natural rule)
		{
			// --- Body ---
			switch (rule)
			{  // Third 
			case 0: return Symbol::nterm_start;
			case 1: return Symbol::nterm_sid;
			case 2: return Symbol::nterm_module_space;
			case 3: return Symbol::nterm_module_space;
			case 4: return Symbol::nterm_module_item;
			case 5: return Symbol::nterm_module_item;
			case 6: return Symbol::nterm_module;
			case 7: return Symbol::nterm_module;
			case 8: return Symbol::nterm_function;
			case 9: return Symbol::nterm_function;
			case 10: return Symbol::nterm_interface;
			case 11: return Symbol::nterm_shader;
			case 12: return Symbol::nterm_code;
			case 13: return Symbol::nterm_code;
			case 14: return Symbol::nterm_reg_if_tail;
			case 15: return Symbol::nterm_reg_if_tail;
			case 16: return Symbol::nterm_statement_list;
			case 17: return Symbol::nterm_statement_list;
			case 18: return Symbol::nterm_statement;
			case 19: return Symbol::nterm_if_statement;
			case 20: return Symbol::nterm_if_statement;
			case 21: return Symbol::nterm_just_if;
			case 22: return Symbol::nterm_just_if;
			case 23: return Symbol::nterm_just_if;
			case 24: return Symbol::nterm_just_if;
			case 25: return Symbol::nterm_just_if;
			case 26: return Symbol::nterm_if_else;
			case 27: return Symbol::nterm_if_else;
			case 28: return Symbol::nterm_if_else;
			case 29: return Symbol::nterm_if_else;
			case 30: return Symbol::nterm_if_else;
			case 31: return Symbol::nterm_open_while;
			case 32: return Symbol::nterm_closed_while;
			case 33: return Symbol::nterm_while_statement;
			case 34: return Symbol::nterm_non_scoped_statement;
			case 35: return Symbol::nterm_non_scoped_statement;
			case 36: return Symbol::nterm_non_scoped_statement;
			case 37: return Symbol::nterm_vardef;
			case 38: return Symbol::nterm_def_args;
			case 39: return Symbol::nterm_def_args;
			case 40: return Symbol::nterm_call_args;
			case 41: return Symbol::nterm_call_args;
			case 42: return Symbol::nterm_call_args;
			case 43: return Symbol::nterm_one_call_arg;
			case 44: return Symbol::nterm_one_call_arg;
			case 45: return Symbol::nterm_item;
			case 46: return Symbol::nterm_item;
			case 47: return Symbol::nterm_item;
			case 48: return Symbol::nterm_item;
			case 49: return Symbol::nterm_item;
			case 50: return Symbol::nterm_call_item;
			case 51: return Symbol::nterm_array_access;
			case 52: return Symbol::nterm_array;
			case 53: return Symbol::nterm_paren_oper;
			case 54: return Symbol::nterm_access;
			case 55: return Symbol::nterm_item;
			case 56: return Symbol::nterm_item;
			case 57: return Symbol::nterm_item;
			case 58: return Symbol::nterm_item;
			case 59: return Symbol::nterm_type;
			case 60: return Symbol::nterm_type;
			case 61: return Symbol::nterm_var_footprint;
			case 62: return Symbol::nterm_compound_type;
			case 63: return Symbol::nterm_basic_type;
			case 64: return Symbol::nterm_basic_type;
			case 65: return Symbol::nterm_basic_type;
			case 66: return Symbol::nterm_basic_type;
			case 67: return Symbol::nterm_basic_type;
			case 68: return Symbol::nterm_basic_type;
			case 69: return Symbol::nterm_any_operator;
			case 70: return Symbol::nterm_any_operator;
			case 71: return Symbol::nterm_any_operator;
			case 72: return Symbol::nterm_any_operator;
			case 73: return Symbol::nterm_any_operator;
			case 74: return Symbol::nterm_union;
			case 75: return Symbol::nterm_union;
			case 76: return Symbol::nterm_sid_union;
			case 77: return Symbol::nterm_sid_union;
			case 78: return Symbol::nterm_def_union;
			case 79: return Symbol::nterm_def_union;
			case 80: return Symbol::nterm_location;
			case 81: return Symbol::nterm_location;

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

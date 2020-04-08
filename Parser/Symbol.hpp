# pragma once

# include <Lexer/Lexeme.hpp>


namespace Alton
{
	namespace Parser
	{
		enum Symbol
		{
			null_symbol,
			keyword_var,
			keyword_constant,
			keyword_return,
			keyword_import,
			keyword_operation,
			keyword_function,
			keyword_for,
			keyword_if,
			keyword_while,
			keyword_try,
			keyword_check,
			keyword_raise,
			keyword__ZisisntZeFamousEisterEg__,
			keyword_segment,
			keyword_goto,
			oper_plus,
			oper_plus_plus,
			oper_plus_assign,
			oper_minus,
			oper_mius_minus,
			oper_minus_assign,
			oper_star,
			oper_star_assign,
			oper_star_star,
			oper_star_star_assign,
			oper_slash,
			oper_slash_assign,
			oper_slash_slash,
			oper_slash_slash_assign,
			oper_percent,
			oper_percent_assign,
			oper_bit_left_shift,
			oper_bit_left_shift_assign,
			oper_bit_right_shift,
			oper_bit_right_shift_assign,
			oper_bit_and,
			oper_bit_and_assign,
			oper_bit_or,
			oper_bit_or_assign,
			oper_bit_xor,
			oper_bit_xor_assign,
			oper_equal,
			oper_not_equal,
			oper_not,
			oper_more_than,
			oper_more_than_equal,
			oper_less_than,
			oper_less_than_equal,
			oper_or,
			oper_and,
			oper_assign,
			oper_member_access,
			oper_union,
			statement_end,
			paranthesis_miniscope_opening,
			paranthesis_miniscope_closing,
			round_bracket_miniscope_opening,
			round_bracket_miniscope_closing,
			square_bracket_miniscope_opening,
			square_bracket_miniscope_closing,
			indent,
			outdent,
			constant_number,
			constant_float,
			constant_text,
			identifier,
			do_block,
			
			nterm_start,
			nterm_do_block_code,
			nterm_function,
			nterm_func_argument,
			nterm_func_arguments,
			nterm_call_arguments,
			nterm_do_block_keyword,
			nterm_statement,
			nterm_substatement,
			nterm_mini_statement,
			nterm_do_block,
			nterm_variable_definition,
			nterm_import_statement,
			nterm_member_appendix,
			nterm_member,
			nterm_union,
			nterm_array,
			nterm_call_statement,
			nterm_segment,
			nterm_segment_call,
			nterm_operation,
			nterm_comparing_operation,
			nterm_or_and_oper,
			nterm_equal_not_equal_oper,
			nterm_lesser_greater_oper,
			nterm_not_oper,
			nterm_arithmetic_operation,
			nterm_summarizing_oper,
			nterm_multiplying_oper,
			nterm_modulating_oper,
			nterm_powering_oper,
			nterm_increment_decrement_oper,
			nterm_binary_arithmetic_operation,
			nterm_shift_oper,
			nterm_bitwise_oper,
			
			// Not a Symbol
			count
		};

		/**
		 * BRIEF: Converts a lexing Token to a parsing Symbol
		 * NOTE:
			It's safe to cast a Token into a Symbol; since
			both enumerations contain identical values until
			Token::count, whom use is disallowed. Using a
			switch-case or a series of "if" statements
			would make the process extremely slow and painstaking to
			to debug.

	 * TODO:
			Check for invalid tokens and raise a Clinic::
			Exceptions::InternalMathDomainException(). Currently
			useless.
		*/
		Symbol token_to_symbol(const Lexer::Token &in);
	}
}
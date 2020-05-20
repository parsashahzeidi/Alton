# pragma once

# include <Lexer/Lexeme.hpp>


namespace Alton
{
	namespace Parser
	{
		enum Symbol
		{
			null_symbol = 0,  // #0
			lparen,  // #1
			rparen,  // #2
			lscope,  // #3
			rscope,  // #4
			lbrack,  // #5
			rbrack,  // #6
			preprocessor_call,  // #7
			constant_number,  // #8
			literalized_number,  // #9
			constant_float,  // #10
			constant_text,  // #11
			identifier,  // #12
			statement_end,  // #13
			oper_union,  // #14
			oper_dot,  // #15
			oper_assign,  // #16
			oper_plus,  // #17
			oper_minus,  // #18
			oper_star,  // #19
			oper_less_than,  // #20
			oper_greater_than_equal,  // #21
			keyword_shader,  // #22
			keyword_float,  // #23
			keyword_bool,  // #24
			keyword_void,  // #25
			keyword_int,  // #26
			keyword_nat,  // #27
			keyword_graphic,  // #28
			keyword_while,  // #29
			keyword_if,  // #30
			keyword_else,  // #31
			nterm_start,  // #32
			nterm_sid,  // #33
			nterm_module_space,  // #34
			nterm_module_item,  // #35
			nterm_module,  // #36
			nterm_function,  // #37
			nterm_interface,  // #38
			nterm_shader,  // #39
			nterm_code,  // #40
			nterm_reg_if_tail,  // #41
			nterm_statement_list,  // #42
			nterm_statement,  // #43
			nterm_if_statement,  // #44
			nterm_just_if,  // #45
			nterm_if_else,  // #46
			nterm_open_while,  // #47
			nterm_closed_while,  // #48
			nterm_while_statement,  // #49
			nterm_non_scoped_statement,  // #50
			nterm_vardef,  // #51
			nterm_def_args,  // #52
			nterm_call_args,  // #53
			nterm_one_call_arg,  // #54
			nterm_item,  // #55
			nterm_call_item,  // #56
			nterm_array_access,  // #57
			nterm_array,  // #58
			nterm_paren_oper,  // #59
			nterm_access,  // #60
			nterm_type,  // #61
			nterm_var_footprint,  // #62
			nterm_compound_type,  // #63
			nterm_basic_type,  // #64
			nterm_any_operator,  // #65
			nterm_union,  // #66
			nterm_sid_union,  // #67
			nterm_def_union,  // #68
			nterm_location,  // #69
			
			ending = -1,  // #-1
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

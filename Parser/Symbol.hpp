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
			oper_plus_assign,  // #17
			oper_minus_assign,  // #18
			oper_star_assign,  // #19
			oper_slash_assign,  // #20
			oper_percent_assign,  // #21
			oper_left_left_assign,  // #22
			oper_right_right_assign,  // #23
			oper_accent_assign,  // #24
			oper_stand_assign,  // #25
			oper_ampersand_assign,  // #26
			oper_plus,  // #27
			oper_minus,  // #28
			oper_star,  // #29
			oper_slash,  // #30
			oper_percent,  // #31
			oper_left_left,  // #32
			oper_right_right,  // #33
			oper_accent,  // #34
			oper_stand,  // #35
			oper_ampersand,  // #36
			oper_plus_plus,  // #37
			oper_minus_minus,  // #38
			oper_ampersand_ampersand,  // #39
			oper_stand_stand,  // #40
			oper_equal,  // #41
			oper_not_equal,  // #42
			oper_less_than,  // #43
			oper_less_than_equal,  // #44
			oper_greater_than,  // #45
			oper_greater_than_equal,  // #46
			keyword_shader,  // #47
			keyword_float,  // #48
			keyword_bool,  // #49
			keyword_void,  // #50
			keyword_int,  // #51
			keyword_nat,  // #52
			keyword_graphic,  // #53
			keyword_while,  // #54
			keyword_if,  // #55
			keyword_else,  // #56
			nterm_start,  // #57
			nterm_module_space,  // #58
			nterm_module_item,  // #59
			nterm_module,  // #60
			nterm_function,  // #61
			nterm_interface,  // #62
			nterm_shader,  // #63
			nterm_code,  // #64
			nterm_reg_if_tail,  // #65
			nterm_statement_list,  // #66
			nterm_statement,  // #67
			nterm_if_statement,  // #68
			nterm_just_if,  // #69
			nterm_if_else,  // #70
			nterm_open_while,  // #71
			nterm_closed_while,  // #72
			nterm_non_scoped_statement,  // #73
			nterm_vardef,  // #74
			nterm_def_args,  // #75
			nterm_call_args,  // #76
			nterm_one_call_arg,  // #77
			nterm_lvalue,  // #78
			nterm_call_item,  // #79
			nterm_array_access,  // #80
			nterm_array,  // #81
			nterm_paren_oper,  // #82
			nterm_rvalue,  // #83
			nterm_type,  // #84
			nterm_var_footprint,  // #85
			nterm_compound_type,  // #86
			nterm_basic_type,  // #87
			nterm_any_operator,  // #88
			nterm_item,  // #89
			nterm_p11_operation,  // #90
			nterm_p10_operation,  // #91
			nterm_p9_operation,  // #92
			nterm_p8_operation,  // #93
			nterm_p7_operation,  // #94
			nterm_p6_operation,  // #95
			nterm_p5_operation,  // #96
			nterm_p4_operation,  // #97
			nterm_p3_operation,  // #98
			nterm_p2_operation,  // #99
			nterm_p1_operation,  // #100
			nterm_union,  // #101
			nterm_identifier_union,  // #102
			nterm_def_union,  // #103
			nterm_location,  // #104
			
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

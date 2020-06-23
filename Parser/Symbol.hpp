# pragma once

# include <Lexer/Lexeme.hpp>


namespace Alton
{
	namespace Parser
	{
		enum Symbol
		{
			null_symbol = 0,  // #0
			fakelparen,  // #1
			lparen,  // #2
			rparen,  // #3
			lscope,  // #4
			rscope,  // #5
			lbrack,  // #6
			rbrack,  // #7
			preprocessor_call,  // #8
			constant_number,  // #9
			literalized_number,  // #10
			constant_float,  // #11
			constant_text,  // #12
			identifier,  // #13
			statement_end,  // #14
			oper_union,  // #15
			oper_dot,  // #16
			oper_colon,  // #17
			oper_assign,  // #18
			oper_plus_assign,  // #19
			oper_minus_assign,  // #20
			oper_star_assign,  // #21
			oper_slash_assign,  // #22
			oper_percent_assign,  // #23
			oper_left_left_assign,  // #24
			oper_right_right_assign,  // #25
			oper_accent_assign,  // #26
			oper_stand_assign,  // #27
			oper_ampersand_assign,  // #28
			oper_plus,  // #29
			oper_minus,  // #30
			oper_star,  // #31
			oper_slash,  // #32
			oper_percent,  // #33
			oper_left_left,  // #34
			oper_right_right,  // #35
			oper_accent,  // #36
			oper_stand,  // #37
			oper_ampersand,  // #38
			oper_plus_plus,  // #39
			oper_minus_minus,  // #40
			oper_ampersand_ampersand,  // #41
			oper_stand_stand,  // #42
			oper_equal,  // #43
			oper_not_equal,  // #44
			oper_less_than,  // #45
			oper_less_than_equal,  // #46
			oper_greater_than,  // #47
			oper_greater_than_equal,  // #48
			keyword_shader,  // #49
			keyword_float,  // #50
			keyword_bool,  // #51
			keyword_void,  // #52
			keyword_int,  // #53
			keyword_nat,  // #54
			keyword_var,  // #55
			keyword_goto,  // #56
			keyword_seg,  // #57
			keyword_graphic,  // #58
			keyword_interface,  // #59
			keyword_while,  // #60
			keyword_if,  // #61
			keyword_else,  // #62
			keyword_underscore,  // #63
			nterm_start,  // #64
			nterm_module_space,  // #65
			nterm_module_item,  // #66
			nterm_interface,  // #67
			nterm_declare,  // #68
			nterm_type,  // #69
			nterm_defargs,  // #70
			nterm_defunion,  // #71
			nterm_defassignunion,  // #72
			nterm_lval,  // #73
			nterm_item,  // #74
			nterm_rval,  // #75
			nterm_single_arg,  // #76
			nterm_paren_oper,  // #77
			nterm_any_oper,  // #78
			nterm_fakecall,  // #79
			nterm_fakecall_union,  // #80
			nterm_call_item,  // #81
			nterm_union,  // #82
			nterm_array_access,  // #83
			nterm_array,  // #84
			nterm_location,  // #85
			nterm_code,  // #86
			nterm_stmtunion,  // #87
			nterm_stmt,  // #88
			nterm_simple_stmt,  // #89
			nterm_goto_stmt,  // #90
			nterm_seg_stmt,  // #91
			nterm_vardef,  // #92
			nterm_declare_union,  // #93
			nterm_sid_union,  // #94
			nterm_assign,  // #95
			nterm_assign_oper,  // #96
			nterm_if,  // #97
			nterm_if_else,  // #98
			nterm_shader,  // #99
			nterm_module,  // #100
			
			// I can't bother to add a number to this, just add 1 to the last
			//	number.
			ending,
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

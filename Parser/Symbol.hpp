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
			oper_colon,  // #16
			oper_assign,  // #17
			oper_plus_assign,  // #18
			oper_minus_assign,  // #19
			oper_star_assign,  // #20
			oper_slash_assign,  // #21
			oper_percent_assign,  // #22
			oper_left_left_assign,  // #23
			oper_right_right_assign,  // #24
			oper_accent_assign,  // #25
			oper_stand_assign,  // #26
			oper_ampersand_assign,  // #27
			oper_plus,  // #28
			oper_minus,  // #29
			oper_star,  // #30
			oper_slash,  // #31
			oper_percent,  // #32
			oper_left_left,  // #33
			oper_right_right,  // #34
			oper_accent,  // #35
			oper_stand,  // #36
			oper_ampersand,  // #37
			oper_plus_plus,  // #38
			oper_minus_minus,  // #39
			oper_ampersand_ampersand,  // #40
			oper_stand_stand,  // #41
			oper_equal,  // #42
			oper_not_equal,  // #43
			oper_less_than,  // #44
			oper_less_than_equal,  // #45
			oper_greater_than,  // #46
			oper_greater_than_equal,  // #47
			keyword_shader,  // #48
			keyword_float,  // #49
			keyword_bool,  // #50
			keyword_void,  // #51
			keyword_int,  // #52
			keyword_nat,  // #53
			keyword_var,  // #54
			keyword_goto,  // #55
			keyword_seg,  // #56
			keyword_graphic,  // #57
			keyword_interface,  // #58
			keyword_while,  // #59
			keyword_if,  // #60
			keyword_else,  // #61
			keyword_underscore,  // #62
			nterm_start,  // #63
			nterm_module_space,  // #64
			nterm_module_item,  // #65
			nterm_interface,  // #66
			nterm_declare,  // #67
			nterm_type,  // #68
			nterm_defargs,  // #69
			nterm_defunion,  // #70
			nterm_defassignunion,  // #71
			nterm_item,  // #72
			nterm_paren_oper,  // #73
			nterm_any_oper,  // #74
			nterm_union,  // #75
			nterm_call_item,  // #76
			nterm_array_access,  // #77
			nterm_array,  // #78
			nterm_location,  // #79
			nterm_code,  // #80
			nterm_stmtunion,  // #81
			nterm_stmt,  // #82
			nterm_simple_stmt,  // #83
			nterm_goto_stmt,  // #84
			nterm_seg_stmt,  // #85
			nterm_vardef,  // #86
			nterm_if,  // #87
			nterm_single_arg,  // #88
			nterm_if_else,  // #89
			nterm_shader,  // #90
			nterm_module,  // #91
			
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

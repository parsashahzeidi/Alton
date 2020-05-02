# pragma once

# include <Lexer/Lexeme.hpp>


namespace Alton
{
	namespace Parser
	{
		enum Symbol
		{
			null_symbol = 0,  // #0
			paranthesis_miniscope_opening,  // #1
			paranthesis_miniscope_closing,  // #2
			round_bracket_miniscope_opening,  // #3
			round_bracket_miniscope_closing,  // #4
			square_bracket_miniscope_opening,  // #5
			square_bracket_miniscope_closing,  // #6
			constant_number,  // #7
			literalized_number,  // #8
			constant_float,  // #9
			constant_text,  // #10
			identifier,  // #11
			statement_end,  // #12
			oper_arrow,  // #13
			nterm_start,  // #14
			nterm_grammar_list,  // #15
			nterm_grammar,  // #16
			nterm_product,  // #17
			
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

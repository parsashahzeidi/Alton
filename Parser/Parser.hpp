/** NOTE: This file is synthesized by /Path/To/Alton/Parser/_Generation/ParserGenerator.py. */
# pragma once

# include <ETC/BareboneMacros.hpp>
# include <Parser/ParseHelper.hpp> 
# include <Lexer/Lexeme.hpp>
# include <Lexer/Tokens.hpp>
# include <Parser/ParserState.hpp>


namespace Alton
{
	namespace Parser
	{
		class Parser
		{
			// --- Head
		private:
			ParseHelper h;

		public:

			// --- Body
		private:
			// -- __can_advance statements, First 
			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_start();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_do_block_code();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_function();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_func_argument();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_func_arguments();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_call_arguments();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_do_block_keyword();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_statement();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_substatement();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_mini_statement();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_do_block();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_variable_definition();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_import_statement();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_member_appendix();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_member();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_union();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_array();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_call_statement();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_segment();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_segment_call();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_operation();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_comparing_operation();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_or_and_oper();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_equal_not_equal_oper();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_lesser_greater_oper();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_not_oper();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_arithmetic_operation();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_summarizing_oper();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_multiplying_oper();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_modulating_oper();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_powering_oper();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_increment_decrement_oper();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_binary_arithmetic_operation();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_shift_oper();

			/**
			 * BRIEF: Checks if a specific non-terminal can be advanced thru
			
			 * RETURN: A Boolean
			*/
			bool __can_advance_nterm_bitwise_oper();


			// -- _nterm statements, Second 
			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_start();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_do_block_code();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_function();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_func_argument();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_func_arguments();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_call_arguments();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_do_block_keyword();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_statement();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_substatement();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_mini_statement();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_do_block();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_variable_definition();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_import_statement();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_member_appendix();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_member();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_union();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_array();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_call_statement();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_segment();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_segment_call();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_operation();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_comparing_operation();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_or_and_oper();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_equal_not_equal_oper();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_lesser_greater_oper();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_not_oper();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_arithmetic_operation();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_summarizing_oper();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_multiplying_oper();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_modulating_oper();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_powering_oper();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_increment_decrement_oper();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_binary_arithmetic_operation();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_shift_oper();

			/**
			 * BRIEF: Parsing a non-terminal Symbol with a recursive-predictive algorithm
			
			 * RETURN: A Parse Tree.
			*/
			ParseTree _nterm_bitwise_oper();


		public:
			/**
			 * BRIEF: Checks for a valid header
			*/
			void _validate_header();

			/**
			 * BRIEF: Parses a list of lexemes.
			
			 * RETURN: A list of statements.
			*/
			ParseTree parse();

			// --- CTOR ~ DTOR
		public:
			// -- CTORs
			Parser();

			Parser(Lexer::LexemeList &in);

			// -- DTOR
			~Parser();
		};
	}
}
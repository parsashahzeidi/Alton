/** NOTE: This file is synthesized by /Path/To/Alton/Parser/_Generation/ParserGenerator.py. */
# pragma once

# include <ETC/BareboneMacros.hpp>
# include <Parser/ParseHelper.hpp>
# include <Lexer/Lexeme.hpp>
# include <Lexer/Tokens.hpp>
# include <Parser/ParseState.hpp>
# include <Parser/ParseOperation.hpp>
# include <Parser/ParseOperationType.hpp>


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
			/**
			 * BRIEF: Performs the shift operation
			*/
			void ___shift(Natural state);

			/**
			 * BRIEF: Performs the reduce and go to operation on a specific rule.
			 * PARAM: rule The rule!
			*/
			void ___reduce(Natural rule);

			/**
			 * BRIEF: Applies a parse operation.
			 * PARAM: oper The operation to apply
			*/
			void __apply_operation (ParseOperation oper);

			/**
			 * BRIEF: Finds the next operation
			 * RETURN: A ParseOperation.
			 */
			ParseOperation __find_next_operation ();

			/**
			 * BRIEF: Performs the LR(1) parsing loop proceedure.
			 * RETURN: A Parse Tree
			*/
			ParseTree _lr1_loop();

			/**
			 * BRIEF: Performs a CLR iteration proceedure
			 */
			void _lr1_iterate();

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

			/**
			 * BRIEF: Prints the parse tree.
			 * PARAM: in The parse tree to print.

			 * NOTE: This function is recursive.
			 */
			void print_tree (ParseTree in);


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

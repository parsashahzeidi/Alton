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
			// -- __can_advance statements, First %s

			// -- _nterm statements, Second %s

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
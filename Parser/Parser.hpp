/** NOTE: This file is synthesized by /Path/To/Alton/Parser/_Generation/ParserGenerator.py. */
# pragma once

# include <ETC/BareboneMacros.hpp>
# include <Parser/ParseHelper.hpp>
# include <Lexer/Lexeme.hpp>
# include <Lexer/Tokens.hpp>
# include <Parser/AST/NamespaceInternals.hpp>


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
		public:
			/**
			 * BRIEF: Checks for a valid header
			*/
			void _validate_header();

			/**
			 * BRIEF: Parses a list of lexemes.

			 * RETURN: A list of statements.
			*/
			AST::NamespaceInternals parse();

			/**
			 * BRIEF: Parses interface interenals in recursive descent fashion.

			 * RETURN: A Parse tree.
			 */
			 AST::NamespaceInternals parse_namespace_internals ();

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

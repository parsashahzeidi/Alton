# pragma once

# include <ETC/BareboneMacros.hpp>
# include <Types/BaseHelper.hpp>

# include <Lexer/Lexeme.hpp>
# include <Lexer/Tokens.hpp>

# include <Lexer/Tokens.hpp>

// TODO: # include <Parser/AST/Function.hpp>
// TODO: # include <Parser/AST/Configuration.hpp>

namespace Alton
{
	namespace Parser
	{
		class ParseHelper: public BaseHelper<Lexer::Lexeme, Lexer::LexemeList, false>
		{
			// --- Head
		private:

		public:
			// -- The functions that are finally parsed.
			// TODO: Container <Function *> functions;
			// TODO: Container <Configuration> configurations;

			// --- Body
		public:
			/**
			 * BRIEF: Advances a symbol thru the code if it is the expected
				symbol, errors otherwise
			 * PARAM: in The expected symbol
			 * TODO: add PARAM: error The error to raise if the symbol
				wasn't expected
			 */
			Text advance (const Lexer::Token &in);

			/**
			 * BRIEF: Checks the equality of curr (0) and the input symbol
			 * PARAM: in The symbol to check

			 * RETURN: A Boolean
			 */
			bool can_expect (const Lexer::Token &in);

			/**
			 * BRIEF: Checks if atleast one of the symbols inputted is equal to
				curr (0)
			 * PARAM: count The count of the arguments passed
			 * PARAM: ... an expandable variable pack of type int and of size
				count

			 * RETURN: A boolean
			 */
			bool can_expect (Natural count, ...);

			// --- CTOR ~ DTOR
		public:
			ParseHelper () = delete;

			// CTORs
			ParseHelper (const Lexer::LexemeList &in);

			// DTOR
			~ParseHelper ();
		};
	}
}

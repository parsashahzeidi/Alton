# pragma once

# include <ETC/BareboneMacros.hpp>
# include <Types/BaseHelper.hpp>

# include <Lexer/Lexeme.hpp>
# include <Lexer/Tokens.hpp>

# include <Parser/AlfieRunData.hpp>
# include <Parser/Symbol.hpp>
# include <Parser/ParsingNode.hpp>


namespace Alton
{
	namespace Parser
	{
		class ParseHelper: public BaseHelper<ParsingNode, LinearParse, false>
		{
			// --- Head
		public:
			AlfieRunData data;

			// --- Body
		public:
			/**
			 * BRIEF: Checks if a Symbol is also a terminal
			*/
			bool _symbol_is_term(const Symbol &in);

			/**
			 * BRIEF: Checks if a specific Symbol is acceptable
			 * PARAM: in The symbol to use
			 * PARAM: index Lookahead amount
			*/
			bool _accept(Symbol in, Natural index);

			/**
			 * BRIEF: Forces acceptance of a symbol.
			 * PARAM: in The symbol to use
			 * PARAM: tree The tree to push the symbol towards
			 * PARAM: ex The exception to raise if the function can't force the symbol
			
			 * NOTE: Lookahead is always set to 0 when using _force_accept.
			*/
			void _force_accept(Symbol in, ParseTree &tree, Clinic::Exceptions::BaseSyntaxException ex = Clinic::Exceptions::UnrecognisedSyntaxException());

			// --- CTOR ~ DTOR
		public:
			ParseHelper() = delete;

			// CTORs
			ParseHelper(LinearParse in);

			// DTOR
			~ParseHelper();
		};
	}
}
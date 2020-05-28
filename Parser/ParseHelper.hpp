# pragma once

# include <ETC/BareboneMacros.hpp>
# include <Types/BaseHelper.hpp>

# include <Lexer/Lexeme.hpp>
# include <Lexer/Tokens.hpp>

# include <Parser/AlfieRunData.hpp>
# include <Parser/Symbol.hpp>
# include <Parser/ParsingNode.hpp>
# include <Parser/ParseOperation.hpp>
# include <Parser/ParseTable.hpp>
# include <Parser/ParseState.hpp>
# include <Parser/ParseRule.hpp>


namespace Alton
{
	namespace Parser
	{
		class ParseHelper: public BaseHelper<ParsingNode, LinearParse, false>
		{
			// --- Head
		public:
			AlfieRunData data;
			Container<ParseState> stack;
			ParseTree result;

			ParseTable table;
			Container <ParseRule> rules;

			// --- Body
		public:
			/**
			 * BRIEF: Initializes a constant parse table
			 */
			void initialize_parse_table ();

			/**
			 * BRIEF: Initializes a list containing rule lists
			 */
			void initialize_rules ();

			/**
			 * BRIEF: Checks if a Symbol is a terminal
			*/
			bool _symbol_is_term (const Symbol &in);

			// --- CTOR ~ DTOR
		public:
			ParseHelper () = delete;

			// CTORs
			ParseHelper (const LinearParse &in);

			// DTOR
			~ParseHelper ();
		};
	}
}

# pragma once

# include <ETC/BareboneMacros.hpp>
# include <Types/BaseHelper.hpp>

# include <Lexer/Lexeme.hpp>
# include <Lexer/Tokens.hpp>

# include <Parser/AlfieRunData.hpp>
# include <Parser/Symbol.hpp>
# include <Parser/ParsingNode.hpp>
# include <Parser/ParseOperation.hpp>
# include <Parser/ParseState.hpp>


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

			// --- Body
		public:
			/**
			 * BRIEF: Returns a specific parsing operation from the table
			 * PARAM: state the table row
			 * PARAM: item the table collumn
			 *
			 * RETURN: A Parsing Operation
			*/
			ParseOperation __get_table_item (Natural state, Symbol item);

			/**
			 * BRIEF: The nterm_start in `start -> expr`
			 * PARAM: rule the rule

			 * RETURN: A symbol
			 */
			Symbol ____rule_symbol (Natural rule);

			/**
			 * BRIEF: Returns the length of a rule.
			 * PARAM: rule The rue number.

			 * RETURN: A Natural number.
			 */
			Natural ____get_rule_size (Natural rule);

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

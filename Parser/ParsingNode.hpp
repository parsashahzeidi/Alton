# pragma once

# include <ETC/BareboneMacros.hpp>
# include <Types/BaseContainer.hpp>
# include <Types/BaseTreeContainer.hpp>

# include <Lexer/Lexeme.hpp>
# include <Parser/Symbol.hpp>


namespace Alton
{
	namespace Parser
	{
		struct ParsingNode
		{
			Symbol symbol_type = Symbol::null_symbol;
			Natural position_in_code = 0;
			Text enumeration = U"";

			// --- CTORs
			ParsingNode(Lexer::Lexeme in)
			{
				enumeration = in.enumeration;
				position_in_code = in.position_in_code;
				symbol_type = token_to_symbol(in.token_type);
			}

			ParsingNode()
			{ }

			// --- DTORs
			~ParsingNode()
			{ }
		};
		using LinearParse = Container<ParsingNode>;
		using ParseTree = Tree<ParsingNode>;
	} // namespace Parser
} // namespace Alton

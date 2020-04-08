

# include <Parser/ParseHelper.hpp>

namespace Alton
{
	namespace Parser
	{
		bool ParseHelper::_symbol_is_term(const Symbol &in)
		{
			return in < token_to_symbol(Lexer::Token::count);
		}

		bool ParseHelper::_accept(Symbol in, Natural index)
		{
			return curr(index).symbol_type == in;
		}

		void ParseHelper::_force_accept(Symbol in, ParseTree &tree, Clinic::Exceptions::BaseSyntaxException ex)
		{
			if (_accept(in, 0))
			{
				tree.list.push_back(curr(0));
				virtually_advance();
			}
			
			else
				Clinic::raise_pos
				(
					ex, curr(0).position_in_code
				);
		}

		// --- CTOR ~ DTOR
		// CTORs
		ParseHelper::ParseHelper(LinearParse in):
			BaseHelper(in)
		{ }

		// DTOR
		ParseHelper::~ParseHelper()
		{ }
	}
}
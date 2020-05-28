# include <Parser/ParseHelper.hpp>


namespace Alton
{
	namespace Parser
	{
		bool ParseHelper::_symbol_is_term(const Symbol &in)
		{
			return in < token_to_symbol(Lexer::Token::count);
		}

		// --- CTOR ~ DTOR
		// -- CTORs
		ParseHelper::ParseHelper(const LinearParse &in):
				BaseHelper(in)
		{
			result.item.symbol_type = Symbol::nterm_start;
			result.item.position_in_code = 0;
			stack.push_back (ParseState (0, 0));

			initialize_parse_table ();
			initialize_rules ();
		}

		// -- DTOR
		ParseHelper::~ParseHelper()
		{ }
	}
}

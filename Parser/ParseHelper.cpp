# include <Parser/ParseHelper.hpp>


namespace Alton
{
	namespace Parser
	{
		// --- Body
		bool ParseHelper::can_expect (Natural count, ...)
		{
			// --- Head ---
			va_list symbols;
			const Lexer::Token expectable = curr (0).token_type;
			Lexer::Token expecting;

			// --- Body ---
			// -- Initializing the argument list --
			va_start (symbols, count);

			// -- Iterating thru arguments --
			for (size_t _ = 0; _ < count; _++)
			{
				// - Declaring what we're expecting -
				// NOTE: The va_arg directive passes objects smaller than int as
				//	int, and the size of Lexer::Token is variable, since it's
				//	generated using non-C++ code.
				//	Here, the cast to symbol is necessary to suspress a compiler
				//	warning that mentions:
				//		error: second argument to 'va_arg' is of promotable type
				//		'Alton::Parser::Lexer::Token'; this va_arg has undefined
				//		behavior because arguments will be promoted to 'int'
				expecting = Lexer::Token (va_arg (symbols, int));

				if (expecting == expectable)
					return true;
			}
			va_end (symbols);

			// -- Didn't find anything --
			return false;
		}

		bool ParseHelper::can_expect (const Lexer::Token &expecting)
		{
			// --- Head ---
			const Lexer::Token expectable = curr (0).token_type;

			// --- Body ---
			if (expecting == expectable)
				return true;
			else return false;
		}

		Text ParseHelper::advance (const Lexer::Token &in)
		{
			// --- Head ---
			Text value = curr (0).enumeration;

			// --- Body ---
			if (can_expect (in))
				virtually_advance ();

			else
				Clinic::raise_pos
				(
					Clinic::Exceptions::UnrecognisedSyntaxException (),
					curr (0).position_in_code
				);

			return value;
		}

		// --- CTOR ~ DTOR
		// -- CTORs
		ParseHelper::ParseHelper(const Lexer::LexemeList &in):
				BaseHelper(in)
		{ }

		// -- DTOR
		ParseHelper::~ParseHelper()
		{ }
	}
}

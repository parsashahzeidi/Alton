

# include <Lexer/LexemeHelper.hpp>


namespace Alton
{
	namespace Lexer
	{
		void LexemeHelper::__append(Lexeme &in)
		{
			// Checking if 'in' is a null_token lexeme
			if (in.token_type == Token::null_token)
				Clinic::raise_internal
				(
					Clinic::Exceptions::PlaceHolderTokenException(),
					__FILE__, __LINE__
				);

			tokenized.push_back(in);
		}

		bool LexemeHelper::___char_is_a_number(Character in)
		{
			return in <= '9' && in >= '0';
		}

		bool LexemeHelper::___char_is_in_english(Character in)
		{
			return (in >= 'a' && in <= 'z') ||
					(in >= 'A' && in <= 'Z') ||
					in == '_';
		}

		bool LexemeHelper::___char_is_an_identifier(Character in)
		{
			return ___char_is_a_number(in) || ___char_is_in_english(in);
		}

		Character LexemeHelper::_find_potential_scope_closing(Character in)
		{
			switch (in)
			{
			case U'{':
				return U'}';
			case U'[':
				return U']';
			case U'(':
				return U')';
			
			default:
				return U'\0';
			}
		}
		
		Character LexemeHelper::_find_potential_scope_opening(Character in)
		{
			switch (in)
			{
			case U'}':
				return U'{';
			case U']':
				return U'[';
			case U')':
				return U'(';
			
			default:
				return U'\0';
			}
		}

		void LexemeHelper::virtually_advance(Number i)
		{
			_require_operation();

			it += i;

			if (it >= out.size())
				_exit_operation();
		}

		// --- CTOR ~ DTOR
		LexemeHelper::LexemeHelper(Text code):
				BaseHelper(code)
		{
			previous_dents.push_back(0);
		}
	}
}

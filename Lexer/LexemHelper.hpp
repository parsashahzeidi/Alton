# pragma once

# include <ETC/Macros.hpp>
# include <Types/BaseHelper.hpp>

# include <Lexer/Tokens.hpp>
# include <Lexer/lexem_t.hpp>

namespace Alton
{
	namespace Lexer
	{
		class LexemHelper: public BaseHelper<utfchar_t, text_t, false>
		{
			// --- Head
		private:
			// Note:
			//	No privates! Remember; this is a 'Helper'.

		public:
			bool _expecting_indent = false;
			cont_t<natnum_t> previous_dents;
			cont_t<utfchar_t> open_miniscopes;
			lexem_t cache;
			lxm_vec tokenized;

			// --- Body
			// -- LexemHelper is not a refining helper.
			void advance_word() = delete;
			void advance() = delete;

		private:
			// Note:
			//	No privates! Remember; this is a 'Helper'.
			
		public:
			/**
			 * @brief Appends a lexem to the tokenized array
			 * @param in Input lexem
			*/
			void __append(lexem_t &in)
			{
				// Checking if 'in' is a null_token lexem
				if (in.token_type == token::null_token)
					Clinic::raise_internal
					(
						Clinic::Exceptions::PlaceHolderTokenException(),
						__FILE__, __LINE__
					);

				tokenized.push_back(in);
			}

			/**
			 * @brief Checks if the character is a number or not.
			 * @param in Input character.
			*/
			bool ___char_is_a_number(utfchar_t in)
			{
				return in <= '9' && in >= '0';
			}

			/**
			 * @brief Checks if the character is english or not.
			 * @param in Input character.
			*/
			bool ___char_is_in_english(utfchar_t in)
			{
				return (in >= 'a' && in <= 'z') ||
					   (in >= 'A' && in <= 'Z') ||
					   in == '_';
			}

			/**
			 * @brief Checks if the character is a potential identifier or not.
			 * @param in Input character.
			*/
			bool ___char_is_an_identifier(utfchar_t in)
			{
				return ___char_is_a_number(in) || ___char_is_in_english(in);
			}

			/**
			 * @brief Returns a potential scope closing for the scope opening
			 * @param in Ze scope closing
			*/
			utfchar_t _find_potential_scope_closing(utfchar_t in)
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
			
			/**
			 * @brief Returns a potential scope opening for the scope closing
			 * @param in Ze scope closing
			*/
			utfchar_t _find_potential_scope_opening(utfchar_t in)
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

			/**
			 * @brief Advances w/o Escape sequences.
			*/
			void virtually_advance(num_t i = 1) override
			{
				_require_operation();

				it += i;

				if (it >= out.size())
					_exit_operation();
			}

			// --- CTOR ~ DTOR
		public:
			LexemHelper(text_t code):
					BaseHelper(code)
			{
				previous_dents.push_back(0);
			}
		};
	}
}

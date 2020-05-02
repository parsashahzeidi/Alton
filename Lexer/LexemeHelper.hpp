# pragma once

# include <ETC/BareboneMacros.hpp>
# include <Types/BaseContainer.hpp>
# include <Types/BaseHelper.hpp>

# include <Lexer/Tokens.hpp>
# include <Lexer/Lexeme.hpp>


namespace Alton
{
	namespace Lexer
	{
		class LexemeHelper: public BaseHelper<Character, Text, false>
		{
			// --- Head
		public:
			Container<Character> open_miniscopes;
			Lexeme cache;
			LexemeList tokenized;

			// --- Body
			// -- LexemeHelper is not a refining helper.
			void advance_word() = delete;
			void advance() = delete;

		public:
			/**
			 * BRIEF: Appends a lexeme to the tokenized array
			 * PARAM: in Input lexeme
			*/
			void __append(Lexeme &in);

			/**
			 * BRIEF: Checks if the character is a number or not.
			 * PARAM: in Input character.
			*/
			bool ___char_is_a_number(Character in);

			/**
			 * BRIEF: Checks if the character is english or not.
			 * PARAM: in Input character.
			*/
			bool ___char_is_in_english(Character in);

			/**
			 * BRIEF: Checks if the character is a potential identifier or not.
			 * PARAM: in Input character.
			*/
			bool ___char_is_an_identifier(Character in);

			/**
			 * BRIEF: Checks if the character is considered whitespace or not.
			 * PARAM: in the character.
			*/
			bool ___char_is_considered_whitespace(Character in);

			/**
			 * BRIEF: Returns a potential scope closing for the scope opening
			 * PARAM: in Ze scope closing
			*/
			Character _find_potential_scope_closing(Character in);

			/**
			 * BRIEF: Returns a potential scope opening for the scope closing
			 * PARAM: in Ze scope closing
			*/
			Character _find_potential_scope_opening(Character in);

			/**
			 * BRIEF: Advances w/o Escape sequences.
			*/
			void virtually_advance(Number i = 1) override;

			// --- CTOR ~ DTOR
		public:
			LexemeHelper(Text code);
		};
	}
}

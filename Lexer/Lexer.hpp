# pragma once

# include <ETC/BareboneMacros.hpp>
# include <Clinic/Clinic.hpp>

# include <Lexer/LexemeHelper.hpp>
# include <Lexer/Lexeme.hpp>


namespace Alton
{
	namespace Lexer
	{
		// --- Lexer class ------------------------
		class Lexer
		{
			// --- Head
		private:
			LexemeHelper h = Text(U"");

			// --- Body
		private:
			/**
			 * BRIEF: Returns a Token for the current position
			*/
			Token ___advance_constant_token();

			/**
			 * BRIEF: Advances an integer thru
			
			 * RETURN: Returns a check for weather the operation was successful or not
			*/
			bool ___advance_number();

			/**
			 * BRIEF: Advances an identifier thru
			
			 * RETURN: Returns a check for weather the operation was successful or not
			*/
			bool ___advance_identifier();

			/**
			 * BRIEF: Advances a text thru
			
			 * RETURN: Returns a check for weather the operation was successful or not
			*/
			bool ___advance_text();

			/**
			 * BRIEF: Advances a text thru
			
			 * RETURN: Returns a check for weather the operation was successful or not
			*/
			bool ___advance_whitespace();

			/**
			 * BRIEF: Advances thru a comment
			
			 * RETURN: Returns a check for weather the operation was successful or not
			*/
			bool ___advance_comment();

			/**
			 * BRIEF: Advances thru a newline and the indents that continue afterwards
			
			 * RETURN: Returns a check for weather the operation was successful or not
			*/
			bool ___advance_newline();

			/**
			 * BRIEF: Advances a lexeme thru
			*/
			void __advance_token();

			/**
			 * BRIEF: Advances a Token thru.
			*/
			void _advance_statement();

		public:
			LexemeList lex();

			Text lxm_vec_to_text(LexemeList in);

			// --- CTOR ~ DTOR
		public:
			// --- Constructor ---
			// -- Default constructor --
			Lexer() = delete;

			// -- Costumized constructors --
			Lexer(Text _code);

			// --- Destructor ---
			// -- Default destructor --
			~Lexer();
		};
	}
}

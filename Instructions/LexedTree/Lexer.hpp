# pragma once

# include <ETC/Macros.hpp>
# include <Instructions/LexedTree/LexemHelper.hpp>


namespace Alton
{
	namespace Lexer
	{
		// --- Lexer class ------------------------
		class Lexer
		{
			// --- Head
		public:
			
			text_t code;

		private:
			LexemHelper helper;

			// --- Body
		private:

		public:
			lxm_vec lex()
			{
				helper.init_op();

				while (helper.is_operating())
				{
					helper.advance_word();
				}
				return helper.tokenized;
			}

			text_t lxm_vec_to_str(lxm_vec in)
			{
				text_t out;

				for (natural_num_t i = 0; i < in.size(); i++)
				{
					out += str_to_text("[") + in[i].enumeration + str_to_text("] ");
				}
				return out;
			}

			// --- CTOR ~ DTOR
		public:
			// --- Constructor ---
			// -- Default constructor --
			Lexer() = delete;

			// -- Costumized constructors --
			Lexer(text_t _code):
					code(_code),
					helper(code)
			{ }

			// --- Destructor ---
			// -- Default destructor --
			~Lexer(){ }
		};
	}
}

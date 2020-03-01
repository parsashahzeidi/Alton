# pragma once

# include <ETC/Macros.hpp>
# include <Parser/ASTHelper.hpp> 
# include <Lexer/lexem_t.hpp>

namespace Alton
{
	namespace Parser
	{
		class Parser
		{
			// --- Head
			private:
				ASTHelper h;
				cont_t<ast_t> statement_list;

			public:

			// --- Body
			private:
				/**
				 * @brief Parses one statement
				 * @param in A list of tokens
				
				 * @return A syntax tree
				*/
				ast_t _parse_statement(const Lexer::lxm_vec &in) const
				{
					// --- Head ---
					Lexer::lxm_vec opers;
					ast_t out;
					
					// --- Body ---
					// -- Separating the operators and keeping them in 'opers' --

					// TODO: Finish zis

					return ast_t();
				}

				/**
				 * @brief Sub-cuts a statement from out
				
				 * @return A Lexem-Vector
				*/
				Lexer::lxm_vec _get_next_statement()
				{
					// --- Head ---
					Lexer::lxm_vec result;
					Lexer::lexem_t cache;

					// --- Body ---
					// -- Fetching everything before the next statement --

					// TODO: Finish this segment

					return result;
				}

				/**
				 * @brief Checks for a valid header
				 * @param in A vector of lexems 
				
				 * @return A boolean
				*/
				bool _validate_header(Lexer::lxm_vec in)
				{
					// - Checking the size -
					if (in.size() != 2)
					
					// - Checking the content -
					if 
					(
						in[0].enumeration != U"Alfie0" &&
						in[0].enumeration != U"Alton0" &&
						in[0].enumeration != U"Alfie"
					)
						return false;
					
					return true;
				}

			public:
				/**
				 * @brief Parses a list of lexems.
				
				 * @return A list of statements.
				*/
				cont_t<ast_t> parse()
				{
					// --- Head ---
					statement_list.clear();
					h.init_op();
					Lexer::lxm_vec cache;
					ast_t current_statement;

					// --- Body ---
					// -- Processing the Alfie header --


					// -- Processing everything else --
					while (h.is_operating())
					{
						cache = _get_next_statement();
						current_statement = _parse_statement(cache);
						statement_list.append(current_statement);
					}

					return statement_list;
				}

			// --- CTOR ~ DTOR
			public:
				// CTORs
				Parser():
						h(Lexer::lxm_vec())
				{ }
				Parser(Lexer::lxm_vec &in):
						h(in)
				{ }

				// DTOR
				~Parser() { }
		};
	}
}
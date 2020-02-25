# pragma once

# include <ETC/Macros.hpp>
# include <Instructions/AbstractSyntaxTree/ASTHelper.hpp> 
# include <Instructions/LexedTree/LexemHelper.hpp>

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
				const text_t precedence_chart[39] =
				{
					U".", U",", U"=",
					U"^", U"^=", U"&", U"&=", U"|", U"|=", U">>", U"<<", U">>=", U"<<=",
					U"**", U"**=", U"%", U"%=", U"*",  U"*=", U"/", U"/=", U"+", U"+=", U"-", U"-=",
					U"!", U"&&", U"&&=", U"||", U"||=", U"<", U"<=", U">", U">=", U"==",
				};

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
					for (natural_num_t i = 0; i < in.size(); i++)
						if (in[i].token_type == Lexer::token::oper)
							opers.push_back(in[i]);

					std::cout << opers.size() << nl_str;

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
					while (h.is_operating())
					{
						cache = h.curr(0);

						// Checking for a statement ending
						if (cache.token_type == Lexer::token::statement_end)
						{
							// -- Skipping ze Lexer::token::statement_end token --
							h.virtually_advance();
							// byby.
							break;
						}
						
						result.append(cache);
						h.virtually_advance();
					}

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
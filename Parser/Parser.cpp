
# include <Clinic/Clinic.hpp>
# include <Parser/Parser.hpp>


namespace Alton
{
	namespace Parser
	{
		void Parser::_validate_header()
		{
			// --- Head ---
			ParsingNode header;
			Text Header_version;
			const Natural header_char_size = 6;

			// --- Body ---
			Clinic::say(Clinic::Component::parser_lib,
				U"Validating Header.."
			);
			// -- Grabbing the first 2 items --
			// - The header type -
			header = h.out[0];

			// - The header function -
			h.data.runtime_function = h.out[1];
			
			// -- Checking the content --
			// - Valid header -
			if (header.enumeration.size() == header_char_size)
			{
				if (header.enumeration == U"Alfie1")
				{
					/** TODO: Finish this. */
				}
				else if (header.enumeration == U"Debug1")
				{
					/** TODO: Finish this. */
				}
				else
					Clinic::raise_pos
					(
						Clinic::Exceptions::InvalidHeaderIdentifierException(),
						0
					);
			}
			else
				Clinic::raise_pos
				(
					Clinic::Exceptions::InvalidHeaderException(),
					0
				);
			
			// - Validate function -
			/** TODO: THIS IS UNFINISHED.. */
		}

		bool Parser::__can_advance_nterm_do_block_keyword()
		{
			// --- Head ---
			Symbol curr = h.curr(0).symbol_type;

			// --- Body ---
			if
			(
				curr == Symbol::keyword_for ||
				curr == Symbol::keyword_if ||
				curr == Symbol::keyword_while
			)
					return 1;
			else return 0;
		}

		ParseTree Parser::_nterm_do_block_keyword()
		{
			// --- Head ---
			ParseTree out;
			out.item.symbol_type = Symbol::nterm_do_block_keyword;
			
			// --- Body ---
			if (__can_advance_nterm_do_block_keyword())
			{
				out.list.push_back(h.curr(0));
				h.virtually_advance();
			}
			else
				Clinic::raise_pos
				(
					Clinic::Exceptions::UnrecognisedSyntaxException(),
					h.curr(0).position_in_code
				);

			return out;
		}

		ParseTree Parser::_nterm_call_arguments()
		{
			// --- Head ---
			ParseTree out;
			out.item.symbol_type = Symbol::nterm_call_arguments;
			
			// --- Body ---
			h._force_accept(Symbol::paranthesis_miniscope_opening, out);
			
			if (__can_advance_nterm_union())
				out.list.push_back(_nterm_union());

			h._force_accept(Symbol::paranthesis_miniscope_closing, out);

			return out;
		}


		ParseTree Parser::_nterm_union()
		{
			// --- Head ---
			ParseTree out;
			out.item.symbol_type = Symbol::nterm_union;
			
			// --- Body ---
			out.list.push_back(_nterm_substatement());
			
			if (h._accept(Symbol::oper_union, 0))
			{
				h._force_accept(Symbol::oper_union, out);
				out.list.push_back(_nterm_substatement());
			}

			return out;
		}


		bool Parser::__can_advance_nterm_union()
		{
			return __can_advance_nterm_substatement();
		}

		bool Parser::__can_advance_nterm_call_statement()
		{
			// --- Head ---
			Symbol curr = h.curr(0).symbol_type;
			Symbol next = h.curr(1).symbol_type;

			// --- Body ---
			if
			(
				curr == Symbol::identifier &&
				next == Symbol::paranthesis_miniscope_opening
			)
				 return 1;
			else return 0;
		}


		ParseTree Parser::_nterm_call_statement()
		{
			// --- Head ---
			ParseTree out;
			out.item.symbol_type = Symbol::nterm_call_statement;
			
			// --- Body ---
			out.list.push_back(_nterm_member());

			out.list.push_back(_nterm_call_arguments());
			return out;
		}

		bool Parser::__can_advance_nterm_substatement()
		{
			// --- Head ---
			Symbol curr = h.curr(0).symbol_type;

			// --- Body ---
			if
			(
				curr == identifier			||  // Both a call statement and a regular identifier

				curr == constant_number	||
				curr == constant_text			/** TODO: Add operators */
			)
					return 1;
			else return 0;
		}


		bool Parser::__can_advance_nterm_member_appendix()
		{
			// --- Head ---
			Symbol curr = h.curr(0).symbol_type;

			// --- Body ---
			if
			(
				curr == Symbol::square_bracket_miniscope_opening
			)	 return 1;
			else return 0;
		}

		ParseTree Parser::_nterm_member_appendix()
		{
			// --- Head ---
			ParseTree out;
			out.item.symbol_type = Symbol::nterm_member;
			
			// --- Body ---
			h._force_accept(Symbol::square_bracket_miniscope_opening, out);

			out.list.push_back(_nterm_substatement());

			h._force_accept(Symbol::square_bracket_miniscope_closing, out);
			
			return out;
		}


		ParseTree Parser::_nterm_member()
		{
			// --- Head ---
			ParseTree out;
			out.item.symbol_type = Symbol::nterm_member;
			
			// --- Body ---
			h._force_accept(Symbol::identifier, out);

			if (__can_advance_nterm_member_appendix())
				out.list.push_back(_nterm_member_appendix());

			if (h._accept(Symbol::oper_member_access, 0))
			{
				h._force_accept(Symbol::oper_member_access, out);
				out.list.push_back(_nterm_member());
			}

			return out;
		}

		ParseTree Parser::_nterm_mini_statement()
		{
			// --- Head ---
			ParseTree out;
			out.item.symbol_type = Symbol::nterm_mini_statement;
			
			// --- Body ---
			if (h._accept(Symbol::identifier, 0))
			{
				if (__can_advance_nterm_call_statement())
					out.list.push_back(_nterm_call_statement());
				
				else out.list.push_back(_nterm_member());
			}

			else if (h._accept(Symbol::constant_number, 0))
				h._force_accept(Symbol::constant_number, out);
			
			else if (h._accept(Symbol::constant_float, 0))
				h._force_accept(Symbol::constant_float, out);

			else
				h._force_accept(Symbol::constant_text, out);

			return out;
		}

		ParseTree Parser::_nterm_substatement()
		{
			// Redirect to _nterm_operation
			return _nterm_operation();
		}
		
		ParseTree Parser::_nterm_operation()
		{
			// Redirect to _nterm_comparing_operation
			return _nterm_comparing_operation();
		}

		ParseTree Parser::_nterm_comparing_operation()
		{
			// Redirect to _nterm_or_and_oper
			return _nterm_or_and_oper();
		}

		bool Parser::__can_advance_nterm_variable_definition()
		{
			// --- Head ---
			Symbol curr = h.curr(0).symbol_type;

			// --- Body ---
			if
			(
				curr == Symbol::keyword_var
			)
				 return 1;
			else return 0;
		}

		bool Parser::__can_advance_nterm_statement()
		{
			// --- Head ---
			Symbol curr = h.curr(0).symbol_type;

			// --- Body ---
			if
			(
				__can_advance_nterm_variable_definition()	||
				__can_advance_nterm_do_block_keyword()		||
				__can_advance_nterm_substatement()			||
				__can_advance_nterm_import_statement()
			)
				 return 1;
			else return 0;
		}

		bool Parser::__can_advance_nterm_import_statement()
		{
			// --- Head ---
			Symbol curr = h.curr(0).symbol_type;

			// --- Body ---
			if
			(
				curr == Symbol::keyword_import
			)	 return 1;
			else return 0;

		}

		bool Parser::__can_advance_nterm_do_block()
		{
			// --- Body ---
			if
			(
				__can_advance_nterm_do_block_keyword() &&
				h.curr(1).symbol_type == Symbol::paranthesis_miniscope_opening
			)
				 return 1;
			else return 0;
		}

		ParseTree Parser::_nterm_do_block()
		{
			// --- Head ---
			ParseTree out;
			out.item.symbol_type = Symbol::nterm_do_block;
			
			// --- Body ---
			out.list.push_back(_nterm_do_block_keyword());
			out.list.push_back(_nterm_call_arguments());
			out.list.push_back(_nterm_do_block_code());

			return out;
		}

		ParseTree Parser::_nterm_variable_definition()
		{
			// --- Head ---
			ParseTree out;
			out.item.symbol_type = Symbol::nterm_variable_definition;
			
			// --- Body ---
			h._force_accept(Symbol::keyword_var, out);
			h._force_accept(Symbol::identifier, out);
			h._force_accept(Symbol::oper_assign, out);
			out.list.push_back(_nterm_substatement());
			
			return out;
		}

		ParseTree Parser::_nterm_import_statement()
		{
			// --- Head ---
			ParseTree out;
			out.item.symbol_type = Symbol::nterm_statement;
			
			// --- Body ---
			h._force_accept(Symbol::keyword_import, out);
			out.list.push_back(_nterm_member());

			return out;
		}

		ParseTree Parser::_nterm_statement()
		{
			// --- Head ---
			ParseTree out;
			out.item.symbol_type = Symbol::nterm_statement;
			
			// --- Body ---
			if (__can_advance_nterm_do_block())
				out.list.push_back(_nterm_do_block());

			else if (__can_advance_nterm_variable_definition())
				out.list.push_back(_nterm_variable_definition());

			else if (__can_advance_nterm_substatement())
				out.list.push_back(_nterm_substatement());
			
			else if (__can_advance_nterm_import_statement())
				out.list.push_back(_nterm_import_statement());

			h._force_accept(Symbol::statement_end, out);

			return out;
		}
		
		ParseTree Parser::_nterm_do_block_code()
		{
			// --- Head ---
			ParseTree out;
			out.item.symbol_type = Symbol::nterm_do_block_code;
			
			// --- Body ---
			h._force_accept(Symbol::do_block, out);
			h._force_accept(Symbol::statement_end, out);
			h._force_accept(Symbol::indent, out);

			if (__can_advance_nterm_statement())
				while (__can_advance_nterm_statement())
					_nterm_statement();
			
			else
				Clinic::raise_pos
				(
					Clinic::Exceptions::DentMatchException(),
					h.curr(0).position_in_code
				);

			h._force_accept(Symbol::outdent, out);

			return out;
		}


		bool Parser::__can_advance_nterm_function()
		{
			// --- Head ---
			Symbol curr = h.curr(0).symbol_type;

			// --- Body ---
			if (curr == Symbol::keyword_function)
				 return 1;
			else return 0;
		}

		bool Parser::__can_advance_nterm_func_argument()
		{
			// --- Head ---
			Symbol curr = h.curr(0).symbol_type;

			// --- Body ---
			if (curr == Symbol::identifier)
				 return 1;
			else return 0;
		}

		ParseTree Parser::_nterm_func_argument()
		{
			// --- Head ---
			ParseTree out;
			out.item.symbol_type = Symbol::nterm_func_argument;
			
			// --- Body ---
			h._force_accept(Symbol::identifier, out);

			if (h._accept(Symbol::oper_assign, 0))
			{
				h._force_accept(Symbol::oper_assign, out);
				out.list.push_back(_nterm_substatement());
			}

			return out;
		}

		ParseTree Parser::_nterm_func_arguments()
		{
			// --- Head ---
			ParseTree out;
			out.item.symbol_type = Symbol::nterm_func_arguments;
			
			// --- Body ---
			h._force_accept(Symbol::paranthesis_miniscope_opening, out);
			
			// -- Processing arguments --
			if (__can_advance_nterm_func_argument())
			{
				out.list.push_back(_nterm_func_argument());

				while (h._accept(Symbol::oper_union, 0))
				{
					h._force_accept(Symbol::oper_union, out);
					out.list.push_back(_nterm_func_argument());
				}
			}

			h._force_accept(Symbol::paranthesis_miniscope_closing, out);

			out.list.push_back(_nterm_do_block_code());

			return out;
		}

		ParseTree Parser::_nterm_function()
		{
			// --- Head ---
			ParseTree out;
			out.item.symbol_type = Symbol::nterm_function;
			
			// --- Body ---
			// -- ( keyword_function | keyword_operation ) --
			if (h._accept(Symbol::keyword_function, 0))
				h._force_accept(Symbol::keyword_function, out);
			else
				h._force_accept(Symbol::keyword_operation, out);
			
			h._force_accept(Symbol::identifier, out);

			out.list.push_back(_nterm_func_arguments());

			out.list.push_back(_nterm_do_block_code());

			return out;
		}

		ParseTree Parser::_nterm_start()
		{
			// --- Head ---
			ParseTree out;
			out.item.symbol_type = Symbol::nterm_start;
			
			// --- Body ---
			h._force_accept(Symbol::identifier, out);
			h._force_accept(Symbol::identifier, out);
			h._force_accept(Symbol::statement_end, out);

			// -- ( function | import_statement statement_end ) * --
			while (1)
			{
				if (__can_advance_nterm_function())
					out.list.push_back(_nterm_function());
				
				else if (__can_advance_nterm_import_statement())
				{
					out.list.push_back(_nterm_import_statement());
					h._force_accept(Symbol::statement_end, out);
				}

				else break;
			}

			return out;
		}

		ParseTree Parser::parse()
		{
			// --- Head ---
			h.init_op();
			ParseTree parse = ParseTree();

			// --- Body ---
			// -- Processing the Alfie header --
			_validate_header();

			// -- Processing everything else --
			parse = _nterm_start();
			
			if (h.is_operating())
				Clinic::raise_pos
				(
					Clinic::Exceptions::UnrecognisedSyntaxException(),
					h.curr(0).position_in_code
				);
			
			return parse;
		}

		Parser::Parser(Lexer::LexemeList &in):
				h(LinearParse())
		{
			for (Natural i = 0; i < in.size(); i++)
				h.out.push_back(in[i]);
		}

		Parser::~Parser(){ }
	}
}
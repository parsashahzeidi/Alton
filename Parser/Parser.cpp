# include <Clinic/Clinic.hpp>
# include <Parser/Parser.hpp>
# include <Conversions/StringConvert.hpp>


namespace Alton
{
	namespace Parser
	{
		void Parser::print_tree (ParseTree in)
		{
			Clinic::say
			(
				Clinic::Component::parser_lib,
				Conversions::base2_to_basen (Number (in.item.symbol_type), 10) +
				U' ' +
				in.item.enumeration
			);

			// The add_scope and exit_scope allow the tree's nodes to appear
			//	as if indented.
			// Example:
			//	1				; Added a scope
			//	|	5			; Added a scope
			//	|	|	6		; Exited a scope
			//	|	5			; Kept a scope
			//	|	2			: ???
			Clinic::add_scope ();
			for (Natural i = 0; i < in.list.size(); i++)
				print_tree (in.list[i]);
			Clinic::exit_scope ();
		}


		void Parser::___reduce (Natural rule)
		{
			// --- Head ---
			Natural rule_size;
			ParseState reduce_to;
			ParseState go_to_push;
			Symbol rule_symbol;
			ParseTree new_tree;

			// --- Body ---
			rule_size = h.____get_rule_size (rule);
			rule_symbol = h.____rule_symbol(rule);

			// -- Popping the end of the stack --
			// - Popping everything but the end of the end of the stack.
			for (Natural _ = 0; (_ + 1) < h.____get_rule_size(rule); _++)
				h.stack.pop_back ();

			// - We're gonna keep the last item of the grammar for a little
			//	longer, We need the "position_in_code" value. -
			go_to_push.position_in_code = h.stack.back ().position_in_code;

			// - Do it now! -
			h.stack.pop_back ();

			// -- Caching --
			reduce_to = h.stack.back ();

			// -- Ze goto! --
			go_to_push.i = h.__get_table_item (reduce_to.i, rule_symbol).result;

			h.stack.push_back(go_to_push);

			// -- Applying the symbol reduction --
			// - Grabbing the tree's item -
			new_tree.item = ParsingNode
			(
				rule_symbol, go_to_push.position_in_code
			);

			// -- Popping the items from the result --
			for (Natural i = 0; i < rule_size; i++)
			{
				// - Appending the item -
				new_tree.list.push_front
				(
					h.result.list.back()
				);

				// - Popping the item -
				h.result.list.pop_back ();
			}

			// - Adding to the front
			h.result.list.push_back (new_tree);
		}


		void Parser::___shift (Natural state)
		{
			// --- Body ---
			h.stack.push_back
			(
				ParseState
				(
					state, h.curr(0).position_in_code
				)
			);

			// -- Shifting the actual symbol onto the "result" tree --
			h.result.list.push_back (h.curr (0));
			h.virtually_advance ();
		}


		ParseOperation Parser::__find_next_operation ()
		{
			// --- Head ---
			Natural state = h.stack.back ().i;
			Symbol item = h.curr (0).symbol_type;

			// --- Body ---
			return h.__get_table_item(state, item);
		}


		void Parser::__apply_operation (ParseOperation oper)
		{
			// --- Head ---
			Text lookahead = Conversions::base2_to_basen
			(
				h.curr (0).symbol_type,
				10
			);

			Text stack;
			for (Natural i = 0; i < h.stack.size (); i++)
			{
				stack += Conversions::base2_to_basen
				(
					h.stack [i].i,
					10
				) + U" ";
			}

			// --- Body ---
			switch (oper.type)
			{
			case ParseOperationType::reduce:
				___reduce(oper.result);
				break;

			case ParseOperationType::shift:
				___shift(oper.result);
				break;

			case ParseOperationType::accept:
				break;

			case ParseOperationType::error:
				say
				(
					Clinic::Component::parser_lib,
					text_init
						U"On a lookahead of " + lookahead +
						U" & with the stack " + stack
				);
				Clinic::raise_pos
				(
					Clinic::Exceptions::UnrecognisedSyntaxException(),
					h.curr(0).position_in_code
				);

			default:
				Clinic::raise_internal
				(
					Clinic::Exceptions::BaseAbsolutelyUnexpectedException(),
					__FILE__, ALTON_FUNCTION_DETECT, __LINE__
				);
			}
		}

		ParseTree Parser::_lr1_loop ()
		{
			while (__find_next_operation ().type != ParseOperationType::accept)
				_lr1_iterate ();


			return h.result;
		}

		void Parser::_lr1_iterate ()
		{
			__apply_operation (__find_next_operation ());
		}

		void Parser::_validate_header()
		{
			// --- TODO ---
			return;
			// --- Head ---
			ParsingNode header;
			Text Header_version;
			const Natural header_char_size = 6;

			// --- Body ---
			Clinic::say
			(
				Clinic::Component::parser_lib,
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
			// - Validate version -
			// - Validate function -
			/** TODO: THIS IS UNFINISHED.. */
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
			parse = _lr1_loop();

			while (h.is_operating())
				h.virtually_advance ();

			// print_tree (parse);
			return parse;
		}

		Parser::Parser ():
				h(LinearParse())
		{ }

		Parser::Parser(Lexer::LexemeList &in):
				h(LinearParse())
		{
			// --- Head ---
			Natural position_in_code;

			// --- Body ---
			// -- Setting up the lexing symbols --
			for (Natural i = 0; i < in.size(); i++)
				h.out.push_back(in[i]);

			// -- Setting up the "$" / ending symbol --
			// - Setting up the last lookahead -
			if (!h.out.empty ())
				position_in_code = h.out.back ().position_in_code;

			else
				position_in_code = 0;

			// - The bastard itself -
			h.out.push_back
			(
				ParsingNode
				(
					Symbol::ending,
					position_in_code
				)
			);
		}

		Parser::~Parser(){ }
	}
}

# pragma once

# include <ETC/Macros.hpp>
# include <ETC/StringConvert.hpp>

namespace Alton
{
	namespace ErrorHandling
	{
		using namespace Conversions;
		
		text_t *code = nullptr;

		struct _index
		{
			natural_num_t line = 1;
			natural_num_t real_chtr = 0;
			natural_num_t chtr = 0;

			text_t curr_line = U"";
		};

		/**
		 * @brief Frees the setup's allocaed memory.
		*/
		void _delete_setup()
		{
			if (code != nullptr)
				delete[] code;
		}

		/**
		 * @brief Sets up the error handling system
		 * @param _code The input text representing the loggings and error raisings.
		*/
		void setup_error_handling(const text_t &_code)
		{
			if (code == nullptr)
			{
				code = new text_t(_code);
				atexit(_delete_setup);
			}
			else
				*code = (_code);
		}

		/**
		 * @brief Sets up the error handling system with a duplicate item
		*/
		void dupe_error_handling_setup()
		{
			if (code != nullptr)
				setup_error_handling
				(
					*(new text_t (*code))
				);
		}

		/**
		 * @brief Gets line:char from a text and index
		*/
		_index _get_index(natural_num_t ptr)
		{
			// --- Head ---
			_index index;
			natural_num_t i = 0;

			// --- Body ---
			for (; i < ptr; i++)
			{
				index.real_chtr++;

				if (code->at(i) == U'\n')
				{
					index.curr_line = U"";

					index.line++;
					index.chtr = 0;
					index.real_chtr = 0;
				}
				else if (code->at(i) == U'\t')
				{
					index.curr_line += U"\033[2m|\033[0m   ";
					index.chtr += 4;
				}
				else
				{
					index.curr_line += code->at(i);
					index.chtr++;
				}
			}

			// Filling ze current line
			while ((i < code->size()) && (code->at(i) != U'\n'))
			{
				index.curr_line += code->at(i);
				i++;
			}

			return index;
		}

		/**
		 * @brief Raises an error and exits.
		 * @param err The text descibing the error
		 * @param code The error code to exit with ( if not handled )
		*/
		void _raise_error(const text_t &text, num_t code)
		{
			std::cerr << "Error: " << text_to_str(text) << '\n';
			std::cerr << "\n\tTerminating...\n";
			std::cerr.flush();
			exit(code);
		}

		/**
		 * @brief Adds stuff around an index.
		 * @param index the frustratingly-good-shit to add stuff around.
		*/
		text_t beautify_index(natural_num_t __index)
		{
			// --- Head ---
			_index index = _get_index(__index);
			text_t message;

			// --- Body ---
			// -- Error: Hello at --
			message += U" at ";

			// -- Error: Hello at 8:4 --
			message += str_to_text(std::to_string(index.line));
			message += U":";
			message += str_to_text(std::to_string(index.real_chtr));
			message += U".\n";

			// -- 8		|			Hello! ---
			message += str_to_text(std::to_string(index.line));
			message += U" |\t";
			message += index.curr_line;
			message += U"\n\t";

			// --		------------ --
			for (natural_num_t i = 0; i < index.chtr; i++)
				message += '-';
			
			// --		------------^ --
			message += U"^\n";

			return message;
		}

		/**
		 * @brief Raises an error like err at line:char ...
		 * @param err Alton::Exceptions::BaseCodeException type
		 * @param __index Index of the character that's causing the error
		*/
		void raise_pos(const Exceptions::BaseExternalException &err, natural_num_t __index)
		{
			// --- Head ---
			text_t message = err._message;

			// --- Body ---
			message += beautify_index(__index);

			// Actually raising the shit
			_raise_error(
				message,
				1
			);
		}
		
		/**
		 * @brief Raises an error like err ( arg )
		 * @param err Alton::Exceptions::BaseArgumentException type
		 * @param arg The problematic argument
		*/
		void raise_arg(const Exceptions::BaseArgumentException &err, const text_t &arg)
		{
			_raise_error
			(
				err._message
				+ str_to_text(" ( \'")
				+ arg
				+ str_to_text("\' ).\n\tTerminating..."),
				1
			);
		}

		/**
		 * @brief Raises an internal error.
		 * @param err Alton::Exceptions::BaseInternalException type
		*/
		void raise_internal(const Exceptions::BaseInternalException &err)
		{
			_raise_error(
				str_to_text("Internal Error: ")
				+ err._message
				+ str_to_text("\n\tTerminating..."),
				69
			);
		}
	}
}

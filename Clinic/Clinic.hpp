# pragma once

# include <ETC/Macros.hpp>

namespace Alton
{
	namespace Clinic
	{
		text_t *code = nullptr;

		struct _index
		{
			natnum_t line = 1;
			natnum_t real_chtr = 0;
			natnum_t chtr = 0;

			text_t curr_line = U"";
		};

		/**
		 * @brief Frees the setup's allocaed memory.
		*/
		void _delete_setup()
		{
			if (code != nullptr)
			{
				delete[] code;
				code = nullptr;
			}
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
		_index _get_index(natnum_t ptr)
		{
			// --- Head ---
			_index index;
			natnum_t i = 0;

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
			std::cerr << "Error: " << Conversions::text_to_str(text) << '\n';
			std::cerr << "\n\tTerminating...\n";
			std::cerr.flush();
			exit(code);
		}

		/**
		 * @brief Adds stuff around an index.
		 * @param index the frustratingly-good-shit to add stuff around.
		*/
		text_t beautify_index(natnum_t __index)
		{
			// --- Head ---
			_index index = _get_index(__index);
			text_t message;

			// --- Body ---
			// -- Error: Hello at --
			message += U" at ";

			// -- Error: Hello at 8:4 --
			message += Conversions::str_to_text(std::to_string(index.line));
			message += U":";
			message += Conversions::str_to_text(std::to_string(index.real_chtr));
			message += U".\n";

			// -- 8		|			Hello! ---
			message += Conversions::str_to_text(std::to_string(index.line));
			message += U" |\t";
			message += index.curr_line;
			message += U"\n\t";

			// --		------------ --
			for (natnum_t i = 0; i < index.chtr; i++)
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
		void raise_pos(const Exceptions::BaseExternalException &err, natnum_t __index)
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
				+ U" ( \'"
				+ arg
				+ U"\' ).\n",
				1
			);
		}

		/**
		 * @brief Raises an internal error.
		 * @param err Alton::Exceptions::BaseInternalException type
		*/
		void raise_internal(const Exceptions::BaseInternalException &err, std::string __file, natnum_t __line)
		{
			_raise_error(
				(text_t) U"Internal Error at "
				+ Conversions::str_to_text(__file)
				+ U":"
				+ Conversions::str_to_text(std::to_string(__line))
				+ err._message
				+ U"\n",
				69
			);
		}
	}
}

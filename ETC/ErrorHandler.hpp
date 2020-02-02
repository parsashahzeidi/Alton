# pragma once

# include <ETC/Macros.hpp>
# include <ETC/StringConvert.hpp>

namespace Alton
{
	namespace ErrorHandling
	{
		struct _index
		{
			natural_num_t line = 1;
			natural_num_t chtr = 0;
			text_t last_line = str_to_text("");
			text_t curr_line = str_to_text("");
			text_t next_line = str_to_text("");
		};

		/**
		 * @brief Gets line:char from a string and index
		*/
		struct _index _get_index(text_t in, natural_num_t ptr){
			// --- Head ---
			struct _index index;
			natural_num_t i = 0;

			// --- Body ---
			for (; i < ptr; i++){
				if (in[i] == utfchar_t('\n'))
				{
					index.last_line = index.curr_line;
					index.curr_line = index.next_line;
					index.next_line = str_to_text("");

					index.line++;
					index.chtr = 0;
				}
				else if (in[i] == utfchar_t('\t'))
				{
					index.next_line += str_to_text("    ");
					index.chtr += 4;
				}
				else
				{
					index.next_line += in[i];
					index.chtr++;
				}
			}

			index.last_line = index.curr_line;
			index.curr_line = index.next_line;
			index.next_line = str_to_text("");

			// Current line
			while ((i < in.size()) && (in[i] != utfchar_t('\n')))
			{
				index.curr_line += in[i];
				i++;
			}

			// Next line
			i++;
			while ((i < in.size()) && (in[i] != utfchar_t('\n')))
			{
				index.next_line += in[i];
				i++;
			}

			return index;
		}

		/**
		 * @brief Raises an error and exits.
		 * @param err The text descibing the error
		 * @param code The error code to exit with ( if not handled )
		*/
		void _raise(text_t err, num_t code){
			std::cerr << "Error: " << text_to_str(err) << '\n';
			exit(code);
		}

		/**
		 * @brief Raises an error like err at line:char ...
		 * @param err Alton::ErrorHandling::Exceptions::BaseCodeException type
		 * @param __index Index of the character that's causing the error
		*/
		template<class err_t>
		void raise_pos(err_t err, text_t file, natural_num_t __index){
			// --- Head ---
			struct _index index = _get_index(file, __index);
			text_t message = err._message;

			// --- Body ---
			// Error: Hello at
			message += str_to_text(" at ");

			// 8:14
			message += str_to_text(std::to_string(index.line));
			message += str_to_text(":");
			message += str_to_text(std::to_string(index.chtr));
			message += str_to_text(".\n");

			//		.
			//		.
			//		.
			if (index.line > 1)
				message += str_to_text("\t.\n\t.\n\t.\n");

			// 7	|		hello_init
			if (index.line != 1)
			{
				message += str_to_text(std::to_string(index.line - 1));
				message += str_to_text(" |\t");
				message += index.last_line;
				message += str_to_text("\n");
			}

			// 8	|			Hello!
			message += str_to_text(std::to_string(index.line));
			message += str_to_text(" |\t");
			message += index.curr_line;
			message += str_to_text("\n\t");

			//					^
			for (natural_num_t i = 0; i < index.chtr; i++)
				message += '-';
			
			message += str_to_text("^\n");

			// 9	|		hello_end
			message += str_to_text(std::to_string(index.line + 1));
			message += str_to_text(" |\t");
			message += index.next_line;
			message += str_to_text("\n");

			//		.
			//		.
			//		.
			//		Terminating...
			message += str_to_text("\t.\n\t.\n\t.\n\tTerminating...");

			_raise(
				message,
				1
			);
		}
		
		/**
		 * @brief Raises an error like err ( arg )
		 * @param err Alton::ErrorHandling::Exceptions::BaseParamException type
		 * @param arg The problematic argument
		*/
		template<class err_t>
		void raise_arg(err_t err, text_t arg)
		{
			_raise
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
		 * @param err Alton::ErrorHandling::Exceptions::BaseInternalException type
		*/
		template<class err_t>
		void raise_internal(err_t err){
			_raise(
				str_to_text("Internal Error: ")
				+ err._message
				+ str_to_text("\n\tTerminating..."),
				69
			);
		}
	}
}

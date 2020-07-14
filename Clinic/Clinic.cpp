# include <Clinic/Clinic.hpp>
# include <Tools/TextFill.hpp>
# include <ETC/VersionData.hpp>
# include <ETC/AltonFunctionDetect.hpp>
# include <Tools/TextFill.hpp>


namespace Alton
{
	namespace Clinic
	{
		Text *code = nullptr;
		Natural scope_count = 1;

		void _delete_setup()
		{
			if (code != nullptr)
			{
				delete code;
				code = nullptr;
			}
		}

		void setup_error_handling(const Text &_code)
		{
			if (code == nullptr)
			{
				code = new Text(_code);
				atexit (_delete_setup);
			}
			else
				*code = (_code);
		}

		void dupe_error_handling_setup()
		{
			if (code != nullptr)
				setup_error_handling
				(
					*(new Text (*code))
				);
		}

		FileIndexData _get_index(Natural ptr)
		{
			// --- Head ---
			FileIndexData index;
			Natural i = 0;
			Character current;

			// --- Body ---
			for (; i < ptr; i++, index.chtr++)
			{
				current = code->at (i);

				switch (current)
				{
					// -- Noticed a newline --
				case U'\n':
					// - Clearing the current line -
					index.curr_line.clear ();
					index.chtr = 0;

					index.line++;
					break;

					// -- Noticed a Tab character --
				case U'\t':
					index.curr_line.push_back (U' ');
					break;

					// -- Noticed any other character --
				default:
					index.curr_line += current;
				}
			}

			// Filling ze current line
			while ((i < code->size()) && (code->at(i) != U'\n'))
			{
				index.curr_line += code->at (i);
				i++;
			}

			return index;
		}

		void _log(Text text, FILE *&stream)
		{
			fprintf(stream, "%s", Conversions::text_to_str(text).c_str());
			fflush(stream);
		}

		void _log(Number number, FILE *&stream)
		{
			fprintf(stream, "%lld", number);
			fflush(stream);
		}

		void terminate(Number code)
		{
			ansi_term_colour(ANSIColourStrength::high_ansi_colour_strength);

			add_scope ();
			say
			(
				Component::clinic_lib,
				text_init
					U"Terminating..." + nl_txt,
				ANSIColourStrength::high_ansi_colour_strength
			);
			exit_scope ();

			ansi_term_colour();
			exit(code);
		}

		void _raise_error(const Text &text, Number code)
		{
			// --- Printing ---
			_log(
				text_init
				U"Error: " + text
				, stderr
			);

			// --- Exiting ---
			if (code)
				terminate(code);
		}

		Text beautify_index(Natural __index)
		{
			// --- Head ---
			FileIndexData index = _get_index(__index);
			Text message;

			// --- Body ---
			// -- Error: Hello at --
			message += U" at ";

			// -- Error: Hello at 8:4. --
			message += Conversions::str_to_text(std::to_string(index.line));
			message += U":";
			message += Conversions::str_to_text
			(
				std::to_string(index.chtr)
			);
			message += text_init U'.' + nl_txt;

			// -- 8		|			Hello! --
			message += Conversions::str_to_text(std::to_string(index.line));
			message += U" |\t";
			message += index.curr_line;
			message += text_init nl_txt + U'\t';

			// --		------------ --
			for (Natural i = 0; i < index.chtr; i++)
				message += U'-';

			// --		------------^ --
			message += text_init U'^' + nl_txt;

			return message;
		}

		void raise_pos(const Exceptions::BaseExternalException &err, Natural __index)
		{
			// --- Head ---
			Text message = err._message;

			// --- Body ---
			message += beautify_index(__index);

			// Actually raising the damn thing
			_raise_error
			(
				message,
				0xDeadBeef
			);
		}

		void raise_arg(const Exceptions::BaseArgumentException &err, const Text &arg)
		{
			_raise_error
			(
				err._message
				+ U" ( \'"
				+ arg
				+ U"\' )."
				+ nl_txt,
				0xBeef
			);
		}

		void raise_internal
		(
			const Exceptions::BaseInternalException &err,
			std::string __file, Text __func, Natural __line
		)
		{
			_raise_error
			(
				err._message
				+ U" at \""
				+ Conversions::str_to_text(__file)
				+ U"\" at \""
				+ __func
				+ U"\" at line "
				+ Conversions::str_to_text(std::to_string(__line))
				+ U'.' + nl_txt,
				0xDead
			);
		}

		void add_scope()
		{
			scope_count++;
		}

		void exit_scope()
		{
			// Scope count can't go under 0.
			if (scope_count)
				scope_count--;

			else
				raise_internal
				(
					Exceptions::InternalMathDomainException(),
					__FILE__, ALTON_FUNCTION_DETECT, __LINE__
				);
		}

		Text get_scope()
		{
			// --- Head ---
			Text output;

			// --- Body ---
			for (Natural _ = 1; _ < scope_count; _++)
				output += U"- ";

			return output;
		}

		Text get_initializer (Component component)
		{
			// --- Head ---
			Text output;

			// --- Body ---
			output += text_init
					U' ' +
					get_scope () +
					get_component_char(component) +
					U' ' ;

			// --- Footer ---
			return output;
		}

		void log_initializer (Component component, FILE *&stream)
		{
			ansi_term_colour
			(
				ANSIColourStrength::low_ansi_colour_strength,
				ANSIColourCode::ansi_colour_blue,
				stream
			);

			_log
			(
				get_initializer (component),
				stream
			);

			ansi_term_colour ();
		}

		void say(Component component, const Text &text, ANSIColourStrength strength, ANSIColourCode colour, FILE *&stream)
		{
			log_initializer (component, stream);

			ansi_term_colour(strength, colour, stream);
			_log(
				text + nl_txt,
				stream
			);
		}

		void print_header()
		{
			// --- Line initializer ---
			log_initializer (Component::clinic_lib, stdout);

			// --- The Version data ---
			ansi_term_colour
			(
				ANSIColourStrength::high_ansi_colour_strength
			);
			_log
			(
				text_init
				U"Alton, " + ALTON_RELEASE_NAME + U", 0x"															// The Release Name
				+		 Tools::left_fill(Conversions::base2_to_basen(ALFIE_MAJOR_VERSION, 16),		  U'0', 2)		// The Major version
				+ U"." + Tools::left_fill(Conversions::base2_to_basen(ALTON_REVISION, 16), U'0', 2)					// The Standard
				+ U"." + Tools::left_fill(Conversions::base2_to_basen(ALTON_COMMIT_NUMBER, 16),		  U'0', 2)		// The Commit Number
				+ ALTON_VERSION_POSTFIX																				// The version postphiccs

				, stdout
			);

			// --- The build time data ---
			ansi_term_colour
			(
				ANSIColourStrength::low_ansi_colour_strength,
				ANSIColourCode::ansi_colour_white
			);
			_log
			(
				text_init
					// This Year
					U". [ "
					+ Conversions::base2_to_basen
					(
						ALTON_BUILD_TIME_YEAR, 10
					) + U"/"
					// This Month
					+ Conversions::base2_to_basen
					(
						ALTON_BUILD_TIME_MONTH, 10
					) + U"/"
					// Today
					+ Conversions::base2_to_basen
					(
						ALTON_BUILD_TIME_DAY, 10
					) + U" "

					// This Hour
					+ Conversions::base2_to_basen
					(
						ALTON_BUILD_TIME_HOUR, 10
					) + U":"
					// This Minute
					+ Conversions::base2_to_basen
					(
						ALTON_BUILD_TIME_MINUTE, 10
					) + U":"
					// This Second
					+ Conversions::base2_to_basen
					(
						ALTON_BUILD_TIME_SECOND, 10
					) + U" ",
				stdout
			);

			// --- The platform data ---
			_log
			(
				text_init
				// This Compiling Platform
				ALTON_OS_TEXT + U" " + ALTON_ARCH_TEXT + U" " +
				ALTON_COMPILER_TEXT + U" ]" + nl_txt
				
				, stdout
			);

			// -- Line initializer --
			log_initializer (Component::clinic_lib, stdout);

			ansi_term_colour
			(
				ANSIColourStrength::low_ansi_colour_strength,
				ANSIColourCode::ansi_colour_white
			);
			
			_log
			(text_init
				// The version of Python used
				U"Made with Python " + ALTON_PYTHON_VERSION_INFO +  nl_txt,
				stdout
			);
			ansi_term_colour();
		}

		void ansi_term_colour
		(
				ANSIColourStrength strength,
				ANSIColourCode colour,
				FILE *&stream
		)
		{
			// --- Body ---
			// -- Printing the ANSI escape code initial --
			_log(U"\033[0", stream);

			// -- Printing the colour strength --
			switch (strength)
			{
			case ANSIColourStrength::low_ansi_colour_strength:
				_log(U";2", stream);
				break;

			case ANSIColourStrength::high_ansi_colour_strength:
				_log(U";1", stream);
				break;

			case ANSIColourStrength::neutral_ansi_colour_strength:
			default:
				break;
			}

			// -- Printing the colour --
			/**
			 * NOTE: The ANSIColourCode enumerations use ANSI colour codes as
				their id, the exception is the
				ANSIColourCode::ansi_colour_neutral item.
			 */
			if (colour != ANSIColourCode::ansi_colour_neutral)
			{
				_log(U";", stream);
				_log(colour, stream);
			}

			_log(U"m", stream);
		}
	}
}

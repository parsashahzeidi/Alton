# include <Clinic/Clinic.hpp>
# include <Tools/TextFill.hpp>
# include <ETC/VersionData.hpp>
# include <Tools/TextFill.hpp>



namespace Alton
{
	namespace Clinic
	{
		Text *code = nullptr;

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
				atexit(_delete_setup);
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
					ansi_term_colour(ANSIColourStrength::high_ansi_colour_strength);
					index.curr_line += U"|   ";
					ansi_term_colour();
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
			_log(U"\tTerminating...\n", stdout);
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
			for (Natural i = 0; i < index.chtr; i++)
				message += U'-';
			
			// --		------------^ --
			message += U"^\n";

			return message;
		}

		void raise_pos(const Exceptions::BaseExternalException &err, Natural __index)
		{
			// --- Head ---
			Text message = err._message;

			// --- Body ---
			message += beautify_index(__index);

			// Actually raising the shit
			_raise_error(
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
				+ U"\' ).\n",
				0xBeef
			);
		}

		void raise_internal(const Exceptions::BaseInternalException &err, std::string __file, Natural __line)
		{
			_raise_error(
				err._message
				+ U" at "
				+ Conversions::str_to_text(__file)
				+ U":"
				+ Conversions::str_to_text(std::to_string(__line))
				+ U"\n",
				0xDead
			);
		}

		void say(Component component, const Text &text)
		{
			_log
			(
				text_init
				U"["
				+ Tools::left_fill(get_component_string(component), U' ', 20)
				+ U"]  "
				+ text
				+ U"\n"
				, stdout
			);
		}

		void print_header()
		{
			// --- The Version data ---
			ansi_term_colour(ANSIColourStrength::high_ansi_colour_strength);
			_log
			(
				text_init
				U"Alton, " + ALTON_RELEASE_NAME + U", Version 0x"											// The Release Name
				+		 Tools::left_fill(Conversions::base2_to_basen(ALFIE_MAJOR_VERSION, 16),		  U'0', 2)		// The Major version
				+ U"." + Tools::left_fill(Conversions::base2_to_basen(ALTON_REVISION, 16), U'0', 2)		// The Standard
				+ U"." + Tools::left_fill(Conversions::base2_to_basen(ALTON_COMMIT_NUMBER, 16),		  U'0', 2)		// The Commit Number
				+ ALTON_VERSION_POSTFIX																				// The version postphiccs

				, stdout
			);

			// --- The build time data ---
			ansi_term_colour(ANSIColourStrength::low_ansi_colour_strength);
			_log
			(
				text_init
				U". Built at " 
				+ Conversions::base2_to_basen(ALTON_BUILD_TIME_YEAR,  10) + U"/"									// This Year
				+ Conversions::base2_to_basen(ALTON_BUILD_TIME_MONTH, 10) + U"/"									// This Month
				+ Conversions::base2_to_basen(ALTON_BUILD_TIME_DAY,	  10) + U" "									// Today

				+ Conversions::base2_to_basen(ALTON_BUILD_TIME_HOUR,   10) + U":"									// This Hour
				+ Conversions::base2_to_basen(ALTON_BUILD_TIME_MINUTE, 10) + U":"									// This Minute
				+ Conversions::base2_to_basen(ALTON_BUILD_TIME_SECOND, 10)											// This Second

				, stdout
			);

			// --- The platform data ---
			_log
			(
				text_init
				U" [" + ALTON_OS_TEXT + U" " + ALTON_ARCH_TEXT														// This Compiling Platform

				+ U"].\n Made with Python "
				+ ALTON_PYTHON_VERSION_INFO + U"\n"															// The version of Python used

				, stdout
			);
			ansi_term_colour();
		}

		void ansi_term_colour(ANSIColourStrength strength, ANSIColourCode colour, FILE *&stream)
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
			/** NOTE: The ANSIColourCode enumeration uses ANSI colour codes as their id. */
			_log(U";", stream);
			_log(colour, stream);
			_log(U"m", stream);
		}
	}
}

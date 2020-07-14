# pragma once

# include <ETC/BareboneMacros.hpp>
# include <Conversions/StringConvert.hpp>
# include <Clinic/Exceptions/ErrorTemplates.hpp>
# include <Clinic/Component.hpp>
# include <Clinic/FileIndexData.hpp>
# include <Clinic/ANSIColour.hpp>


namespace Alton
{
	namespace Clinic
	{
		/**
		 * BRIEF: Frees the setup's allocaed memory.
		*/
		void _delete_setup();

		/**
		 * BRIEF: Sets up the error handling system
		 * PARAM: _code The input text representing the loggings and error raising.
		*/
		void setup_error_handling(const Text &_code);

		/**
		 * BRIEF: Sets up the error handling system with a duplicate item
		*/
		void dupe_error_handling_setup();

		/**
		 * BRIEF: Gets line:char from a text and index
		*/
		FileIndexData _get_index(Natural ptr);

		/**
		 * BRIEF: Prints a raw text
		 * PARAM: text The text to throw
		*/
		void _log(Text text, FILE *&stream);

		/**
		 * BRIEF: Prints a raw text
		 * PARAM: number The number to throw
		*/
		void _log(Number number, FILE *&stream);

		/**
		 * BRIEF: Crashes the application.
		 * PARAM: code The integer to throw.
		*/
		void terminate(Number code);

		/**
		 * BRIEF: Raises an error and exits.
		 * PARAM: err The text descibing the error
		 * PARAM: code The error code to exit with ( if not handled )
		*/
		void _raise_error(const Text &text, Number code);

		/**
		 * BRIEF: Adds stuff around an index.
		 * PARAM: index the frustratingly-good-shit to add stuff around.
		*/
		Text beautify_index(Natural __index);

		/**
		 * BRIEF: Raises an error like err at line:char ...
		 * PARAM: err Alton::Exceptions::BaseCodeException type
		 * PARAM: __index Index of the character that's causing the error
		*/
		void raise_pos(const Exceptions::BaseExternalException &err, Natural __index);

		/**
		 * BRIEF: Raises an error like err ( arg )
		 * PARAM: err Alton::Exceptions::BaseArgumentException type
		 * PARAM: arg The problematic argument
		*/
		void raise_arg(const Exceptions::BaseArgumentException &err, const Text &arg);

		/**
		 * BRIEF: Raises an internal error.
		 * PARAM: err Alton::Exceptions::BaseInternalException type
		*/
		void raise_internal(const Exceptions::BaseInternalException &err, std::string __file, Text __function, Natural __line);

		/**
		 * BRIEF: Enters a scope for the output terminal's initial spaces.
		*/
		void add_scope();

		/**
		 * BRIEF: Exits a scope for the output terminal's initial spaces.
		*/
		void exit_scope();

		/**
		 * BRIEF: Returns the dent count depending on the scope count
		 * RETURN: "- " * scope_count
		*/
		Text get_scope();

		/**
		 * BRIEF: Returns the dent count concat-ed with the component character
		 * PARAM: component The component to get the initializer of
		 */
		Text get_initializer (Component component);

		/**
		 * BRIEF: Prints the result of get_initializer () with added colour
		 * PARAM: component The argument to redirect
		 * PARAM: stream The text stream to print to
		 */
		void log_initializer (Component component, FILE *&stream)

		/**
		 * BRIEF: Log a string as a component from alfie
		 * PARAM: component The component that's logging.
		 * PARAM: text The text that speaks up.
		*/
		void say(Component component, const Text &text, ANSIColourStrength strength = ANSIColourStrength::neutral_ansi_colour_strength, ANSIColourCode colour = ANSIColourCode::ansi_colour_light_grey, FILE *&stream = stdout);

		/**
		 * BRIEF: Prints the standard Alton header
		*/
		void print_header();

		/**
		 * BRIEF: Changes the colour of the current terminal
		 * PARAM: strength The strength of the colour
		 * PARAM: colour The colour's name
		 * PARAM: reset The switch to indicate resetting of the colours.
		*/
		void ansi_term_colour(ANSIColourStrength strength = ANSIColourStrength::neutral_ansi_colour_strength, ANSIColourCode colour = ANSIColourCode::ansi_colour_neutral, FILE *&stream = stdout);
	}
}

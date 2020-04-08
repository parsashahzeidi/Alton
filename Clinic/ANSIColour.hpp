
namespace Alton
{
	namespace Clinic
	{
		/** BRIEF: 3 ansi colour strengths, 1, 2, and neutral. */
		enum ANSIColourStrength
		{
			neutral_ansi_colour_strength,
			high_ansi_colour_strength = 1,
			low_ansi_colour_strength = 2
		};

		/** BRIEF: some pre-picked, but standard ansi colours. */
		enum ANSIColourCode
		{
			ansi_colour_black = 30,
			ansi_colour_red = 31,
			ansi_colour_green = 32,
			ansi_colour_yellow = 33,
			ansi_colour_blue = 34,
			ansi_colour_magenta = 35,
			ansi_colour_cyan = 36,
			ansi_colour_light_grey = 37,
			ansi_colour_grey = 90,
			ansi_colour_bright_red = 91,
			ansi_colour_bright_green = 92,
			ansi_colour_bright_yellow = 93,
			ansi_colour_bright_blue = 94,
			ansi_colour_pink = 95,
			ansi_colour_bright_cyan = 96,
			ansi_colour_white = 97
		};
	}
}

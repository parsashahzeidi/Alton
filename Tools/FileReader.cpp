# include <Tools/FileReader.hpp>
# include <ETC/BareboneMacros.hpp>
# include <Clinic/Clinic.hpp>


namespace Alton
{
	namespace Tools
	{
		Text read_file(std::filesystem::path path)
		{
			// --- Head ---
			std::string out;
			char cache[1024] = {U'\0'};
			std::fstream t(path);

			// --- Body ---
			// Raising an error if the filepath is obscure or has no length
			if (
				t.fail() ||
				t.eof() ||
				(!std::filesystem::exists(path)) ||
				std::filesystem::is_directory(path)
			)
			{
				Clinic::ansi_term_colour(Clinic::ANSIColourStrength::high_ansi_colour_strength, Clinic::ANSIColourCode::ansi_colour_red);
				Clinic::say(Clinic::Component::tool_lib, U"Fail triggered.");
				Clinic::ansi_term_colour();
				goto Raise;
			}
			
			// Optimizing the string
			out.reserve(std::filesystem::file_size(path));

			// While we haven't reached the end of t
			while (t)
			{
				t.read(cache, 1023);
				out += cache;

				// Clearing cache; just in case we have a read shorter than 1KiB
				// if (t) is there to help optimise the last bits.
				if (t)
					for (Natural i = 0; i < 1023; i++)
						cache[i] = 0;
			}
			return Conversions::str_to_text(out);

		Raise:
			Clinic::raise_arg
			(
				Clinic::Exceptions::InvalidArgumentValueException(),
				U"-i=" + path.u32string()
			);

			return U"";
		}
	}
}

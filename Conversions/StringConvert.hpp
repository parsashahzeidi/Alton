# pragma once

# include <ETC/BareboneMacros.hpp>
namespace Alton
{
	namespace Conversions
	{
		/**
		 * BRIEF: Converts a text type to another without
			considering unicode.
		*/
		template <typename in, typename out>
		out string_convert(const in &_in);

		/**
		 * BRIEF: Converts a Text to a std::string
		 * 
		 * NOTE: This command will be deceprated in the close future.
		*/
		std::string text_to_str(const Text &s);

		/**
		 * BRIEF: Converts a std::string to a Text
		 * 
		 * NOTE: This command will be deceprated in the close future.
		*/
		Text str_to_text(const std::string &s);

		/**
		 * BRIEF: Converts a numeric object to a text
		 * PARAM: num The obvious parameter
		 * PARAM: base The base parameter
		*/
		Text base2_to_basen(Number num, Natural base = 10);
	}
}

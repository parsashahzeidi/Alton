# pragma once

# include <ETC/Macros.hpp>

namespace Alton
{
	namespace Conversions
	{
		/**
		 * @brief Converts a text type to another
		*/
		template <typename in, typename out>
		out _str_cvt(const in &_in)
		{
			// --- Head ---
			out _out;

			// --- Body ---
			for (natural_num_t i = 0; i < _in.size(); i++)
				_out += _in[i];

			return _out;
		}

		/**
		 * @brief Converts a text_t to a std::string
		 * 
		 * Note:
		 * 	This command will be deceprated in the close future.
		*/
		std::string text_to_str(const text_t &s)
		{
			return _str_cvt<text_t, std::string>(s);
		}

		/**
		 * @brief Converts a std::string to a text_t
		 * 
		 * Note:
		 * 	This command will be deceprated in the close future.
		*/
		text_t str_to_text(const std::string &s)
		{
			return _str_cvt<std::string, text_t>(s);
		}
	}
}

# pragma once

# include <ETC/Macros.hpp>

namespace Alton
{
	namespace Tools
	{
		/**
		 * @brief Fills the right side of a text with a number of chtrs until the string is the size of len
		 * @param in The input text
		 * @param chtr The character to fill the output with
		 * @param len The minimum length of the resulting text
		
		 * @return A text
		*/
		text_t left_fill(const text_t &in, utfchar_t chtr, natnum_t len)
		{
			// --- Head ---
			text_t out = in;
			out.reserve(len);

			// --- Body ---
			while (out.size() < len)
			{
				out = chtr + out;
			}

			return out;
		}

		/**
		 * @brief Fills the right side of a text with a number of chtrs until the string is the size of len
		 * @param in The input text
		 * @param chtr The character to fill the output with
		 * @param len The minimum length of the resulting text
		
		 * @return A text
		*/
		text_t right_fill(const text_t &in, utfchar_t chtr, natnum_t len)
		{
			// --- Head ---
			text_t out = in;
			out.reserve(len);

			// --- Body ---
			while (out.size() < len)
			{
				out += chtr;
			}

			return out;
		}
	}
}
# include <Tools/TextFill.hpp>
# include <ETC/BareboneMacros.hpp>


namespace Alton
{
	namespace Tools
	{
		Text left_fill(const Text &in, Character chtr, Natural len)
		{
			// --- Head ---
			Text out = in;
			out.reserve(len);

			// --- Body ---
			while (out.size() < len)
			{
				out = chtr + out;
			}

			return out;
		}

		Text right_fill(const Text &in, Character chtr, Natural len)
		{
			// --- Head ---
			Text out = in;
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
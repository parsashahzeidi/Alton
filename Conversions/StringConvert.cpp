# include <ETC/BareboneMacros.hpp>
# include <Conversions/StringConvert.hpp>


namespace Alton
{
	namespace Conversions
	{
		template <typename in, typename out>
		out string_convert(const in &_in)
		{
			out _out;
			_out.resize(_in.size());

			for (Natural i = 0; i < _in.size(); i++)
			{
				_out[i] = _in[i];
			}

			return _out;
		}

		std::string text_to_str(const Text &s)
		{
			// --- Head ---
			std::string out;
			Character curr;
			out.reserve(s.size());

			// --- Body ---
			for (Natural i = 0; i < s.size(); i++)
			{
				curr = s[i];

				// -- Non ascii --
				if ((curr & 0x80) != 0)
				{
					// - Appending the non ascii chars 1 by 1 -
					for (Natural _ = sizeof(curr); _ > 0; i--)
					{
						// Curr is finished
						if (!curr)
							break;
						
						// Curr is still full
						else
						{
							out += char(curr & 0xff);
							out.reserve(out.capacity() + 1);
							curr >>= 8;
						}
					}
				}

				// -- Ascii --
				else out += curr;
			}

			return out;
		}

		Text str_to_text(const std::string &s)
		{
			return string_convert<std::string, Text>(s);
		}

		Text base2_to_basen(Number num, Natural base)
		{
			// --- Head ---
			// -- The remainder to ten --
			Number remainder = num % base;

			// -- Character representation for remainder --
			Character remainder_char;

			// -- The recursing number --
			Number divisible = (num - remainder) / base;

			// -- The output --
			Text out;

			// --- Body ---
			// -- If a non-zero number is present, recurse. --
			if (divisible != 0)
				out += base2_to_basen(divisible, base);

			// -- Calculate the remainder character --
			remainder_char = U'0' + remainder;

			// -- Using alphabet if remainder > 9 --
			/**
			 *  U'9' == 57
			 *  U'A' == 65
			 *  => 57 - 65 - 1 == 7
			 * 		=> This states that there are 7 characters between the ascii characters U'A' and U'9'.
			 * 			Therfore, if the remainder is bigger than 9, we can add 7 to skip the seven unused
			 * 			characters and achieve this:
			 * 				remainder = 0;	remainder_char = U'0';
			 * 				remainder = 1;	remainder_char = U'1';
			 * 				remainder = 2;	remainder_char = U'2';
			 * 				remainder = 3;	remainder_char = U'3';
			 * 
			 * 				remainder = 4;	remainder_char = U'4';
			 * 				remainder = 5;	remainder_char = U'5';
			 * 				remainder = 6;	remainder_char = U'6';
			 * 				remainder = 7;	remainder_char = U'7';
			 * 
			 * 				remainder = 8;	remainder_char = U'8';
			 * 				remainder = 9;	remainder_char = U'9';
			 * 				remainder = 10;	remainder_char = U'A';
			 * 				remainder = 11;	remainder_char = U'B';
			 * 
			 * 				remainder = 12;	remainder_char = U'C';
			 * 				remainder = 13;	remainder_char = U'D';
			 * 				remainder = 14;	remainder_char = U'E';
			 * 				remainder = 15;	remainder_char = U'F';
			*/
			if (remainder > 9)
				remainder_char += 7;
			
			// -- Appending the base number to the output --
			out += remainder_char;

			return out;
		}
	}
}

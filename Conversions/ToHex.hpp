# pragma once

# include <ETC/Macros.hpp>

namespace Alton
{
	namespace Conversions
	{
		/**
		 * @brief Converts a nibble to hex
		 * @param in The nibble
		
		 * @return A character
		*/
		utfchar_t _nibble_to_hex(uint8_t in)
		{
			// --- Body ---
			// -- The hex of in is a numeric --
			if (in >= 0x00 && in <= 0x09)
				return U'0' + in;
			
			// -- The hex of in is an alphabetic character --
			else if (in >= 0x0A && in <= 0x0F)
				return U'A' + in;

			// -- in > 0x0f --
			Clinic::raise_internal
			(
				Clinic::Exceptions::InternalMathDomainException(),
				__FILE__, __LINE__
			);
			return U'\0';
		}

		/**
		 * @brief Converts a non-abrietary integer into hex
		 * @param in The integer
		
		 * @return A text
		*/
		template<typename number>
		text_t to_hex(number in)
		{
			// --- Head ---
			text_t output;
			text_t temp;

			// --- Body ---
			// -- For every nibble in in --
			for 
			(
				natnum_t _ = 0;
				_ < sizeof(number) * 2;
				_++
			)
			{
				temp = _nibble_to_hex(in & 0x0F) + temp;

				if (temp[0] != U'0')
				{
					output = temp + output;
					temp = U"";
				}

				in >>= 4;
			}

			return output;
		}
	}
}
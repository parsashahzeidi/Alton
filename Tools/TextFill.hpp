# pragma once

# include <ETC/BareboneMacros.hpp>


namespace Alton
{
	namespace Tools
	{
		/**
		 * BRIEF: Fills the right side of a text with a number of chtrs until the string is the size of len
		 * PARAM: in The input text
		 * PARAM: chtr The character to fill the output with
		 * PARAM: len The minimum length of the resulting text
		
		 * RETURN: A text
		*/
		Text left_fill(const Text &in, Character chtr, Natural len);

		/**
		 * BRIEF: Fills the right side of a text with a number of chtrs until the string is the size of len
		 * PARAM: in The input text
		 * PARAM: chtr The character to fill the output with
		 * PARAM: len The minimum length of the resulting text
		
		 * RETURN: A text
		*/
		Text right_fill(const Text &in, Character chtr, Natural len);
	}
}
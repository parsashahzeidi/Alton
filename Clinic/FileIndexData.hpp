# include <ETC/BareboneMacros.hpp>


namespace Alton
{
	namespace Clinic
	{
		/**
		 * BRIEF: A structure to hold high-level
			data of a certain index in a certain text.
			This data includes the line number,	The
			visual chatacters skipped from line
			start ( eg. Tabs are four characters. ),
			The actual chatacters passed from line start,
			And a text representing the line data.
		*/
		struct FileIndexData
		{
			Natural line = 1;
			Natural chtr = 0;

			Text curr_line = U"";
		};
	}
}

# pragma once

# include <ETC/BareboneMacros.hpp>
# include <Types/BaseContainer.hpp>
# include <ArgumentProcessor/arg_id.hpp>


namespace Alton
{
	namespace ArgumentProcessor
	{
		struct Argument
		{
			ArgumentID arg;
			Text value;
		};

		using ArgumentList = Container<Argument>;
	}
}
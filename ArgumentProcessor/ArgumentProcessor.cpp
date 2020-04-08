

# include <ArgumentProcessor/ArgumentProcessor.hpp>


namespace Alton
{
	namespace ArgumentProcessor
	{
		ArgumentList ArgumentProcessor::_get_args()
		{
			// --- Head ---
			ArgumentList out;
			Argument cache;

			// --- Body ---
			h.init_op();

			// Skipping the first argument
			h.advance();

			// Iterating thru
			while (h.is_operating())
			{
				// Finding the current char
				h.arg_is_identical();

				// Replacing cache
				cache.arg = h.current_arg_id;
				cache.value = h.curr(0);

				// Checking if the argument starts with a '-'
				if (h.curr(0)[0] != '-')
					Clinic::raise_arg
					(
						Clinic::Exceptions::InvalidArgumentException(),
						h.curr(0)
					);

				// Cutting the first part of the argument
				// Example: -i=./in.lfi
				//	== ./in.lfi
				cache.value = cache.value.substr
				(
					h.arg_group[cache.arg].size() + 1  // The size of the current argument
				);
				out.push_back(cache);

				h.advance();
			}

			return out;
		}

		ArgumentState ArgumentProcessor::_reformat(ArgumentList in)
		{
			// --- Head ---
			Argument cache;
			ArgumentState formatted;

			// --- Body ---
			// Allocating ArgumentID::count items at formatted
			formatted.resize(ArgumentID::count);

			// Reformatting the chart 
			for (Natural i = 0; i < in.size(); i++)
			{
				cache = in[i];
				formatted[cache.arg] = cache.value;
			}
			
			return formatted;

		}

		ArgumentState ArgumentProcessor::process()
		{
			ArgumentList arg_list = _get_args();
			ArgumentState formatted = _reformat(arg_list);
			
			return formatted;
		}

		// --- CTOR ~ DTOR
		// --- Constructor ---
		// -- Default constructor --
		ArgumentProcessor::ArgumentProcessor(char** _argv, Natural argc):
				h(Container<Text>())
		{
			// --- Body ---
			for (Natural i = 0; i < argc; i++)
				h.out.push_back(Conversions::str_to_text(_argv[i]));
		}

		// --- Destructor ---
		// -- Default destructor --
			ArgumentProcessor::~ArgumentProcessor() { }
	}
}

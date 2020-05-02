

# include <ArgumentProcessor/ArgumentHelper.hpp>


namespace Alton
{
	namespace ArgumentProcessor
	{
		void ArgumentHelper::_setup_arg_group()
		{
			// --- Head ---
			Text args[] =
			{
					U"o="  // Output path
				,U"i="  // Input file
			};

			// --- Body ---
			arg_group.clear();
			for (Natural i = 0; i < ArgumentID::count; i++)
				arg_group.push_back(args[i]);
		}

		void ArgumentHelper::arg_is_identical()
		{
			// --- Head ---
			Natural min_size;
			Text arg_head;

			// --- Body ---
			for (Natural i = 1; i < arg_group.size(); i++)
			{
				min_size = arg_group[i].size();

				// If the substring process goes out of bounds,
				// the application crashes; so...
				if (curr(0).size() < (min_size + 1))
					continue;

				// We can now perform the substring-ing without worries.
				arg_head = curr(0).substr(1, min_size);

				// finding the argument
				if (arg_group[i] == arg_head)
				{
					current_arg_id = (ArgumentID)i;
					return;
				}
			}

			// No argument found
			Clinic::raise_arg(
				Clinic::Exceptions::InvalidArgumentException(), curr(0)
			);
		}

		// --- Ctor ~ Dtor
		// --- CTOR ---
		// -- Customized CTOR ---
		ArgumentHelper::ArgumentHelper(Container<Text> in):
				BaseHelper(in)
		{
			_setup_arg_group();
		}

		// --- DTOR ---
		// -- Default DTOR --
		ArgumentHelper::~ArgumentHelper()
		{ }
	}
}

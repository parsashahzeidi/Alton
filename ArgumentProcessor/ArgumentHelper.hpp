# pragma once

# include <ETC/BareboneMacros.hpp>
# include <Types/BaseHelper.hpp>
# include <ArgumentProcessor/arg_id.hpp>
# include <ArgumentProcessor/Argument.hpp>
# include <ArgumentProcessor/ArgumentState.hpp>


namespace Alton
{
	namespace ArgumentProcessor
	{
		class ArgumentHelper: public BaseHelper<Text, Container<Text>, false>
		{
			// --- Head
		public:
			Container<Text> arg_group;
			ArgumentID current_arg_id = ArgumentID::count;

			// --- Body
		public:
			/**
			 * BRIEF: Fills arg_group with arguments
			*/
			void _setup_arg_group();

			/**
			 * BRIEF: Checks for an argument
			*/
			void arg_is_identical();

			// --- Ctor ~ Dtor
		public:
			// --- CTOR ---
			// -- Default CTOR --
			ArgumentHelper() = delete;
			
			// -- Customized CTOR ---
			ArgumentHelper(Container<Text> in);

			// --- DTOR ---
			// -- Default DTOR --
			~ArgumentHelper();
		};
	}
}


# pragma once

# include <ETC/BareboneMacros.hpp>
# include <ArgumentProcessor/arg_id.hpp>
# include <ArgumentProcessor/Argument.hpp>
# include <ArgumentProcessor/ArgumentState.hpp>
# include <ArgumentProcessor/ArgumentHelper.hpp>


namespace Alton
{
	namespace ArgumentProcessor
	{
		class ArgumentProcessor
		{
			// --- Head
		private:
			ArgumentHelper h;

			// --- Body
		private:
			/**
			 * BRIEF: Gets the arguments from argc and argv.
			*/
			ArgumentList _get_args();

			/**
			 * BRIEF: Reformats an ArgumentList into an ArgumentState
			 * 
			 * The reason for not making ArgumentState-s in the first
			 *  place is that if some arguments have order-specialities,
			 *  we can easily find them by using _get_args.
			*/
			ArgumentState _reformat(ArgumentList in);

		public:
			/**
			 * BRIEF: Processes the arguments in argv
			*/
			ArgumentState process();

			// --- CTOR ~ DTOR
		public:
			// --- Constructor ---
			// -- Default constructor --
			ArgumentProcessor() = delete;

			ArgumentProcessor(char** _argv, Natural argc);

			// --- Destructor ---
			// -- Default destructor --
			~ArgumentProcessor();
		};
	}
}

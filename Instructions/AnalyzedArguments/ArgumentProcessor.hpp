# pragma once

# include <ETC/Macros.hpp>
# include <Instructions/AnalyzedArguments/ArgumentHelper.hpp>

namespace Alton
{
	namespace ArgProcessor
	{
		class ArgProcessor
		{
			// --- Head
		private:
			ArgHelper helper;

			// --- Body
		private:
			/**
			 * @brief Gets the params from argc and argv.
			*/
			arg_list_t _get_args()
			{
				// --- Head ---
				arg_list_t out;
				arg_t cache;

				// --- Body ---
				// Causes faster execution
				out.reserve(helper.out.size());

				helper.init_op();

				// Skipping the first argument
				helper.advance();

				// Iterating thru
				while (helper.is_operating())
				{
					// Finding the current char
					helper.arg_is_identical();

					// Replacing cache
					cache.arg = helper.current_arg_id;
					cache.value = helper.curr(0);

					// Checking if the parameter starts with a '-'
					if (helper.curr(0)[0] != '-')
						ErrorHandling::raise_arg
						(
							ErrorHandling::Exceptions::InvalidArgumentException(),
							helper.curr(0)
						);

					// Cutting the first part of the parameter
					// Example: -i=./in.lfi
					//	== ./in.lfi
					cache.value = cache.value.substr
					(
						helper.arg_group[cache.arg].size() + 1  // The size of the current parameter
					);
					out.push_back(cache);

					helper.advance();
				}

				return out;
			}

			/**
			 * @brief Reformats a arg_list_t into a arg_chart_t
			 * 
			 * The reason for not making arg_chart_t-s in the first
			 *  place is that if some arguments have order-specialities,
			 *  we can easily find them by using _get_args.
			 * 
			 * arg_chart_t-s are easier / faster to access too, so there's that.
			*/
			arg_chart_t _reformat(arg_list_t in)
			{
				// --- Head ---
				arg_t cache;
				arg_chart_t formatted;

				// --- Body ---
				// Allocating arg_id::count items at formatted
				formatted.resize(arg_id::count);

				// Reformatting the chart 
				for (natural_num_t i = 0; i < in.size(); i++)
				{
					cache = in[i];
					formatted[cache.arg] = cache.value;
				}
				
				return formatted;

			}

		public:
			/**
			 * @brief Processes the arguments in argv
			*/
			arg_chart_t process()
			{
				arg_list_t arg_list = _get_args();
				arg_chart_t formatted = _reformat(arg_list);
				
				return formatted;
			}

			// --- CTOR ~ DTOR
		public:
			// --- Constructor ---
			// -- Default constructor --
			ArgProcessor() = delete;

			ArgProcessor(char** _argv, natural_num_t argc):
					helper(cont_t<text_t>())
			{
				// --- Body ---
				helper.out.reserve(argc);

				for (natural_num_t i = 0; i < argc; i++)
					helper.out.push_back(str_to_text(_argv[i]));
			}

			// --- Destructor ---
			// -- Default destructor --
			~ArgProcessor(){ }
		};
	}
}

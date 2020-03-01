# pragma once

# include <ETC/Macros.hpp>
# include <ArgProcessor/arg_id.hpp>
# include <ArgProcessor/arg_t.hpp>
# include <ArgProcessor/arg_state_t.hpp>
# include <ArgProcessor/ArgumentHelper.hpp>

namespace Alton
{
	namespace ArgProcessor
	{
		class ArgProcessor
		{
			// --- Head
		private:
			ArgHelper h;

			// --- Body
		private:
			/**
			 * @brief Gets the arguments from argc and argv.
			*/
			arg_list_t _get_args()
			{
				// --- Head ---
				arg_list_t out;
				arg_t cache;

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

			/**
			 * @brief Reformats a arg_list_t into a arg_state_t
			 * 
			 * The reason for not making arg_state_t-s in the first
			 *  place is that if some arguments have order-specialities,
			 *  we can easily find them by using _get_args.
			 * 
			 * arg_state_t-s are easier / faster to access too, so there's that.
			*/
			arg_state_t _reformat(arg_list_t in)
			{
				// --- Head ---
				arg_t cache;
				arg_state_t formatted;

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
			arg_state_t process()
			{
				arg_list_t arg_list = _get_args();
				arg_state_t formatted = _reformat(arg_list);
				
				return formatted;
			}

			// --- CTOR ~ DTOR
		public:
			// --- Constructor ---
			// -- Default constructor --
			ArgProcessor() = delete;

			ArgProcessor(char** _argv, natural_num_t argc):
					h(cont_t<text_t>())
			{
				// --- Body ---
				for (natural_num_t i = 0; i < argc; i++)
					h.out.push_back(Conversions::str_to_text(_argv[i]));
			}

			// --- Destructor ---
			// -- Default destructor --
			~ArgProcessor(){ }
		};
	}
}

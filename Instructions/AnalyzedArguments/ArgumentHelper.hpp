# pragma once

# include <ETC/Macros.hpp>
# include <ETC/BaseHelper.hpp>

namespace Alton
{
	namespace ArgProcessor
	{
		// A list for all the possible arguments
		enum arg_id
		{
			output_path = 0,
			input_file,

			count  // Make sure that this is the last item
		};

		// A chart for easier detection of arguments
		typedef std::vector<text_t> arg_chart_t;

		struct _arg
		{
			arg_id arg;
			text_t value;
		};

		typedef struct _arg arg_t;
		typedef std::vector<arg_t> arg_list_t;
		
		class ArgHelper: public BaseHelper<text_t, std::vector<text_t>>
		{
			// --- Head
		public:
			std::vector<text_t> arg_group;
			arg_id current_arg_id = arg_id::count;

			// --- Body
		private:
			/**
			 * @brief Fills arg_group with arguments
			*/
			void _setup_arg_group()
			{
				// --- Head ---
				// std::string is easier here, but (TODO:) will be replaced in the future.

				// Note: Since we're using comments at the end, I think the code'd be more
				//	readable if we put the commas at the start of each item; I'd also like
				//	to have each argument in a separate line.
				std::string args[] =
				{
					 "o="  // Output path
					,"i="  // Input file
				};

				// --- Body ---
				arg_group.reserve(arg_id::count);

				for (natural_num_t i = 0; i < arg_id::count; i++)
					arg_group.push_back(str_to_text(args[i]));
			}

		public:
			/**
			 * @brief Checks for an argument
			*/
			void arg_is_identical()
			{
				// --- Head ---
				natural_num_t min_size;
				text_t arg_head;

				// --- Body ---
				for (natural_num_t i = 1; i < arg_group.size(); i++){
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
						current_arg_id = (arg_id)i;
						return;
					}
				}
				
				// No argument found
				ErrorHandling::raise_arg(ErrorHandling::Exceptions::InvalidParamException(), curr(0));
			}

			// --- Ctor ~ Dtor
		public:
			// --- CTOR ---
			// -- Default CTOR --
			ArgHelper() = delete;
			
			// -- Customized CTOR ---
			ArgHelper(std::vector<text_t> in):
					BaseHelper(in)
			{ 
				_setup_arg_group(); 
			}

			// --- DTOR ---
			// -- Default DTOR --
			~ArgHelper(){ }
		};
	}
}


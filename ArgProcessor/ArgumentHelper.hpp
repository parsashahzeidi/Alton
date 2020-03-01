# pragma once

# include <ETC/Macros.hpp>
# include <Types/BaseHelper.hpp>
# include <ArgProcessor/arg_id.hpp>
# include <ArgProcessor/arg_t.hpp>
# include <ArgProcessor/arg_state_t.hpp>

namespace Alton
{
	namespace ArgProcessor
	{
		class ArgHelper: public BaseHelper<text_t, cont_t<text_t>, false>
		{
			// --- Head
		public:
			cont_t<text_t> arg_group;
			arg_id current_arg_id = arg_id::count;

			// --- Body
		private:
			/**
			 * @brief Fills arg_group with arguments
			*/
			void _setup_arg_group()
			{
				// --- Head ---
				text_t args[] =
				{
					 U"o="  // Output path
					,U"i="  // Input file
				};

				// --- Body ---
				for (natural_num_t i = 0; i < arg_id::count; i++)
					arg_group.push_back(args[i]);
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
				Clinic::raise_arg(Clinic::Exceptions::InvalidArgumentException(), curr(0));
			}

			// --- Ctor ~ Dtor
		public:
			// --- CTOR ---
			// -- Default CTOR --
			ArgHelper() = delete;
			
			// -- Customized CTOR ---
			ArgHelper(cont_t<text_t> in):
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


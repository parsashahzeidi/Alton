# pragma once

# include <Clinic/Clinic.hpp>
# include <ETC/Macros.hpp>

namespace Alton{
	inline namespace Types
	{
		
		template<typename item, typename list, bool refining>
		class BaseHelper
		{
			// --- Head
		public:
			list out;
			list tmp;
			natnum_t it = 0;
			bool during_op = false;

			// --- Body
		public:
			/**
			 * @brief Errors if we're inside an operation
			*/
			void _require_operation() const
			{
				if (!during_op)
					Clinic::raise_internal
					(
						Clinic::Exceptions::NotOperatingYetError(),
						__FILE__, __LINE__
					);
			}

			/**
			 * @brief Errors if we're outside an operation
			*/
			void _require_no_operation() const
			{
				if (during_op)
					Clinic::raise_internal
					(
						Clinic::Exceptions::StillOperatingError(),
						__FILE__, __LINE__
					);
			}

			/**
			 * @brief Initializes an operation.
			*/
			virtual void _init_operation()
			{
				_require_no_operation();
				it = 0;
				during_op = true;
			}

			/**
			 * @brief Exits an operation.
			*/
			virtual void _exit_operation()
			{
				_require_operation();
				if (refining)
				{
					out = tmp;
					tmp.clear();
				}
				it = out.size();
				during_op = false;
			}
			
			/**
			 * @brief Initializes an operation.
			*/
			void init_op()
			{
				_init_operation();
			}

			/**
			 * @brief Checks if the helper can still operate
			*/
			virtual bool is_operating() const
			{
				return during_op;
			}

			/**
			 * @brief Returns the i-th item after it
			*/
			virtual item &curr(num_t i)
			{
				if (out.size() > (it + i))
					return out[it + i];

				else return out[out.size()-1];
			}

			/**
			 * @brief Advances w/o keeping the current variable.
			*/
			virtual void virtually_advance(num_t i = 1)
			{
				_require_operation();

				it += i;

				if (it >= out.size())
					_exit_operation();
			}

			/**
			 * @brief Advances i times.
			*/
			virtual void advance(natnum_t i = 1)
			{
				_require_operation();
				
				for (; (i != 0) && during_op; i--)
				{
					tmp.push_back(curr(0));
					virtually_advance();
				}
			}

			// --- CTOR ~ DTOR
		protected:
			BaseHelper() = delete;
			
			BaseHelper(const list &cache)
			{
				_require_no_operation();
				out = cache;
			}

			~BaseHelper()
			{
				_require_no_operation();
			}
		};
	}
}
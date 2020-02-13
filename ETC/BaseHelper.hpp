# pragma once

# include <ETC/ErrorHandler.hpp>
# include <ETC/Macros.hpp>
# include <ETC/StringConvert.hpp>

namespace Alton{
	template<typename item, typename list>
	class BaseHelper
	{
		// --- Head
	public:
		list out;
		list tmp;
		natural_num_t it = 0;
		bool during_op = false;

		// --- Body
	public:
		/**
		 * @brief Errors if we're inside an operation
		*/
		void _require_operation()
		{
			if (!during_op)
				ErrorHandling::raise_internal(ErrorHandling::Exceptions::NotOperatingYetError());
		}

		/**
		 * @brief Errors if we're outside an operation
		*/
		void _require_no_operation()
		{
			if (during_op)
				ErrorHandling::raise_internal(ErrorHandling::Exceptions::StillOperatingError());
		}

		/**
		 * @brief Initializes an operation.
		*/
		void _init_operation()
		{
			_require_no_operation();
			it = 0;
			during_op = true;
		}

		/**
		 * @brief Exits an operation.
		*/
		void _exit_operation()
		{
			_require_operation();
			out = tmp;
			tmp.clear();
			during_op = false;
		}

	public:
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
		virtual bool is_operating()
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

		virtual void virtually_advance()
		{
			_require_operation();

			it++;

			if (it >= out.size())
				_exit_operation();
		}

		/**
		 * @brief Advances w/o keeping the current variable.
		*/
		virtual void virtually_advance(num_t i)
		{
			_require_operation();

			it += i;

			if (it >= out.size())
				_exit_operation();
		}

		/**
		 * @brief Advances i times.
		*/
		virtual void advance(natural_num_t i = 1)
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
		
		BaseHelper(list &cache)
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
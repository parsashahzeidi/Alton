# pragma once

# include <ETC/Macros.hpp>

namespace Alton
{
	inline namespace Types
	{
		template<typename T>
		class cont_t
		{
			// --- Structs
			struct linked_node
			{
				T data;
				linked_node *next = nullptr;
			};

			// --- Head
		private:
			// Main pointer
			linked_node *ptr = nullptr;

			// Size related stuff
			natnum_t arr_size = 0;

			// Thread related stuff
			natnum_t lock_count = 0;
			std::thread::id lock_owner = std::this_thread::get_id();

			// --- Body
		private:
			/**
			 * @brief Returns a value to indicate 
			*/
			bool __is_locked() const
			{
				return
					// Condition for checking if a lock is present
					lock_count &&
					// Condition for checking if we own the lock
					(lock_owner != std::this_thread::get_id());
			}

			/**
			 * @brief Locks the current array for other threads
			*/
			void _lock()
			{
				// Checking if a lock is present and we dont own it.
				while (__is_locked())
				{
					// Wait a 100 ms and recheck the lock
					std::this_thread::sleep_for
					(
						std::chrono::milliseconds(100)
					);
				}

				lock_owner = std::this_thread::get_id();
				lock_count++;
			}

			/**
			 * @brief Unlocks the most recent lock.
			*/
			void _unlock()
			{
				if (lock_count)
					lock_count--;
			}

			/**
			 * @brief Returns a new node; for appending purposes
			 * @param data Note: this parameter is a reference;
					to prevent using the copy constructor twice.
			*/
			linked_node *_get_new_node(const T &data) const
			{
				// --- Head ---
				linked_node *new_node = new linked_node;

				// --- Body ---
				new_node->data = data;

				return new_node;
			}

			/**
			 * @brief Gets the node at in
			*/
			linked_node &_get_node(natnum_t in) const
			{
				// --- Head ---
				linked_node *current = ptr;
				
				// --- Body ---
				for (size_t i = 0; i < in; i++)
					current = current->next;
				
				return *current;
			}

			/**
			 * @brief Returns the last items in the array
			*/
			linked_node &_back_node() const
			{
				return _get_node(arr_size - 1);
			}

			/**
			 * @brief Returns the first item in the array
			*/
			linked_node &_front_node() const
			{
				return *ptr;
			}

		public:
			/**
			 * @brief Appends an item to the end of the array
			*/
			void push_back(const T &item)
			{
				_lock();
				// --- Head ---
				linked_node *new_node = _get_new_node(item);

				// --- Body ---
				if (!empty())
				{
					_back_node().next = new_node;
				}
				else
				{
					ptr = new_node;
				}

				arr_size++;
				_unlock();
			}

			/**
			 * @brief Appends an item to the end of the array
			*/
			void append(const T &item)
			{
				_lock();
				push_back(item);
				_unlock();
			}

			/**
			 * @brief Removes the last item of the array
			*/
			void pop_back()
			{
				_lock();
				// Deleting the last item
				delete &_back_node();
				arr_size--;

				// Checking if we have no other item in the array
				if (!empty())
					_back_node().next = nullptr;
				_unlock();
			}

			/**
			 * @brief Resizes the array to the specified amount
				Note:
					There is no faster way than to add / remove each item individually
			*/
			void resize(natnum_t in)
			{
				_lock();
				// Checking if we're increasing the array size
				if (in > arr_size)
				{
					while (arr_size != in)
						push_back(T());
				}
				// Or if we are cutting off the array's end
				else if (in < arr_size)
				{
					while (arr_size != in)
						pop_back();
				}
				_unlock();
			}

			/**
			 * @brief Removes every item in the array
			*/
			void clear()
			{
				_lock();
				resize(0);
				_unlock();
			}

			/**
			 * @brief Returns the allocated capacity of the array;
				Note:
					A linked list cannot have a preallocated capacity
					so we'll just return the array size
			*/
			natnum_t capacity() const
			{
				return size();
			}

			/**
			 * @brief Checks if the array is empty
			*/
			bool empty() const
			{
				return arr_size == 0;
			}

			/**
			 * @brief Assigns a value to an item
			*/
			void assign(natnum_t i, const T &item)
			{
				_lock();
				_get_node(i)->data = item;
				_unlock();
			}

			/**
			 * @brief Erases a component of the array
			*/
			void erase(natnum_t i)
			{
				_lock();
				// --- Head ---
				linked_node item = _get_node(i);

				// --- Body ---
				// Checking if there is an item before i
				if (i == 0)
				{
					ptr = _get_node(1);
				}
				// We need to change the next pointer
				else
				{
					//  Checking if an item exists after the previous item
					if (i != arr_size - 1)
						_get_node(i - 1).next = &_get_new_node(i + 1);
					else
						_get_node(i - 1).next = nullptr;
				}

				// Say goodbye!
				delete &item;
				arr_size--;
				_unlock();
			}

			/**
			 * @brief Inserts an item between two components of the array
			*/
			void insert(natnum_t i, const T &item)
			{
				_lock();
				// --- Head ---
				linked_node new_node = _get_new_node(item);
				
				// --- Body ---
				// Checking if we're not just pushing back
				if (i != (arr_size - 1))
					new_node.next = &_get_node(i + 1);

				// Checking if an item is existing befire insert
				if (i != 0)
					_get_node(i - 1).next = &new_node;
				
				arr_size++;
				_unlock();
			}

			/**
			 * @brief Can't do anything here since we're using a linked list. :->
			*/
			void reserve(natnum_t) { }

			/**
			 * @brief Returns the array size
			*/
			natnum_t size() const
			{
				return arr_size;
			}

			/**
			 * @brief Copies another container
			*/
			void copy_container_here(const cont_t<T> &in)
			{
				_lock();
				for (natnum_t i = 0; i < in.arr_size; i++)
					push_back(in.at(i));
				_unlock();
			}

			/**
			 * @brief Returns the item at in
			*/
			T &at(natnum_t in) const
			{
				return _get_node(in).data;
			}

			/**
			 * @brief Returns the last element of the array
			*/
			T &back() const
			{
				return at(arr_size - 1);
			}

			/**
			 * @brief Returns the first element of the array
			*/
			T &front() const
			{
				return at(0);
			}

			// -- Operators
			T &operator[](natnum_t in) const
			{
				return at(in);
			}

			cont_t<T> &operator=(const cont_t<T> &in)
			{
				_lock();
				copy_container_here(in);
				return *this;
				_unlock();
			}

			bool operator==(const cont_t<T> &in) const
			{
				if (in.size() != arr_size)
					return false;
				
				for (natnum_t i = 0; i < arr_size; i++)
				{
					if (at(i) != in[i])
						return false;
				}

				return true;
			}

			bool operator!=(const cont_t<T> &in) const
			{
				// TODO: Optimise this by redoing the loop at operator== here
				return !operator==(in);
			}

			// --- CTOR ~ DTOR
		public:
			cont_t()
			{ }

			cont_t(const cont_t<T> &in)
			{
				copy_container_here(in);
			}

			cont_t(const T in[], natnum_t size)
			{
				resize(size);

				for (natnum_t i = 0; i < size; i++)
					at(i) = in[i];
			}

			~cont_t()
			{
				clear();
			}
		};
	}
}
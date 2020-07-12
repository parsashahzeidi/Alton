# pragma once

# include <ETC/BareboneMacros.hpp>


namespace Alton
{
	inline namespace Types
	{
		template<typename T>
		class Container
		{
			// --- Structs
		private:
			struct Node
			{
				T data;
				Node *next = nullptr;
			};

			// --- Head
		private:
			// -- Main pointer
			Node *ptr = nullptr;

			// -- Size related stuff
			Natural arr_size = 0;

			// -- Thread related stuff
			Natural lock_count = 0;
			pthread_t lock_owner;

			// --- Body
		private:
			/*
			 * BRIEF: Gets the current thread's id, named after PThread's
				pthread_self call.
			 * RETURN: an Unsigned Long integer on most platforms,
				AKA pthread_t.
			 * NOTE:
				This function may vary on certain OSs / architectures,
				therefore it's suggested to call the self function indirectly.
			 */
			const pthread_t ___get_self_id () const
			{
				return pthread_self ();
			}
			
			/**
			 * BRIEF: Returns a value to indicate a lock
			*/
			bool __is_locked() const
			{
				return lock_count != 0;
			}

			/**
			 * BRIEF: Returns a value to indicate a lock for this thread
			*/
			bool __is_locked_for_this_thread() const
			{
				return
					// Condition for checking if a lock is present
					__is_locked() &&
					// Condition for checking if we own the lock
					(lock_owner != ___get_self_id ());
			}

			/**
			 * BRIEF: Waits until there's no lock for this thread
			*/
			void _wait_until_unlock() const
			{
				// Checking if a lock that we don't own is present.
				while (__is_locked_for_this_thread())
					/* Recheck the lock Immediately */;
			}

			/**
			 * BRIEF: Waits until there's no lock at all
			*/
			void _wait_until_full_unlock() const
			{
				// Checking if a lock that we may or may not own is present.
				while (__is_locked())
					/* Recheck the lock Immediately */;
			}

			/**
			 * BRIEF: Locks the current array for other threads
			*/
			void _lock()
			{
				_wait_until_unlock();

				lock_owner = ___get_self_id ();
				lock_count++;
			}

			/**
			 * BRIEF: Unlocks the most recent lock.
			*/
			void _unlock()
			{
				if (lock_count)
					lock_count--;
			}

			/**
			 * BRIEF: Returns a newly allocated node
			*/
			Node *_get_new_node(const T &data) const
			{
				// --- Head ---
				Node *new_node = new Node;

				// --- Body ---
				new_node->data = data;

				return new_node;
			}

			/**
			 * BRIEF: Gets the node at in
			*/
			Node &_get_node(Natural in) const
			{
				// --- Head ---
				Node *current = ptr;
				
				// --- Body ---
				for (Natural i = 0; i < in; i++)
					current = current->next;
				
				return *current;
			}

			/**
			 * BRIEF: Returns the last items in the array
			*/
			Node &_back_node() const
			{
				return _get_node(arr_size - 1);
			}

			/**
			 * BRIEF: Returns the first item in the array
			*/
			Node &_front_node() const
			{
				return *ptr;
			}

		public:
			/**
			 * BRIEF: Appends an item to the end of the array
			*/
			void push_back(const T &item)
			{
				_lock();
				// --- Head ---
				Node *new_node = _get_new_node(item);

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
			 * BRIEF: appends an item to the start of the array
			*/
			void push_front(const T &item)
			{
				_lock();
				// --- Head ---
				Node *new_node = _get_new_node(item);

				// --- Body ---
				if (!empty())
					new_node->next = ptr;

				ptr = new_node;

				arr_size++;
				_unlock();
			}

			/**
			 * BRIEF: Appends an empty item to the end of the array
			*/
			void append()
			{
				_lock();
				push_back(T());
				_unlock();
			}

			/**
			 * BRIEF: Removes the last item of the array
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
			 * BRIEF: Removes the front item of the array
			*/
			void pop_front()
			{
				_lock();
				// -- The item in the front --
				Node *front = ptr;

				// --- Body ---
				// Checking if there exists an item other than front
				if (arr_size > 1)
					ptr = front->next;

				// -- Deleting the front item --
				delete front;
				arr_size--;
				_unlock();
			}

			/**
			 * BRIEF: Resizes the array to the specified amount
			*/
			void resize(Natural in)
			{
				_lock();
				// Checking if we're increasing the array size
				if (in > arr_size)
				{
					while (arr_size != in)
						append();
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
			 * BRIEF: Removes every item in the array
			*/
			void clear()
			{
				_lock();
				resize(0);
				_unlock();
			}

			/**
			 * BRIEF: Returns the allocated capacity of the array;
				Note:
					Our linked list type cannot have a preallocated space
					so we'll just return the array size.
			*/
			Natural capacity() const
			{
				return size();
			}

			/**
			 * BRIEF: Checks if the array is empty
			*/
			bool empty() const
			{
				return arr_size == 0;
			}

			/**
			 * BRIEF: Assigns a value to an item
			*/
			void assign(Natural i, const T &item)
			{
				_lock();
				_get_node(i)->data = item;
				_unlock();
			}

			/**
			 * BRIEF: Erases a component of the array
			*/
			void erase(Natural i)
			{
				_lock();
				// --- Head ---
				Node item = _get_node(i);

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
			 * BRIEF: Inserts an item between two components of the array
			*/
			void insert(Natural i, const T &item)
			{
				_lock();
				// --- Head ---
				Node new_node = _get_new_node(item);
				
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
			 * BRIEF: Can't do anything here since we're using a linked list. :->
			*/
			void reserve(Natural)
			{ }

			/**
			 * BRIEF: Returns the array size
			*/
			Natural size() const
			{
				return arr_size;
			}

			/**
			 * BRIEF: Copies another container
			*/
			void copy_container_here(const Container<T> &in)
			{
				_lock();
				for (Natural i = 0; i < in.arr_size; i++)
					push_back(in.at(i));
				_unlock();
			}

			/**
			 * BRIEF: Returns the item at in
			*/
			T &at(Natural in) const
			{
				return _get_node(in).data;
			}

			/**
			 * BRIEF: Returns the last element of the array
			*/
			T &back() const
			{
				return at(arr_size - 1);
			}

			/**
			 * BRIEF: Returns the first element of the array
			*/
			T &front() const
			{
				return at(0);
			}

			// -- Operators
			T &operator[](Natural in) const
			{
				return at(in);
			}

			Container<T> &operator=(const Container<T> &in)
			{
				_lock();
				copy_container_here(in);
				_unlock();
				return *this;
			}

			bool operator==(const Container<T> &in) const
			{
				if (in.size() != arr_size)
					return false;
				
				for (Natural i = 0; i < arr_size; i++)
				{
					if (at(i) != in[i])
						return false;
				}

				return true;
			}

			bool operator!=(const Container<T> &in) const
			{
				return !operator==(in);
			}

			// --- CTOR ~ DTOR
		public:
			Container()
			{ }

			Container(const Container<T> &in)
			{
				copy_container_here(in);
			}

			~Container()
			{
				_wait_until_full_unlock();
				clear();
			}
		};
	}
}

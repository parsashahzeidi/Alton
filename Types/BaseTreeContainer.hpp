# pragma once

# include <ETC/Macros.hpp>

namespace Alton
{
	inline namespace Types
	{
		template <typename T>
		class TreeNode
		{
			// --- Head
		private:
			TreeNode<T> *left = nullptr;
			TreeNode<T> *right = nullptr;
		
		public:
			T item;

			// --- Body
		private:
			/**
			 * @brief Returns a new node allocation, Usually for set_ and TreeNode<T>().
			 * @param in The item to initialize the node with
			
			 * @return A pointer to the new allocation
			*/
			TreeNode<T> *_get_new_node(T &in) const
			{
				return new TreeNode<T>(in);
			}

			/**
			 * @brief Returns a new node allocation, Usually for set_ and TreeNode<T>().
			 * @param in The item to initialize the node with
			
			 * @return A pointer to the new allocation
			*/
			TreeNode<T> *_get_new_node(const TreeNode<T> &in) const
			{
				return new TreeNode<T>(in);
			}

			/**
			 * @brief Returns a new node allocation, Usually for set_ and TreeNode<T>().
			
			 * @return A pointer to the new allocation
			*/
			TreeNode<T> *_get_new_node() const
			{
				return new TreeNode<T>();
			}

		public:
			/**
			 * @brief Checks if an item exists at the right connection
			 * @return A boolean
			*/
			bool has_right() const  // -- haha --
			{
				return right != nullptr;
			}

			/**
			 * @brief Checks if an item exists at the left connection
			 * @return A boolean
			*/
			bool has_left() const
			{
				return left != nullptr;
			}

			/**
			 * @brief Returns the left child
			 * @return A TreeNode<T>
			*/
			TreeNode<T> &get_left() const
			{
				return *left;
			}

			/**
			 * @brief Returns the right child
			 * @return A TreeNode<T>
			*/
			TreeNode<T> &get_right() const
			{
				return *right;
			}

			/**
			 * @brief Sets left to in.
			 * @param in The Treenode to replace left with
			*/
			void set_left(const TreeNode<T> &in)
			{
				if (has_left())
					*left = in;
				else
					left = new TreeNode<T>(in);
			}

			/**
			 * @brief Sets right to in.			-- haha --
			 * @param in The Treenode to replace right with
			*/
			void set_right(const TreeNode<T> &in)
			{
				if (has_right())
					*right = in;
				else
					right = new TreeNode<T>(in);
			}

			/**
			 * @brief Removes the item on the right
			*/
			void delete_right()
			{
				if (has_right())
				{
					delete right;
					right = nullptr;
				}
			}

			/**
			 * @brief Removes the item on the left
			*/
			void delete_left()
			{
				if (has_left())
				{
					delete left;
					left = nullptr;
				}
			}

			/**
			 * @brief Empties the tree container's left and right interfaces
			*/
			void clear()
			{
				delete_right();
				delete_left();
			}

			// --- CTORs
		public:
			TreeNode()
			{ }

			TreeNode(const T &in)
			{
				item = in;
			}

			// This is called when 2 TreeNodes are adopted by me.
			TreeNode(const TreeNode<T> &_left, const TreeNode<T> &_right):
					left(&_left),
					right(&_right)
			{ }

			TreeNode(const TreeNode<T> &in):
					item(in.item)
			{
				// Item on the right
				if (in.has_right())
					// Copying the item
					right = _get_new_node(in.get_right());
				else
					delete_right();

				// Item on the left
				if (in.has_left())
					// Copying dat dude
					left = _get_new_node(in.get_left());
				else
					delete_left();
			}

			// --- DTORs
		public:
			virtual ~TreeNode()
			{
				if (left != nullptr)
					delete[] left;
				
				if (right != nullptr)
					delete[] right;
			}
		};

		template <typename T>
		using tree_t = class TreeNode<T>;
	}
}
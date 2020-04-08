# pragma once

# include <ETC/BareboneMacros.hpp>


namespace Alton
{
	inline namespace Types
	{
		template <typename T>
		class Tree
		{
			// --- Classes
		private:
			struct TreeNode
			{
				T item;

				TreeNode(const T &in):
						item(in)
				{ }
			};
			
			// --- Head
		public:
			T item;
			Container<Tree<T>> list;  // TODO: Make proper interface for the list.

			// --- CTOR ~ DTOR
		public:
			Tree(T in):
					item(in)
			{ }

			Tree()
			{ }
		};
	}
}
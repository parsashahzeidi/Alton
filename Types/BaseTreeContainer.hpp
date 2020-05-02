# pragma once

# include <ETC/BareboneMacros.hpp>


namespace Alton
{
	inline namespace Types
	{
		template <typename T>
		class Tree
		{
			// --- Head
		public:
			T item;
			Container<Tree<T>> list;  // TODO: Make a proper interface for the list.

			// --- CTOR ~ DTOR
		public:
			Tree(T in):
					item(in)
			{ }

			Tree (Container<T> in)
			{
				for (Natural i = 0; i < in.size (); i++)
					list.push_back (in [i]);
			}

			Tree()
			{ }
		};
	}
}

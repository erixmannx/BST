#ifndef COM_GITHUB_ERIXMANNX_BST_BST_H
#define COM_GITHUB_ERIXMANNX_BST_BST_H

#include "Node.h"
#include "Comparator.h"

namespace com { namespace github { namespace erixmannx { namespace BST {

template<typename T>
class BST {
	public: 
		BST();
		void add(const T data);
		bool find(const T data) const;

	protected:
		Node<T>* findDepthFirst(const T data) const;
		#if 0
		Node<T>* findBreadthFirst(const T data) const;
		#endif

	private:
		Node<T>* m_root;
		Comparator<T>* m_comparator;
};

} } } }

#endif

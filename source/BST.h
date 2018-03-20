#ifndef COM_GITHUB_ERIXMANNX_BST_BST_H
#define COM_GITHUB_ERIXMANNX_BST_BST_H

#include "Node.h"

namespace com { namespace github { namespace erixmannx { namespace BST {

template<typename T>
class BST {
	public: 
		BST();
		void add(const T data);

	private:
		Node<T>* m_root;
};

} } } }

#endif

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

		void print() const;

	protected:
		Node<T>* findDepthFirst(const T data) const;
		Node<T>* findBreadthFirst(const T data) const;

		void printNode(const Node<T>* node, const int level) const;

	private:
		Node<T>* m_root;
		Comparator<T>* m_comparator;
};

} } } }

#endif

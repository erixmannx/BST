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
		inline const int compare(const T left, const T right) const {
			return m_comparator->compare(left, right);
		}

		Node<T>* findNode(Node<T>* node, const T data) const;
		void printNode(const Node<T>* node, const int level) const;

		Node<T>* m_root;
		Comparator<T>* m_comparator;
};

} } } }

#endif

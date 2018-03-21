#ifndef COM_GITHUB_ERIXMANNX_BST_BST_CXX
#define COM_GITHUB_ERIXMANNX_BST_BST_CXX

#include <stdio.h>
#include <cstddef>

#include "BST.h"
#include "Node.h"

using namespace com::github::erixmannx::BST;

template<typename T>
BST<T>::BST() {
	m_root = NULL;
}

template<typename T>
void BST<T>::add(const T data) {
	if (m_root == NULL) { 
		m_root = new Node<T>(data);
	} else {
		Node<T>* node = findDepthFirst(m_root, data);
		if (node == NULL) {
			// TODO throw here - should never happen
		} else {
			int cmp = m_comparator->compare(data, node->getData()); 
			if (cmp == 0) {
				node->increment();
			} else {
				Node<T>* node = new Node<T>(data);

				if (cmp < 1) {
					node->setLeft(node);
				} else {
					node->setRight(node);
				}
			}
		}
	}
}

template<typename T>
bool BST<T>::find(const T data) const {
	#if 1
	Node<T>* node = findDepthFirst(m_root, data);
	#else
	Node<T>* node = findBreadthFirst(m_root, data);
	#endif

	return (node != NULL) && (m_comparator->compare(data, node->getData()) == 0);
}

template<typename T>
Node<T>* BST<T>::findDepthFirst(const T data) const {
		
}

template<typename T>
Node<T>* BST<T>::findBreadthFirst(const T data) const {
	// TODO
	return NULL;
}

template<typename T>
void BST<T>::print() const {
	printNode(m_root, 0);
}

// TODO: only prints as ints
template<typename T>
void BST<T>::printNode(const Node<T>* node, const int level) const {
	if (node == NULL) {
		return;
	}

	printf("L%d - %d\n", level, node->getData());

	printNode(node->getLeft(), level + 1);
	printNode(node->getRight(), level + 1);
}
#endif

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
	m_comparator = new DefaultComparator<T>();
}

template<typename T>
void BST<T>::add(const T data) {
	if (m_root == NULL) { 
		m_root = new Node<T>(data);
	} else {
		Node<T>* node = findNode(m_root, data);
		if (node == NULL) {
			// TODO throw here - should never happen
		} else {
			int cmp = compare(data, node->getData()); 
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
	const Node<T>* node = findNode(m_root, data);
	return (node != NULL) && (compare(data, node->getData()) == 0);
}

template<typename T>
Node<T>* BST<T>::findNode(Node<T>* node, const T data) const {
	int cmp = compare(data, node->getData());
	if (cmp == 0) {
		return node;
	}	

	if (cmp < 0) {
		if (node->getLeft() != NULL) {
			return findNode(node->getLeft(), data);
		}
	} else {
		if (node->getRight() != NULL) {
			return findNode(node->getRight(), data);
		}
	}

	return node;
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

// move implementation to header to remove this requirement
template class BST<int>;
#endif

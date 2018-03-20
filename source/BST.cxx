#ifndef COM_GITHUB_ERIXMANNX_BST_BST_CXX
#define COM_GITHUB_ERIXMANNX_BST_BST_CXX

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
	}
}

template<typename T>
bool BST<T>::find(const T data) const {
	#if 1
	Node<T>* node = findDepthFirst(m_root, data);
	#else
	Node<T>* node = findBreadthFirst(m_root, data);
	#endif

	return (node != NULL) && (m_comparator->compare(data, node->m_data) == 0);
}

template<typename T>
Node<T>* BST<T>::findDepthFirst(const T data) const {

}
#endif

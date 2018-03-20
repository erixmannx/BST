#ifndef COM_GITHUB_ERIXMANNX_BST_NODE_CXX
#define COM_GITHUB_ERIXMANNX_BST_NODE_CXX

#include <cstddef>
#include "Node.h"

using namespace com::github::erixmannx::BST;

template<typename T>
Node<T>::Node(const T data) {
	m_data = data;

	m_left = NULL;
	m_right = NULL;
}

template<typename T>
Node<T>::~Node() {
	// TODO
}

#endif

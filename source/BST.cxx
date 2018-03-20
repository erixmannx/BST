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
		m_root = data;
	} else {
		// TODO
	}
}
#endif

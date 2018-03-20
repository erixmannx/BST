#ifndef COM_GITHUB_ERIXMANNX_BST_NODE_CXX
#define COM_GITHUB_ERIXMANNX_BST_NODE_CXX

#include <cstddef>
#include "Node.h"

using namespace com::github::erixmannx::BST;

template<typename T>
Node<T>::Node(const T data) {
	m_data = data;
	m_count = 0;

	m_left = NULL;
	m_right = NULL;
}

template<typename T>
Node<T>::~Node() {
	// TODO
}

template<typename T> 
const T Node<T>::getData() const {
	return m_data;
}

template<typename T>
void Node<T>::increment() {
	m_count++;
}

template<typename T>
void Node<T>::decrement() {
	m_count--;
}

template<typename T>
Node<T>* Node<T>::getLeft() const {
	return m_left;
}

template<typename T>
Node<T>* Node<T>::getRight() const {
	return m_left;
}
#endif

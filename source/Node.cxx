#ifndef COM_GITHUB_ERIXMANNX_BST_NODE_CXX
#define COM_GITHUB_ERIXMANNX_BST_NODE_CXX

#include <cstddef>
#include "Node.h"

using namespace com::github::erixmannx::BST;

template<typename T>
Node<T>::Node(const T data) {
	m_data = data;
	m_count = 1;

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
int Node<T>::getCount() const {
	return m_count;
}

template<typename T>
Node<T>* Node<T>::getLeft() const {
	return m_left;
}

template<typename T>
Node<T>* Node<T>::getRight() const {
	return m_right;
}

template<typename T>
void Node<T>::setLeft(Node<T>* node) {
	m_left = node;
}

template<typename T>
void Node<T>::setRight(Node<T>* node) {
	m_right = node;
}

// move implementation to header to remove this requirement
template class Node<int>;
#endif

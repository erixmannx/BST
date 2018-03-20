#ifndef COM_GITHUB_ERIXMANNX_BST_NODE_H
#define COM_GITHUB_ERIXMANNX_BST_NODE_H

namespace com { namespace github { namespace erixmannx { namespace BST {

template<typename T>
class Node {
	public:
		Node(const T data);
		~Node();	

		const T getData() const;

		void increment();
		void decrement();

		Node<T>* getLeft() const;
		Node<T>* getRight() const;

	private:
		Node<T>* m_left;
		Node<T>* m_right;

		int m_frequency;

		const T m_data;
};

} } } }

#endif

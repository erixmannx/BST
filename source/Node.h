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

		int getCount() const;

		Node<T>* getLeft() const;
		Node<T>* getRight() const;

		void setLeft(Node<T>* node);
		void setRight(Node<T>* node);

	private:
		Node<T>* m_left;
		Node<T>* m_right;

		int m_count;
		T m_data;
};

} } } }

#endif

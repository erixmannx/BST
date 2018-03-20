#ifndef COM_GITHUB_ERIXMANNX_BST_NODE_H
#define COM_GITHUB_ERIXMANNX_BST_NODE_H

namespace com { namespace github { namespace erixmannx { namespace BST {

template<typename T>
class Node {
	public:
		Node(const T data);
		~Node();	

		const T getData() const;

		void incrmenent();
		void decrement();

		Node* getLeft() const;
		Node* getRight() const;

	private:
		Node* m_left;
		Node* m_right;

		int m_frequency;

		const T m_data;
};

} } } }

#endif

#ifndef COM_GITHUB_ERIXMANNX_BST_COMPARATOR
#define COM_GITHUB_ERIXMANNX_BST_COMPARATOR

namespace com { namespace github { namespace erixmannx { namespace BST {

// TODO : make abstract / with a default
template<typename T>
class Comparator {
	public:
		int compare(T left, T right) {
			if (left < right) return -1;
			if (left > right) return 1;
			return 0;
		}
};

} } } }

#endif

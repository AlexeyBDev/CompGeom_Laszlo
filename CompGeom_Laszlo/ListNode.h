#ifndef LISTNODE_H
#define LISTNODE_H

#include "Node.h"

template <class T> class ListNode : public Node
{
public:
	T _val;
	ListNode(T val);
	friend class List<T>;
};

template <class T>
ListNode<T>::ListNode(T val) : _val(val)
{
}

// закончил на стр.48
#endif


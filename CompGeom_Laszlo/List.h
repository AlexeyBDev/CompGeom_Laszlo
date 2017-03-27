#ifndef LIST_H
#define LIST_H
#include <cstddef>

#include "ListNode.h"


template <class T> class List
{
private:
	ListNode<T> *header_;
	ListNode<T> *win_;
	int _length;
public:
	List(void);
	~List(void);
	T insert(T);
	T append(T);
	List* append(List*);
	T prepend(T);
	T remove(void);
	void val(T);
	T next(void);
	T prev(void);
	T first(void);
	T last(void);
	int length(void);
	bool isFirst(void);
	bool isLast(void);
	bool isHead(void);
};

template <class T>
List<T>::List(void) : header_(0)
{
	header_ = new ListNode<T>(NULL);
	win_ = header_;
}

template <class T>
List<T>::~List()
{
	while (length() > 0)
	{
		first();
		remove();
	}
	delete header_;
}

template <class T>
T List<T>::insert(T val)
{
	win_->insert(new ListNode<T>(val));
	++_length;
	return val;
}
// закончил на стрнице 50

#endif


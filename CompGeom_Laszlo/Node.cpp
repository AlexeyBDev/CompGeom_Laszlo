#include <iostream>
#include "Node.h"


Node::Node(void) : _next(this), _prev(this)
{
}


Node::~Node()
{
}

Node* Node::Next()
{
	return _next;
}

Node* Node::Prev()
{
	return _prev;
}

Node* Node::Insert(Node* b)
{
	Node* c = _next;
	b->_next = c;
	b->_prev = this;
	_next = b;
	c->_prev = b;
	return b;
}

Node* Node::Remove()
{
	_prev->_next = _next;
	_next->_prev = _prev;
	_next = _prev = this;
	return this;
}

void Node::Splice(Node* b)
{
	Node* a = this;
	Node* an = a->_next;
	Node* bn = b->_next;
	a->_next = bn;
	b->_next = an;
	an->_prev = b;
	bn->_prev = a;
	// закончил на стрнице 47
}

void Node::Print()
{
	std::cout << "Prev: " << _prev << ", "
		<< "Next: " << _next << std::endl;
}

// 250317
// Класс Node является классом узал
// Класс предаставлен в книге "Вычислительная геометрия и компьютерная графика
// на C++", Майкл Ласло
//----------------------------------------------------------------------------

#ifndef NODE_H
#define NODE_H

class Node
{
protected:
	// связь к последующему узлы
	Node* _next;
	// связь к предыдущему узлу
	Node* _prev;
public:
	Node(void);
	virtual ~Node();
	Node* Next(void);
	Node* Prev(void);
	Node* Insert(Node* b);
	Node* Remove(void);
	void Splice(Node* b);
	void Print();
};

#endif

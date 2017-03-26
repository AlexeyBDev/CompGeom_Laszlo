// 250317
// ����� Node �������� ������� ����
// ����� ������������ � ����� "�������������� ��������� � ������������ �������
// �� C++", ����� �����
//----------------------------------------------------------------------------

#ifndef NODE_H
#define NODE_H

class Node
{
protected:
	// ����� � ������������ ����
	Node* _next;
	// ����� � ����������� ����
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

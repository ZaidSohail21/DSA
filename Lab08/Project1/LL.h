#include "Node.h"

class CircularLinkedLists {
protected:
	Node* head = new Node;
	Node* tail = new Node;
public:
	CircularLinkedLists() {
		head = nullptr;
		tail = nullptr;
	}
	virtual void InsertAtTail(int value) = 0;
	virtual void InsertAtHead(int a) = 0;
	virtual void display() = 0;
	virtual int DeleteAtTail() = 0;
	virtual int DeleteAtHead() = 0;
	virtual bool search(int a) = 0;
	virtual int kill(int, int)=0;
};

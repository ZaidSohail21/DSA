#include "Node.h"
#include <iostream>
using namespace std;
class LinkedList {
protected:
	Node* head;
	Node* tail;
public:
	virtual void InsertAtTail(int s) = 0;
	virtual void InsertAtHead(int s) = 0;
	virtual int DeleteAtTail() = 0;
	virtual int DeleteAtHead() = 0;
	virtual bool DeleteAtValue(int) = 0;
	virtual bool DeleteAtPosition(int h) = 0;
	virtual void InsertAtPosition(int a, int b)=0;
	virtual void display() = 0;
	virtual bool search(int a) = 0;
	LinkedList() {
		Node* head = new Node;
		Node* tail = new Node;
	}
};
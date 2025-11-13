#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
};

class LinkedList {
protected:
	/*Node* head;*/
public:
	Node* head;
	virtual void InsertAtTail(int s) = 0;
	virtual void display() = 0;
	LinkedList() {
		Node* head = new Node;
	}
};
class MyLL :public LinkedList {
public:
	MyLL();
	void InsertAtTail(int a);
	/*void display();*/
	void display() {
		if (head == nullptr) {
			cout << "Linked List is Empty" << endl;
		}
		else {
			display(head); // Internal call to overloaded function
			cout << endl;
		}
	}
	Node *gethead() {
		return head;
	}
	// Overloaded display function (still public, but not meant for external use)
	void display(Node* node) {
		if (node != nullptr) {
			cout << "Data :" << node->data << " ";
			display(node->next);
		}
	}
};

MyLL::MyLL() :LinkedList() {}
void MyLL::InsertAtTail(int s) {
	Node* nn = new Node;
	
	nn->data = s;
	nn->next = nullptr;
	if (head == nullptr) {
		head = nn;
	}
	else {
		Node* t = head;
		while (true) {
			if (t->next == nullptr) {
				t->next = nn;
				break;
			}
			t = t->next;
		}
	}
}


//void MyLL::display() {
//	if (head == nullptr) {
//		cout << "Linked Lists is Empty" << endl;
//	}
//	else {
//		Node* t = head;
//		while (true) {
//			cout << "Data :" << t->data << " ";
//
//			if (t->next == nullptr) {
//				break;
//			}
//			t = t->next;
//		}
//		cout << endl;
//	}
//}
//void MyLL::display() {
//	if (head == nullptr) {
//		cout << "Linked Lists is Empty" << endl;
//	}
//	else {
//		Node* t = head;
//		while (true) {
//			cout << "Data :" << t->data << " ";
//
//			if (t->next == nullptr) {
//				break;
//			}
//			t = t->next;
//		}
//		cout << endl;
//	}
//}

int main() {
	MyLL l;
	
	l.InsertAtTail(1);
	/*l.display();*/
	l.InsertAtTail(2);
	/*l.display();*/
	l.InsertAtTail(3);
	/*l.display();*/
	l.InsertAtTail(4);
	l.display(l.gethead());
	return 0;
}
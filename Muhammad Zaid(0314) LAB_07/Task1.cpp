//#include <iostream>
//using namespace std;
//struct Node {
//	int data;
//	Node* next;
//};
//
//class LinkedList {
//protected:
//	Node* head;
//public:
//	virtual void InsertAtTail(int s) = 0;
//	virtual void display() = 0;
//	LinkedList() {
//		Node* head = new Node;
//	}
//};
//class MyLL :public LinkedList {
//public:
//	MyLL();
//	void InsertAtTail(int a);
//	void display();
//};
//MyLL::MyLL() :LinkedList() {}
//void MyLL::InsertAtTail(int s) {
//	Node* nn = new Node;
//	
//	nn->data = s;
//	nn->next = nullptr;
//	if (head == nullptr) {
//		head = nn;
//	}
//	else {
//		Node* t = head;
//		while (true) {
//			if (t->next == nullptr) {
//				t->next = nn;
//				break;
//			}
//			t = t->next;
//		}
//	}
//}
//
//
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
//
//int main() {
//	MyLL l;
//	
//	l.InsertAtTail(1);
//	l.display();
//	l.InsertAtTail(2);
//	l.display();
//	l.InsertAtTail(3);
//	l.display();
//	l.InsertAtTail(4);
//	l.display();
//	return 0;
//}
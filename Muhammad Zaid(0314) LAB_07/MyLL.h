#include "LinkedList.h"
class MyLL :public LinkedList {
	int count = 0;
public:
	MyLL();
	void InsertAtTail(int a);
	void InsertAtHead(int a);
	void InsertAtPosition(int a, int b);
    int DeleteAtTail();
	int DeleteAtHead();
	bool DeleteAtValue(int h);
	bool DeleteAtPosition(int h) ;
	void display();
	int getter();
	bool search(int a);
};
MyLL::MyLL():LinkedList() {}
void MyLL:: InsertAtPosition(int a, int b) {
	
		Node* nn = new Node;
		nn->data = a;
		nn->next = nullptr;
		if (head == nullptr && tail == nullptr) {
			head = nn;
			tail = nn;
		}
		else if (head == tail) {
			InsertAtTail(a);
		}
		else if (b == 1) {
			InsertAtHead(a);
		}
		else if (b == count) {
			InsertAtTail(a);
		}
		else {
			Node* t = head;
			for (int i = 0; i < b-1; i++) {
				t = t->next;
			}
			Node* t2 = t->next;
			t ->next = nn;
			nn->next = t2;
		}
	
}
bool MyLL::DeleteAtPosition(int h) {
	if (h < 1 || h > count) {
		cout << "Invalid position!" << endl;
		return false;
	}
	if (head == nullptr && tail == nullptr) {
		cout << "Linked List is Empty" << endl;
		return false;
	}

	else if (head == tail) { 
		delete head;
		head = nullptr;
		tail = nullptr;
		count--;
		return true;
	}
	else if (h == 1) {
		DeleteAtHead();
		return true;
	}
	else if (h == count) {
		DeleteAtTail();
		return true;
	}
	else {
		Node* t1 = head;
		for (int i = 1; i < h - 1; i++) {
			t1 = t1->next;
		}

		Node* t2 = t1->next;
		t1->next = t2->next;
		delete t2;
		count--;
		return true;
	}
}

//bool MyLL::DeleteAtPosition(int h) {
//	if (head == nullptr && tail == nullptr) {
//		cout << "Linked List is Empty" << endl;
//		return false;
//	}
//	else if (head == tail) {
//			delete head;
//			head = nullptr;
//			tail = nullptr;
//			return true;
//	}
//	else if ( h==1) {
//		DeleteAtHead();
//		return true;
//	}
//	else if (h==count) {
//		DeleteAtTail();
//		return true;
//	}
//	else {
//
//		Node* t1 = head;
//		for (int i = 0; i < h-1; i++) {
//			t1 = t1->next;
//		}
//		
//		Node* t2 = t1->next;
//		Node* t3 = t1->next->next;
//		t1->next = t3;
//
//		delete t2;
//		t2 = nullptr;
//		return true;
//}

void MyLL::InsertAtTail(int s) {
	Node* nn=new Node;
	nn->data = s;
	nn->next = nullptr;
	if (head == nullptr && tail==nullptr) {
		head = nn;
		tail = nn;
		count++;
	}
	else {
		tail->next = nn;
		tail = nn;
		count++;
	}
}
void MyLL::InsertAtHead(int s) {
	Node* nn = new Node;
	nn->data = s;
	nn->next = nullptr;
	if (head == nullptr && tail == nullptr) {
		head = nn;
		tail = nn;
		count++;
	}
	else {
		nn->next = head;
		head = nn;
		count++;
	}
}
bool MyLL::DeleteAtValue(int h) {
	if (head == nullptr && tail == nullptr) {
		cout << "Linked List is Empty" << endl;
		return false;
	}
	else if (head == tail) {
		if (head->data = h) {
			delete head;
			head = nullptr;
			tail = nullptr;
			return true;
		}
		else {
			return false;
		}
	}
	else if (head->data == h) {
		DeleteAtHead();
		return true;
	}
	else if (tail->data == h) {
		DeleteAtTail();
		return true;
	}
	else {

		Node* t1 = head;
		while (1) {
			if (t1->next->data == h) {
				break;
			}
			else {
				t1 = t1->next;
			}
			if (t1 == tail) {
				return false;
			}
		}
		Node* t2 = t1->next;
		Node* t3 = t1->next->next;
		t1->next = t3;
		
		delete t2;
		t2 = nullptr;
		return true;

		/*Node* t3 = head->next->next;
		while (1) {
			if (t2->data == h) {
				t1->next = t3;
				delete t2;
				t2 = nullptr;
				return true;
			}
			else {

			t1 = t1->next;
			t2 = t2->next;
			t3 = t3->next;
			}

			if (t3 == nullptr) {
				break;
			}
		}
		return false;*/
		/*while (true) {

			if (t->data == h) {
				cout << "Value is found !" << endl;
				return true;
			}
			if (t->next == nullptr) {
				cout << "Value is not found !" << endl;
				break;
				return false;
			}
			t = t->next;
		}*/
		cout << endl;
	}
}
int MyLL::getter() {
	return count;
}
int MyLL::DeleteAtTail() {
	if (head == nullptr && tail == nullptr) {
		cout << "Linked List is Empty" << endl;
		return NULL;
	}
	else if (head == tail) {
		int r = head->data;
		delete tail;
		head = nullptr;
		tail = nullptr;
		count--;
		return r;
	}
	else {
		int r = tail->data;
		Node* t = head;
		while (true) {
			if (t->next == tail) {
				break;
			}
			t = t->next;
		}
		delete tail;
		tail = t;
		tail->next = nullptr;
		count--;
		cout << endl;
		return r;
	}
}
int MyLL::DeleteAtHead() {
	if (head == nullptr && tail == nullptr) {
		cout << "Linked List is Empty" << endl;
		return NULL;
	}
	else if (head == tail) {
		int r = head->data;
		delete head;
		head = nullptr;
		tail = nullptr;
		count--;
		return r;
	}
	else {
		int r = head->data;
		Node* t =new Node;
		t = head->next;
		delete head;
		head = t;
		count--;
		cout << endl;
		return r;
	}
}
void MyLL::display() {
	if (head == nullptr) {
				cout << "Linked Lists is Empty" << endl;
	}
	else {
		Node* t = head;
		while (true) {
				cout  << t->data << "  ";
		
				if (t->next == nullptr) {
					break;
				}
			t = t->next;
		}
		cout << endl;
	}
}
bool MyLL::search(int a) {
	if (head == nullptr) {
		cout << "Linked Lists is Empty" << endl;
		return false;
	}
	else {
		Node* t = head;
		while (true) {
		
			if (t->data == a) {
				cout << "Value is found !" << endl;
				return true;
			}
			if (t->next == nullptr) {
				cout << "Value is not found !" << endl;
				break;
				return false;
			}
			t = t->next;
		}
		cout << endl;
	}
}
#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
};
class LL {
	Node* tail;
	Node* head;
public:
	LL() {
		tail = nullptr;
		head = nullptr;
	}
	
	void InertAtHead(int a) {
		Node* nn = new Node;
		nn->data = a;
		nn->next = nullptr;

		if (head == nullptr && tail == nullptr) {
			head = nn;
			tail = nn;
		}
		else {
			nn->next = head;
			head = nn;
		}
	}
	void InertAtTail(int a) {
		Node* nn = new Node;
		nn->data = a;
		nn->next = nullptr;

		if (head == nullptr && tail == nullptr) {
			head = nn;
			tail = nn;
		}
		else {
			tail->next =nn;
			tail = nn;
		}
	}
	void display() {
		if (head == nullptr && tail == nullptr) {
			cout << "LL is empty" << endl;
		}
		else {
			Node* t = head;
			while (1) {
				cout << t->data << " ";
				if (t == tail) {
					break;
				}
				else {
					t = t->next;
				}
			}
			cout << endl;
		}
	}
	int DeleteAtHead() {
		if (head == nullptr && tail == nullptr) {

			cout << "Linked list is empty" << endl;
			return NULL;
		}
		else if (head == tail) {
			int a = head->data;
			delete head;
			head = nullptr;
			tail = nullptr;
			return a;
		}
		else {
			int a = head->data;
			Node* t = head->next;
			head = t;
			return a;
		}
	}
	int DeleteAtTail() {
		if (head == nullptr && tail == nullptr) {
			cout << "Linked list is empty" << endl;
			return NULL;
		}
		else if (head == tail) {
			int a = head->data;
			delete head;
			head = nullptr;
			tail = nullptr;
			return a;
		}
		else {
			int a = tail->data;
			Node* t = head;
			while (1) {
				if (t->next == tail) {
					break;
				}
				else {
					t = t->next;
				}
			}
			tail = t;
			tail->next = nullptr;
			return a;
		}
	}
	bool search(int a) {
		if (head == nullptr && tail == nullptr) {
			cout << "Linked list is empty" << endl;
			return false;
		}
		else{
			Node* t = head;
			while (1) {
				if (t->data == a) {
					return true;
				}
				t = t->next;
				if (t == nullptr) {
					return false;
				}
			}
		}
	}
	bool Deletebyvalue(int a) {
		if (head == nullptr && tail == nullptr) {
			cout << "Linked list is empty" << endl;
			return false;
		}
		else if (head == tail) {
			if (head->data == a) {
				delete head;
				head = nullptr;
				tail = nullptr;
				return true;
			}
			else {
				return false;
			}
		}
		else if (head->data==a) {
			DeleteAtHead();
			return true;
		}
		else if (tail->data==a) {
			DeleteAtTail();
			return true;
		}
		else {
			Node* t1=head;
			Node* t2=t1->next;
			Node* t3=t2->next;
			while (1) {
				if (t2->data == a) {
					break;
				}
				t1 = t1 ->next;
				t2 = t2->next;
				t3 = t3->next;
				if (t3 == nullptr) {
					return false;
				}
			}
			t1->next = t3;
			delete t2;
			t2 = nullptr;
			return true;
		}
	}

	
};
int main() {
	LL a;
	a.display();
	a.InertAtTail(1);
	a.display();
	
	a.InertAtTail(2);
	a.InertAtTail(3);
	a.InertAtTail(4);
	a.display();

	
	/*cout << "Delete at tail :" << a.DeleteAtHead() << endl;
	a.display();
	cout << "Delete at tail :" << a.DeleteAtHead() << endl;
	a.display();
	cout << "Delete at tail :" << a.DeleteAtHead() << endl;
	a.display();
	cout << "Delete at tail :" << a.DeleteAtHead() << endl;
	a.display();
	cout << "Delete at tail :" << a.DeleteAtHead() << endl;
	a.display();*/
	cout << "enter value :";
	int c;
	do {
	cin >> c;
	if (a.search(c)) {
		cout << "value Delted " << endl;
	}
	else {
		cout << "Value not delteed " << endl;
	}
	a.display();

	} while (c != 11);
	return 0;
}
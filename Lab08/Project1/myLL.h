#include "LL.h"

class MyCLL :public CircularLinkedLists {
public:

	void InsertAtTail(int value);
	void InsertAtHead(int value);
	void display();
	int DeleteAtTail();
	int DeleteAtHead();
	bool search(int a);
	int kill(int, int);
};
int MyCLL::kill(int start, int skip) {
	if (head == nullptr) {
		cout << "List is empty.\n";
		return NULL;
	}

	// Move to starting position
	Node* curr = head;
	Node* prev = tail;
	for (int i = 1; i < start; ++i) {
		prev = curr;
		curr = curr->next;
	}


	while (curr != curr->next) { 
		for (int count = 1; count < skip; ++count) {
			prev = curr;
			curr = curr->next;
		}

		cout << "Killing: " << curr->data << endl;
		prev->next = curr->next;


		if (curr == head)
			head = curr->next;
		if (curr == tail)
			tail = prev;

		delete curr;
		curr = prev->next;
	}

	cout << "Survivor is: " << curr->data << endl;
	return curr->data;
}

void MyCLL::InsertAtTail(int value) {
	Node* nn = new Node;
	nn->data = value;
	nn->next = nullptr;
	if (head == nullptr && tail == nullptr) //Adding Note to Empty LinkedList
	{
		head = nn;
		tail = nn;
	}
	else {
		tail->next = nn;
		nn->next = head;
		tail = nn;
	}

}
void MyCLL::InsertAtHead(int value) {
	Node* nn = new Node;
	nn->data = value;
	nn->next = nullptr;
	if (head == nullptr && tail == nullptr) //Adding Note to Empty LinkedList
	{
		head = nn;
		tail = nn;
	}
	else {
		nn->next = head;
		tail->next = nn;

		head = nn;
	}
}
void MyCLL::display() {
	if (head == nullptr && tail == nullptr) {
		cout << "Linked List is Empty(Display)" << endl;
	}
	else {
		Node* t = head;
		int a = 0;
		while (true) {

			cout << t->data << "  ";
			t = t->next;
			if (t == head) {

				break;
			}
		}
	}
	cout << endl;
}
int MyCLL::DeleteAtTail() {
	if (head == nullptr && tail == nullptr) {  //for empty ListedLists
		cout << "Linked List is Empty!(DeleteAtTail) " << endl;
		return NULL;
	}
	else if (head == tail) {                      //for Single ListedLists
		int value = tail->data;
		cout << "for Single ListedLists" << endl;
		delete head;
		head = nullptr;
		tail = nullptr;
		return value;
	}
	else {                                    //for Multiple ListedLists
		int value = tail->data;
		Node* t = head;
		while (true) {
			if (t->next == tail) {
				break;
			}
			t = t->next;
		}
		delete tail;
		tail = t;
		tail->next = head;
		return value;
	}
}
int MyCLL::DeleteAtHead() {
	if (head == nullptr && tail == nullptr) //for empty ListedLists
	{
		cout << "Linked List is Empty(DeleteAtHead) " << endl;
		return NULL;
	}
	else if (head == tail) //for Single ListedLists
	{
		int value = head->data;
		delete head;
		head = nullptr;
		tail = nullptr;
		return value;
	}
	else {                 //for Multiple ListedLists
		int value = head->data;
		Node* t = head;
		head = head->next;
		tail->next = head;
		return value;
	}
}
bool MyCLL::search(int a) {
	if (head == nullptr && tail == nullptr) //for empty ListedLists
	{
		cout << "Linked List is Empty(search) " << endl;
		return false;
	}
	else {
		Node* t = head;
		while (true) {
			if (t->data == a) {
				return true;
			}
			t = t->next;
			if (t == head) {
				return false;
			}
		}
	}
}

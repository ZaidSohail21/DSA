#include "queue.h"

template <class T>
class Myqueue :public queue<T> {


public:
	Myqueue();
	Myqueue(int m);

	void enqueue(T a,string n);
	T dequeue();
	string dequeue2();
	T peek();
	bool isFull();
	bool isEmpty();
	void display();
};
template <class T>
Myqueue<T>::Myqueue() :queue<T>() {}
template <class T>
Myqueue<T>::Myqueue(int m) : queue<T>(m) {}


template <class T>
void Myqueue<T>::enqueue(T a,string n) {
	if (isFull()) {
		cout << "Queue is full!" << endl;
	}
	else {

		queue<T>::Name[queue<T>::cs] = n;
		queue<T>::ID[queue<T>::cs] = a;
		queue<T>::cs++;
	}
}

template <class T>
T Myqueue<T>::dequeue() {
	if (isEmpty()) {
		cout << "Queue is Empty" << endl;
		return NULL;
	}
	else {


		T rv = queue<T>::ID[0];
		for (int i = 0; i < queue<T>::cs; i++) {
			queue<T>::ID[i] = queue<T>::ID[i + 1];
		}
		
		queue<T>::cs--;
		return rv;
	}
}
template <class T>
string Myqueue<T>::dequeue2() {
	if (isEmpty()) {
		cout << "Queue is Empty" << endl;
		return NULL;
	}
	else {
		string rv = queue<T>::Name[0];
		for (int i = 0; i < queue<T>::cs; i++) {
			queue<T>::Name[i] = queue<T>::Name[i + 1];
		}
		return rv;
	}
}


template <class T>
T Myqueue<T>::peek() {
	if (isEmpty()) {
		cout << "Queue is empty" << endl;
		return NULL;
	}
	else {
		return queue<T>::ID[0];
	}
}
template <class T>
bool Myqueue<T>::isFull() {
	if (queue<T>::max == queue<T>::cs) {
		return true;
	}
	else {
		return false;
	}

}
template <class T>
bool Myqueue<T>::isEmpty() {
	if (queue<T>::cs == 0) {
		return true;
	}
	else {
		return false;
	}
}
template <class T>
void Myqueue<T>::display() {
	for (int i = 0; i < queue<T>::cs; i++) {
		cout << queue<T>::Name[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < queue<T>::cs; i++) {
		cout << queue<T>::ID[i] << " ";
	}
	cout << endl;
}
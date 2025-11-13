#include "Queue.h"

template <class T>
class Myqueue :public queue<T> {


public:
	Myqueue();
	Myqueue(int m);

	void enqueue(T a);
	T dequeue();
	T peek();
	bool isFull();
	bool isEmpty();
	void display();
	void reverse();
};
template <class T>
Myqueue<T>::Myqueue() :queue<T>() {}
template <class T>
Myqueue<T>::Myqueue(int m) : queue<T>(m) {}

template <class T>
void Myqueue<T>::enqueue(T a) {
	if (isFull()) {
		cout << "Queue is full!" << endl;
	}
	else {


		queue<T>::arr[queue<T>::cs] = a;
		queue<T>::cs++;
	}
}
//template <class T>
//void Myqueue<T>::reverse() {
//	if (isEmpty()) {
//		cout << "Queue is Empty!" << endl;
//		return;
//	}
//
//	// Reverse the elements in-place in the underlying array
//	int i = front;
//	int j = rear;
//
//	while (i < j) {
//		T temp = data[i];
//		data[i] = data[j];
//		data[j] = temp;
//
//		i = (i + 1) % capacity;
//		j = (j - 1 + capacity) % capacity;
//	}
//}

template <class T>
void Myqueue<T>::reverse() {
	if (isEmpty()) {
		cout << "Queue is Empty!" << endl;
	}
	else {
		Myqueue<int> t(10);
		
		while (!isEmpty()) {

			int i = 0;
			int a = queue<T>::cs - 1;
			while (i < a) {
				enqueue(dequeue());
				i++;
			}
			t.enqueue(dequeue());
		}
		while (!t.isEmpty()) {
			enqueue(t.dequeue());
		}
		
	}
}
template <class T>
T Myqueue<T>::dequeue() {
	if (isEmpty()) {
		cout << "Queue is Empty" << endl;
		return NULL;
	}
	else {


		T rv = queue<T>::arr[0];
		for (int i = 0; i < queue<T>::cs; i++) {
			queue<T>::arr[i] = queue<T>::arr[i + 1];
		}
		queue<T>::cs--;
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
		return queue<T>::arr[0];
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
		cout << queue<T>::arr[i] << " ";
	}
	cout << endl;
}
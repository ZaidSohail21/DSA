//#include "Stack.h"
//template <class T>
//class MyStack :public Stack<T> {
//protected:
//
//public:
//
//	MyStack(int m);
//	void push(T a);
//	T pop();
//	T top();
//	T getmin();
//	void display();
//	bool isEmpty();
//	bool isFull();
//};
//template <class T>
//MyStack<T>::MyStack(int m) :Stack<T>(m) { }
//template <class T>
//void MyStack<T>::push(T z) {
//	if (!isFull()) {
//		Stack<T>::arr[Stack<T>::cs] = z;
//		Stack<T>::cs++;
//	}
//	else {
//		cout << "Stack is Full!" << endl;
//	}
//}
//template <class T>
//T MyStack<T>::pop() {
//	if (!isEmpty()) {
//		Stack<T>::cs--;
//		return Stack<T>::arr[Stack<T>::cs];
//	}
//	else {
//		cout << "Stack is Empty!" << endl;
//	}
//}
//template <class T>
//T MyStack<T>::getmin() {
//	if (!isEmpty()) {
//		T a = Stack<T>::arr[0];
//		for (int i = 0; i < Stack<T>::cs; i++) {
//			if (a > Stack<T>::arr[i]) {
//				a = Stack<T>::arr[i];
//			}
//		}
//
//		return a;
//	}
//	else {
//		cout << "Stack is Empty!" << endl;
//		return NULL;
//	}
//}
//template <class T>
//T MyStack<T>::top() {
//	int t = Stack<T>::cs - 1;
//	return Stack<T>::arr[t];
//}
//template <class T>
//void MyStack<T>::display() {
//	for (int i = 0; i < Stack<T>::cs; i++) {
//		cout << Stack<T>::arr[i] << "  ";
//	}
//	cout << endl;
//}
//template <class T>
//bool MyStack<T>::isEmpty() {
//	if (Stack<T>::cs == 0) {
//		return true;
//	}
//	return false;
//}
//template <class T>
//bool MyStack<T>::isFull() {
//	if (Stack<T>::cs == Stack<T>::max) {
//		return true;
//	}
//	return false;
//
//}
//#include "CarStack.h"
//
//template <class T>
//class MyStack : public Stack<T> {
//protected:
//	T* minArr;
//public:
//	MyStack(int m);
//	~MyStack();
//	void push(T a);
//	T pop();
//	T top();
//	
//	void display();
//	bool isEmpty();
//	bool isFull();
//	bool removeCar(T carNumber);
//	bool search(T carNumber);
//	int size();
//};
//
//template <class T>
//MyStack<T>::MyStack(int m) : Stack<T>(m) {
//	minArr = new T[m];
//}
//
//template <class T>
//MyStack<T>::~MyStack() {
//	delete[] minArr;
//}
//
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
//
//template <class T>
//T MyStack<T>::pop() {
//	if (!isEmpty()) {
//		Stack<T>::cs--;
//		return Stack<T>::arr[Stack<T>::cs];
//	}
//	else {
//		cout << "Stack is Empty!" << endl;
//		return T();
//	}
//}
//
//template <class T>
//T MyStack<T>::top() {
//	if (!isEmpty()) {
//		return Stack<T>::arr[Stack<T>::cs - 1];
//	}
//	cout << "Stack is Empty!" << endl;
//	return T();
//}
//
//template <class T>
//void MyStack<T>::display() {
//	if (isEmpty()) {
//		cout << "Stack is Empty!" << endl;
//		return;
//	}
//	cout << "Parked Cars (bottom to top): ";
//	for (int i = 0; i < Stack<T>::cs; i++) {
//		cout << Stack<T>::arr[i] << "  ";
//	}
//	cout << endl;
//}
//
//template <class T>
//bool MyStack<T>::isEmpty() {
//	return Stack<T>::cs == 0;
//}
//
//template <class T>
//bool MyStack<T>::isFull() {
//	return Stack<T>::cs == Stack<T>::max;
//}
//
//template <class T>
//bool MyStack<T>::removeCar(T carNumber) {
//	if (isEmpty()) {
//		cout << "Parking Lot is empty.\n";
//		return false;
//	}
//
//	MyStack<T> tempStack(Stack<T>::max);
//	bool found = false;
//
//	while (!isEmpty()) {
//		T topCar = pop();
//		if (topCar == carNumber) {
//			found = true;
//			cout << "Car " << carNumber << " removed from parking.\n";
//			break;
//		}
//		else {
//			tempStack.push(topCar);
//		}
//	}
//
//	while (!tempStack.isEmpty()) {
//		push(tempStack.pop());
//	}
//
//	if (!found) {
//		cout << "Car " << carNumber << " not found in parking lot.\n";
//	}
//
//	return found;
//}
//
//template <class T>
//bool MyStack<T>::search(T carNumber) {
//	for (int i = 0; i < Stack<T>::cs; i++) {
//		if (Stack<T>::arr[i] == carNumber) {
//			return true;
//		}
//	}
//	return false;
//}
//
//template <class T>
//int MyStack<T>::size() {
//	return Stack<T>::cs;
//}

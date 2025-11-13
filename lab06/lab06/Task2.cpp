//#include <iostream>
//#include <string>
//using namespace std;
//template <class T>
//class Stack {
//protected:
//	int cs;
//	int max;
//	T* arr;
//public:
//	Stack();
//	Stack(int m);
//	virtual void push(T a) = 0;
//	virtual T pop() = 0;
//	virtual T top() = 0;
//	virtual void display() = 0;
//	virtual int set() = 0;
//};
//template <class T>
//Stack<T>::Stack() {
//	cs = 0;
//	max = 0;
//	arr = new T[max];
//}
//template <class T>
//Stack<T>::Stack(int m) {
//	cs = 0;
//	max = m;
//	arr = new T[max];
//}
//template <class T>
//class MyStack :public Stack<T> {
//public:
//	MyStack();
//	MyStack(int m);
//	void push(T a);
//	T pop();
//	T top();
//	void display();
//	int set();
//};
////constructors
//
//template <class T>
//MyStack<T>::MyStack() :Stack<T>() {}
//template <class T>
//MyStack<T>::MyStack(int a) : Stack<T>(a) {}
//
////functions
//template <class T>
//int MyStack<T>::set() {
//	return Stack<T>::cs;
//}
//
//template <class T>
//void MyStack<T>::push(T a) {
//	if (Stack<T>::cs== Stack<T>::max) {
//		cout << "Stack is Full" << endl;
//	}
//	else {
//		Stack<T>::arr[Stack<T>::cs] = a;
//		Stack<T>::cs++;
//	}
//}
//
//template <class T>
//T MyStack<T>::pop() {
//	if (Stack<T>::cs == 0) {
//		cout << "Stack is Empty!" << endl;
//		return NULL;
//	}
//	else {
//		Stack<T>::cs--;
//		return Stack<T>::arr[Stack<T>::cs];
//	}
//}
//template <class T>
//T MyStack<T>::top() {
//	int s = Stack<T>::cs - 1;
//	return Stack<T>::arr[s];
//}
//
//template <class T>
//void MyStack<T>::display() {
//	for (int i = 0; i < Stack<T>::cs; i++) {
//		cout << Stack<T>::arr[i] << "  ";
//	}
//	cout << endl;
//}
//int main() {
//	MyStack<int> z(10);
//	int d;
//	do {
//		cout << "press 1 for enqueue" << endl;
//		cout << "press 2 for dequeue" << endl;
//		cout << "press 3 for display" << endl;
//		cout << "press 4 for front" << endl;
//		cout << "press 0 for exit" << endl;
//		cin >> d;
//		if (d == 1) {
//			cout << "Enter Number :";
//			int s;
//			cin >> s;
//			z.push(s);
//		}
//		else if(d==2) {
//			MyStack<int> s1(10);
//			int b = z.set();
//			int count=0;
//			for (int i = 0; i < b; i++) {
//				s1.push(z.pop());
//				count++;
//			}
//			
//			cout << "Removed value is :" << s1.pop() << endl;
//			
//			for (int i = 0; i < count-1; i++) {
//				z.push(s1.pop());
//			}
//		}
//		else if (d == 4) {
//			MyStack<int> s1(10);
//			int b = z.set();
//			int count = 0;
//			for (int i = 0; i < b; i++) {
//				s1.push(z.pop());
//				count++;
//			}
//			cout << "Front value is :" << s1.top() << endl;
//
//			for (int i = 0; i < count; i++) {
//				z.push(s1.pop());
//			}
//		}
//		else if (d == 3) {
//			z.display();
//		}
//	} while (d != 0);
//	cout << endl << endl;
//	return 0;
//}

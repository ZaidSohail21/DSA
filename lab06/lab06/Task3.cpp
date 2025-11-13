//#include <iostream>
//using namespace std;
//template <class T>
//class queue {
//protected:
//	T* arr;
//	int max;
//	int cs;
//public:
//	queue();
//	queue(int m);
//
//	virtual void enqueue(T a) = 0;
//	virtual T dequeue() = 0;
//	virtual T peek() = 0;
//	virtual bool isFull() = 0;
//	virtual bool isEmpty() = 0;
//	virtual void display() = 0;
//	virtual void reverse(int a) = 0;
//
//};
//template <class T>
//queue<T>::queue() {
//	cs = 0;
//	max = 0;
//	arr = new T[max];
//}
//template <class T>
//queue<T>::queue(int m) {
//	cs = 0;
//	max = m;
//	arr = new T[max];
//}
//
//
//
//template <class T>
//class Myqueue :public queue<T> {
//
//
//public:
//	Myqueue();
//	Myqueue(int m);
//
//	void enqueue(T a);
//	T dequeue();
//	T peek();
//	bool isFull();
//	bool isEmpty();
//	void display();
//	void reverse(int a);
//};
//template <class T>
//Myqueue<T>::Myqueue() :queue<T>() {}
//template <class T>
//Myqueue<T>::Myqueue(int m) : queue<T>(m) {}
//template <class T>
//void Myqueue<T>::reverse(int k) {
//	if (k > 1) {
//		if (queue<T>::cs >= k) {
//			T* temp = new T[queue<T>::cs];
//			for (int i = 0; i < queue<T>::cs; i++) {
//				temp[i] = queue<T>::arr[i];
//			}
//			for (int i = 0; i < k; i++) {
//				queue<T>::arr[i] = temp[k - i - 1];
//			}
//		}
//		else {
//			cout << "K Size is greater than current size" << endl;
//		}
//	}
//	else {
//		cout << "cant Do reverse more than of 2" << endl;
//	}
//}
//template <class T>
//void Myqueue<T>::enqueue(T a) {
//	if (isFull()) {
//		cout << "Queue is full!" << endl;
//	}
//	else {
//
//
//		queue<T>::arr[queue<T>::cs] = a;
//		queue<T>::cs++;
//	}
//}
//template <class T>
//T Myqueue<T>::dequeue() {
//	if (isEmpty()) {
//		cout << "Queue is Empty" << endl;
//		return NULL;
//	}
//	else {
//
//
//		T rv = queue<T>::arr[0];
//		for (int i = 0; i < queue<T>::cs; i++) {
//			queue<T>::arr[i] = queue<T>::arr[i + 1];
//		}
//		queue<T>::cs--;
//		return rv;
//	}
//}
//
//template <class T>
//T Myqueue<T>::peek() {
//	if (isEmpty()) {
//		cout << "Queue is empty" << endl;
//		return NULL;
//	}
//	else {
//		return queue<T>::arr[0];
//	}
//}
//template <class T>
//bool Myqueue<T>::isFull() {
//	if (queue<T>::max == queue<T>::cs) {
//		return true;
//	}
//	else {
//		return false;
//	}
//
//}
//template <class T>
//bool Myqueue<T>::isEmpty() {
//	if (queue<T>::cs == 0) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//template <class T>
//void Myqueue<T>::display() {
//	for (int i = 0; i < queue<T>::cs; i++) {
//		cout << queue<T>::arr[i] << " ";
//	}
//	cout << endl;
//}
//
//
//
//int main() {
//	Myqueue<int> q(10);
//
//	int d;
//	do {
//		cout << "press 1 for enqueue" << endl;
//		cout << "press 2 for dequeue" << endl;
//		cout << "press 3 for display" << endl;
//		cout << "press 4 for front" << endl;
//		cout << "press 5 for reverse" << endl;
//		cout << "press 0 for exit" << endl;
//		cin >> d;
//		if (d == 1) {
//			cout << "Enter Number :";
//			int s;
//			cin >> s;
//			q.enqueue(s);
//		}
//		else if (d == 2) {
//
//			cout << "Removed value is :" << q.dequeue() << endl;
//
//		}
//		else if (d == 4) {
//
//			cout << "Front value is :" << q.peek() << endl;
//
//		}
//		else if (d == 3) {
//			q.display();
//		}
//		else if (d == 5) {
//			cout << "Enter the value from top you wanted to reverse" << endl;
//			int aa;
//			cin >> aa;
//			q.reverse(aa);
//			q.display();
//		}
//	} while (d != 0);
//	
//	cout << "HI" << endl;
//	return 0;
//}
#include <iostream>
using namespace std;
template <class T>
class queue {
protected:
	T* arr;
	int max;
	int cs;
public:
	queue();
	queue(int m);

	virtual void enqueue(T a) = 0;
	virtual T dequeue() = 0;
	virtual T peek() = 0;
	virtual bool isFull() = 0;
	virtual bool isEmpty() = 0;
	virtual void display() = 0;
	virtual void reverse() = 0;

};
template <class T>
queue<T>::queue() {
	cs = 0;
	max = 0;
	arr = new T[max];
}
template <class T>
queue<T>::queue(int m) {
	cs = 0;
	max = m;
	arr = new T[max];
}



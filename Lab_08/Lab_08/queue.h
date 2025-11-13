#include <iostream>
#include <string>
using namespace std;
template <class T>
class queue {
protected:
	string *Name;
	T* ID;
	int max;
	int cs;
public:
	queue();
	queue(int m);
	virtual string dequeue2()=0;
	virtual void enqueue(T a,string n) = 0;
	virtual T dequeue() = 0;
	virtual T peek() = 0;
	virtual bool isFull() = 0;
	virtual bool isEmpty() = 0;
	virtual void display() = 0;

};
template <class T>
queue<T>::queue() {
	cs = 0;
	max = 0;
	ID = new T[max];
	Name = new string[max];
}

template <class T>
queue<T>::queue(int m) {
	cs = 0;
	max = m;
	ID = new T[max];
	Name = new string[max];
}

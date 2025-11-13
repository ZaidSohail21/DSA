#include "MyQueue.h"

//int main() {
//	Myqueue<int> q(10);
//	Myqueue<int> t(10);
//	q.enqueue(1);
//	q.enqueue(2);
//	q.enqueue(3);
//	q.enqueue(4);
//	q.display();
//	cout << endl;
//	q.reverse();
//	q.display();
//	return 0;
//
//}
int main() {
	Myqueue<int> q(10);
	Myqueue<int> q1(10);
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.display();
	cout << endl;
	Myqueue<int> q2=q;
	q2.display();
	

	
	int count=0;
	while (!q2.isEmpty()) {
		q2.dequeue();
		count++;
	}
	q.display();
	/*Myqueue<int> q3(count);
	while (q.isEmpty()) {

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
	}*/
	return 0;

}

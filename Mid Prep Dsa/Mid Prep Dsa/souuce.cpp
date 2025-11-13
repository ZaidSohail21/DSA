//#include <iostream>
//using namespace std;
//class arrays {
//protected:
//	int max;
//	int cs;
//	int* arr;
//public:
//	arrays() {
//		cs = 0;
//		max = 0;
//		arr = new int[max];
//	}
//	arrays(int a) {
//		cs = 0;
//		max = a;
//		arr = new int[max];
//	}
//	virtual void add(int) = 0;
//	virtual bool isEmpty() = 0;
//	virtual bool isFull() = 0;
//	virtual int remove() = 0;
//	virtual void display() = 0;
//	virtual int dequeue() = 0;
//	~arrays() {
//		delete[]arr;
//	}
//};
//class myarray:public arrays {
//public:
//	myarray(int a):arrays(a){}
//	void add(int a) {
//		if (isFull()) {
//			cout << "Arr is full;" << endl;
//		}
//		else {
//			arr[cs] = a;
//			cs++;
//		}
//	}
//	bool isEmpty() {
//		return cs == 0;
//	}
//	bool isFull() {
//		return max == cs;
//	}
//	int remove() {
//		if (isEmpty()) {
//			cout << "stack is empty" << endl;
//			return NULL;
//		}
//		else {
//			cs--;
//			return arr[cs];
//		}
//	}
//	void display() {
//		for (int i = 0; i < cs; i++) {
//			cout << arr[i] << "  ";
//		}
//		cout << endl;
//	}
//	int dequeue() {
//		if (isEmpty()) {
//			cout << "queue is empty" << endl;
//			return NULL;
//		}
//		else {
//
//
//			int rt = arr[0];
//			for (int i = 0; i < cs; i++) {
//				arr[i] = arr[i + 1];
//			}
//			cs--;
//			return rt;
//		}
//	}
//	~myarray(){}
//};
//int main() {
//	myarray obj(3);
//	obj.remove();
//	obj.display();
//	obj.add(1);
//	obj.display();
//	obj.add(2);
//	obj.display();
//	obj.add(3);
//	obj.display();
//	obj.add(4);
//	obj.remove();
//	obj.display();
//	cout << obj.dequeue() << endl;
//	obj.display();
//
//	cout << "hi zaid" << endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//class arrays {
//protected:
//	int max;
//	int cs;
//	int* arr;
//public:
//	arrays() {
//		cs = 0;
//		max = 0;
//		arr = new int[max];
//	}
//	arrays(int a) {
//		cs = 0;
//		max = a;
//		arr = new int[max];
//	}
//	virtual void add(int) = 0;
//	virtual bool isEmpty() = 0;
//	virtual bool isFull() = 0;
//	virtual int peek() = 0;
//	virtual int top() = 0;
//	virtual int remove() = 0;
//	virtual void display() = 0;
//	virtual int dequeue() = 0;
//	~arrays() {
//		delete[]arr;
//	}
//};
//class myarray :public arrays {
//	int front;
//	int rear;
//public:
//	myarray(int a) :arrays(a) {
//		front = 0;
//		rear = 0;
//	}
//	void add(int a) {
//		if (isFull()) {
//			cout << "Arr is full;" << endl;
//		}
//		else {
//			
//			
//			arr[rear%max] = a;
//			rear++;
//			cs++;
//		}
//	}
//	bool isEmpty() {
//		return cs == 0;
//	}
//	bool isFull() {
//		return max == cs;
//	}
//	int peek() {
//		return arr[front % max];
//	}
//	int top() {
//		int a = rear - 1;
//		return arr[a % max];
//	}
//	int remove() {
//		if (isEmpty()) {
//			cout << "stack is empty" << endl;
//			return NULL;
//		}
//		else {
//			cs--;
//			int i = front;
//			front++;
//			return arr[i%max];
//		}
//	}
//	void display() {
//		for (int i = front; i < rear; i++) {
//			cout << arr[i%max] << "  ";
//		}
//		cout << endl;
//	}
//	int dequeue() {
//		if (isEmpty()) {
//			cout << "queue is empty" << endl;
//			return NULL;
//		}
//		else {
//			int a=front%max;
//			
//			cs--;
//			int i = front;
//			front++;
//			return arr[i % max];
//		}
//	}
//	~myarray() {}
//};
//int main()
//{
//	myarray q(9);
//	for (int k = 1; k <= 7; k++)
//		q.add(k * 10);
//	for (int k = 1; k <= 3; k++)
//	{
//		cout << q.dequeue() << endl;
//		q.add(2 * q.dequeue());
//	}
//	cout << "Output is: " << endl;
//	for (int k = 0; k < 7; k++)
//		cout << q.dequeue() << endl;
//	return 0;
//}
//int main()
//{
//	myarray a(7);
//	for (int k = 1; k <= 6; k++) {
//		cout << k << endl;
//		a.add(k);
//	}
//	a.display();
//	for (int k = 1; k <= 3; k++)
//	{
//		cout << a.dequeue() << endl;
//		a.add(a.dequeue());
//	}
//	cout << "Output is : " << endl;
//	for (int k = 0; k < 7; k++)
//		cout << a.dequeue() << endl;
//	return 0;
//}

//int main() {
//	myarray obj(10);
//	obj.remove();
//	obj.display();
//	obj.add(1);
//	obj.display();
//	obj.add(2);
//	obj.display();
//	obj.add(3);
//	obj.display();
//	obj.add(4);
//	
//	obj.display();
//	obj.add(1);
//	obj.display();
//	obj.add(2);
//	obj.display();
//	obj.add(3);
//	obj.display();
//	obj.add(4);
//
//	obj.display();
//	cout << obj.dequeue() << endl;
//	obj.display();
//	cout << obj.dequeue() << endl;
//	obj.display();
//	cout << obj.dequeue() << endl;
//	obj.display();
//	cout << obj.dequeue() << endl;
//	cout << obj.dequeue() << endl;
//	obj.display();
//	cout << obj.dequeue() << endl;
//	obj.display();
//	obj.display();
//	cout << "Peek value :" << obj.peek();
//	cout << "Top value :" << obj.top();
//	cout << "hi zaid" << endl;
//	return 0;
//}
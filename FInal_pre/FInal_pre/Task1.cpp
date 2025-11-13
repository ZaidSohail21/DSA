//#include <iostream>
//using namespace std;
//class minheap {
//	int heap[100];
//	int size;
//	void heapup(int a) {
//		while (a > 0 && heap[a] < heap[(a - 1) / 2]) {
//			int temp = heap[a];
//			heap[a] = heap[(a - 1) / 2];
//			heap[(a - 1) / 2] = temp;
//			a = (a - 1) / 2;
//		}
//	}
//public:
//	minheap() {
//		size = 0;
//	}
//
//	void display() {
//		for (int i = 0; i < size; i++) {
//			cout << heap[i] << "  ";
//		}
//		cout << endl;
//	}
//	void insert(int a) {
//		heap[size] = a;
//		heapup(size);
//		size++;
//	}
//	void deleteMin() {
//		if (size == 0) {
//			cout << "it is empty" << endl;
//		}
//		else {
//			heap[0] = heap[size - 1];
//			heapdown(0);
//			size--;
//		}
//	}
//	void heapdown(int a) {
//		int s = a;
//		int l = 2 * a + 1;
//		int r = 2 * a + 2;
//		if (s > l && heap[s] > heap[l]) {
//			s = l;
//		}
//		if (s > r && heap[s] > heap[r]) {
//			s = r;
//		}
//		if (s != a) {
//			int temp = heap[s];
//			heap[s] = heap[a];
//			heap[a] = temp;
//			heapdown(s);
//		}
//
//	}
//	
//};
//int main() {
//	minheap h;
//	cout << "Enter the size :";
//	int y, z;
//	cin >> y;
//	for (int i = 0; i < y; i++) {
//		cout << "Enter value :";
//		cin >> z;
//		h.insert(z);
//	}
//	h.display();
//
//	h.deleteMin();
//	cout << "After deleteion display" << endl;
//	h.display();
//
//	cout << "hi" << endl;
//	return 0;
//}
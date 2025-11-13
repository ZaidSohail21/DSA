//#include <iostream>
//using namespace std;
//class minheap {
//	int heap[100];
//	int size;
//	void heapup(int a) {
//		while (a > 0 && heap[a] > heap[(a - 1) / 2]) {
//			int temp = heap[a];
//			heap[a] = heap[(a - 1) / 2];
//			heap[(a - 1) / 2] = temp;
//			a = (a - 1) / 2;
//		}
//	}
//	void heapdown(int a) {
//		int s = a;
//		int l = 2 * a + 1;
//		int r = 2 * a + 2;
//		if (s > l && heap[s] < heap[l]) {
//			s = l;
//		}
//		if (s > r && heap[s] < heap[r]) {
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
//	/*void sorted(int arr[], int s) {
//		buildup(arr, s);
//		for (int i = s - 1; i > 0; i--) {
//			int temp = heap[0];
//			heap[0] = heap[i];
//			heap[i] = heap[0];
//			size--;
//			heapdown(0);
//		}
//		for (int i = 0; i < s; i++) {
//			arr[i] = heap[i];
//		}
//	}*/
//	void heapSort(int arr[], int n) {
//    // Build max heap
//    for (int i = n / 2 - 1; i >= 0; i--)
//        heapify(arr, n, i);
//
//    // Extract elements one by one from heap
//    for (int i = n - 1; i > 0; i--) {
//        swap(arr[0], arr[i]);      // Move current root to end
//        heapify(arr, i, 0);        // Heapify reduced heap
//    }
//}
//	void heapify(int arr[], int n, int i) {
//		int s = i;
//		int l = 2 * i + 1;
//		int r = 2 * i + 2;
//		if (n > l && heap[s] < heap[l]) {
//			s = l;
//		}
//		if (n > r && heap[s] < heap[r]) {
//			s = r;
//		}
//		if (s != i) {
//			int temp = heap[s];
//			heap[s] = heap[i];
//			heap[i] = temp;
//			heapdown(s);
//		}
//	}
//	void buildup(int arr[], int s) {
//		for (int i = 0; i < s; i++) {
//			heap[i] = arr[i];
//		}
//		for (int i = s/2 - 1; i >= 0; i--) {
//			heapdown(i);
//		}
//		for (int i = 0; i < s; i++) {
//			cout << heap[i] << "  ";
//		}
//	}
//
//};
//int main() {
//	/*minheap h;
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
//	h.display();*/
//
//	int arr[3];
//	for (int i = 0; i < 3; i++) {
//		cout << "enter value :";
//		cin >> arr[i];
//	}
//	minheap hh2;
//	hh2.heapSort(arr, 3);
//	hh2.display();
//
//	
//	for (int i = 0; i < 3; i++) {
//	
//		cout  << arr[i] << "  "  ;
//	}
//	cout << "hi" << endl;
//	return 0;
//}
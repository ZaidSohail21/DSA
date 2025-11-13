//#include <iostream>
//using namespace std;
//
//class MinHeap {
//private:
//    int heap[100];
//    int size;
//
//    void heapifyUp(int index) {
//        while (index > 0 && heap[index] < heap[(index - 1) / 2]) {
//            int temp = heap[index];
//            heap[index] = heap[(index - 1) / 2];
//            heap[(index - 1) / 2] = temp;
//            index = (index - 1) / 2;
//        }
//    }
//
//public:
//    MinHeap() {
//        size = 0;
//    }
//
//    void insert(int value) {
//        heap[size] = value;
//        heapifyUp(size);
//        size++;
//    }
//
//    void display() {
//        for (int i = 0; i < size; i++)
//            cout << heap[i] << " ";
//        cout << endl;
//    }
//};
//
//int main() {
//    MinHeap h;
//    int n, x;
//    cout << "Enter number of elements: ";
//    cin >> n;
//
//    cout << "Enter elements: ";
//    for (int i = 0; i < n; i++) {
//        cin >> x;
//        h.insert(x);
//    }
//
//    cout << "Min-Heap array: ";
//    h.display();
//
//    return 0;
//}
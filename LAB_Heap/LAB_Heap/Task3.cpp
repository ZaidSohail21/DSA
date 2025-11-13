//#include <iostream>
//using namespace std;
//
//class MaxHeap {
//private:
//    int heap[100];
//    int size;
//
//    void heapifyUp(int index) {
//        while (index > 0 && heap[index] > heap[(index - 1) / 2]) {
//            int temp = heap[index];
//            heap[index] = heap[(index - 1) / 2];
//            heap[(index - 1) / 2] = temp;
//            index = (index - 1) / 2;
//        }
//    }
//
//    void heapifyDown(int index) {
//        int largest = index;
//        int left = 2 * index + 1;
//        int right = 2 * index + 2;
//
//        if (left < size && heap[left] > heap[largest])
//            largest = left;
//        if (right < size && heap[right] > heap[largest])
//            largest = right;
//
//        if (largest != index) {
//            int temp = heap[index];
//            heap[index] = heap[largest];
//            heap[largest] = temp;
//            heapifyDown(largest);
//        }
//    }
//
//public:
//    MaxHeap() {
//        size = 0;
//    }
//
//    void insert(int value) {
//        heap[size] = value;
//        heapifyUp(size);
//        size++;
//    }
//
//    void deleteMax() {
//        if (size == 0) return;
//        heap[0] = heap[size - 1];
//        size--;
//        heapifyDown(0);
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
//    MaxHeap h;
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
//    cout << "Max-Heap before deletion: ";
//    h.display();
//
//    h.deleteMax();
//
//    cout << "Max-Heap after deleting max: ";
//    h.display();
//
//    return 0;
//}

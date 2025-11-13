//#include <iostream>
//using namespace std;
//
//class MinHeap {
//private:
//    int heap[100];
//    int size;
//
//    void heapifyDown(int index) {
//        int smallest = index;
//        int left = 2 * index + 1;
//        int right = 2 * index + 2;
//
//        if (left < size && heap[left] < heap[smallest])
//            smallest = left;
//        if (right < size && heap[right] < heap[smallest])
//            smallest = right;
//
//        if (smallest != index) {
//            int temp = heap[index];
//            heap[index] = heap[smallest];
//            heap[smallest] = temp;
//            heapifyDown(smallest);
//        }
//    }
//
//public:
//    MinHeap() {
//        size = 0;
//    }
//
//    void buildHeap(int arr[], int n) {
//        for (int i = 0; i < n; i++) {
//            heap[i] = arr[i];
//        }
//        size = n;
//        for (int i = size / 2 - 1; i >= 0; i--) {
//            heapifyDown(i);
//        }
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
//    int arr[100], n;
//
//    cout << "Enter number of elements: ";
//    cin >> n;
//
//    cout << "Enter elements (unordered): ";
//    for (int i = 0; i < n; i++)
//        cin >> arr[i];
//
//    cout << "Array before buildHeap(): ";
//    for (int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//
//    h.buildHeap(arr, n);
//
//    cout << "Array after buildHeap (Min-Heap): ";
//    h.display();
//
//    return 0;
//}

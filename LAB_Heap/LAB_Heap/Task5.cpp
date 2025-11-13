//#include <iostream>
//using namespace std;
//
//class MaxHeap {
//private:
//    int heap[100];
//    int size;
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
//public:
//    void heapSort(int arr[], int n) {
//        buildHeap(arr, n);
//
//        for (int i = n - 1; i > 0; i--) {
//            int temp = heap[0];
//            heap[0] = heap[i];
//            heap[i] = temp;
//            size--;
//            heapifyDown(0);
//        }
//
//        for (int i = 0; i < n; i++)
//            arr[i] = heap[i];
//    }
//};
//
//int main() {
//    MaxHeap h;
//    int arr[100], n;
//
//    cout << "Enter number of elements: ";
//    cin >> n;
//
//    cout << "Enter elements: ";
//    for (int i = 0; i < n; i++)
//        cin >> arr[i];
//
//    cout << "Original array: ";
//    for (int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//
//    h.heapSort(arr, n);
//
//    cout << "Sorted array (ascending): ";
//    for (int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//
//    return 0;
//}

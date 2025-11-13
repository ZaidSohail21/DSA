//#include <iostream>
//using namespace std;
//
//void heapify(int arr[], int n, int i) {
//    int largest = i;          // Initialize largest as root
//    int left = 2 * i + 1;     // Left child
//    int right = 2 * i + 2;    // Right child
//
//    // If left child is larger than root
//    if (left < n && arr[left] > arr[largest])
//        largest = left;
//
//    // If right child is larger than largest so far
//    if (right < n && arr[right] > arr[largest])
//        largest = right;
//
//    // If largest is not root
//    if (largest != i) {
//        swap(arr[i], arr[largest]);  // Swap root with largest
//        heapify(arr, n, largest);    // Recursively heapify affected subtree
//    }
//}
//
//void heapSort(int arr[], int n) {
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
//
//int main() {
//    int arr[100], n;
//
//    cout << "Enter number of elements: ";
//    cin >> n;
//
//    cout << "Enter elements: ";
//    for (int i = 0; i < n; i++)
//        cin >> arr[i];
//
//    heapSort(arr, n);
//
//    cout << "Sorted array (ascending): ";
//    for (int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//
//    return 0;
//}
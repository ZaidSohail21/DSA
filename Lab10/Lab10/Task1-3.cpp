//#include <iostream>
//#include <string>
//using namespace std;
//
//// Task 1: Recursive Sum of Array Elements
//int recursiveSum(int arr[], int size) {
//    if (size == 0) return 0;
//    return arr[size - 1] + recursiveSum(arr, size - 1);
//}
//
//// Task 2: Palindrome Check
//bool isPalindrome(const string& str, int start, int end) {
//    if (start >= end) return true;
//    if (str[start] != str[end]) return false;
//    return isPalindrome(str, start + 1, end - 1);
//}
//
//// Task 3: Recursive Maximum Element
//int findMax(int arr[], int size) {
//    if (size == 1) return arr[0];
//    int maxOfRest = findMax(arr, size - 1);
//    return arr[size - 1] > maxOfRest ? arr[size - 1] : maxOfRest;
//}
//
//// Main function demonstrating tasks 1–3
//int main() {
//    // Task 1
//    int arr1[] = { 1, 2, 3, 4, 5 };
//    int size1 = 5;
//    cout << "Sum of array elements: " << recursiveSum(arr1, size1) << endl;
//
//    // Task 2
//    string str = "madam";
//    cout << "Is '" << str << "' a palindrome? "
//        << (isPalindrome(str, 0, str.length() - 1) ? "Yes" : "No") << endl;
//
//    // Task 3
//    int arr2[] = { 12, 5, 18, 7, 3 };
//    int size2 = 5;
//    cout << "Maximum element: " << findMax(arr2, size2) << endl;
//
//    return 0;
//}
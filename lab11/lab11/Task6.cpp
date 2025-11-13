#include <iostream>
using namespace std;

class MagicNumber {
private:
    int findMaxIndex(int arr[], int size) {
        if (size == 1) {
            return 0;
        }

        int maxIndexRest = findMaxIndex(arr, size - 1);
        if (arr[size - 1] > arr[maxIndexRest]) {
            return size - 1;
        }
        else {
            return maxIndexRest;
        }
    }

    bool isSubsetSum(int arr[], int n, int sum, int index) {
        if (sum == 0) {
            return true;
        }

        if (index >= n || sum < 0) {
            return false;
        }

        // Include current element
        if (isSubsetSum(arr, n, sum - arr[index], index + 1)) {
            return true;
        }

        // Exclude current element
        return isSubsetSum(arr, n, sum, index + 1);
    }

    int findMagic(int arr[], int size) {
        if (size <= 1) {
            return -1;
        }

        int maxIdx = findMaxIndex(arr, size);
        int maxNum = arr[maxIdx];

        // Build new array without maxNum
        int newArr[100];
        int j = 0;
        for (int i = 0; i < size; i++) {
            if (i != maxIdx) {
                newArr[j] = arr[i];
                j++;
            }
        }

        if (isSubsetSum(newArr, size - 1, maxNum, 0)) {
            return maxNum;
        }
        else {
            return findMagic(newArr, size - 1);
        }
    }

public:
    int findMagicNumber(int arr[], int size) {
        return findMagic(arr, size);
    }
};

int main() {
    MagicNumber magic;
    int arr[100], size;

    cout << "Enter number of elements: ";
    cin >> size;

    cout << "Enter only positive integers:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int result = magic.findMagicNumber(arr, size);

    if (result != -1) {
        cout << "Magic Number found: " << result << endl;
    }
    else {
        cout << "No Magic Number found in the sequence." << endl;
    }

    return 0;
}
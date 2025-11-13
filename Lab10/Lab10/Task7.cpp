
#include <iostream>
using namespace std;

class MagicNumberFinder {
public:
    int findMagicNumber(int arr[], int size) {
        if (size == 0) {
            return -1;
        }

        int maxIndex = findMaxIndex(arr, size, 0, 0);
        int maxNum = arr[maxIndex];

        int* remaining = new int[size - 1];
        int idx = 0;
        for (int i = 0; i < size; ++i) {
            if (i != maxIndex) {
                remaining[idx++] = arr[i];
            }
        }

        bool found = isSubsetSum(remaining, size - 1, maxNum);
        delete[] remaining;

        if (found) {
            return maxNum;
        }
        else {
            int* newArr = new int[size - 1];
            idx = 0;
            for (int i = 0; i < size; ++i) {
                if (i != maxIndex) {
                    newArr[idx++] = arr[i];
                }
            }
            int result = findMagicNumber(newArr, size - 1);
            delete[] newArr;
            return result;
        }
    }

private:
    int findMaxIndex(int arr[], int size, int index, int maxIndex) {
        if (index == size) {
            return maxIndex;
        }
        else if (arr[index] > arr[maxIndex]) {
            maxIndex = index;
        }
        return findMaxIndex(arr, size, index + 1, maxIndex);
    }

    bool isSubsetSum(int arr[], int n, int sum) {
        if (sum == 0) {
            return true;
        }
        else if (n == 0) {
            return false;
        }
        else if (arr[n - 1] > sum) {
            return isSubsetSum(arr, n - 1, sum);
        }
        else {
            return isSubsetSum(arr, n - 1, sum) || isSubsetSum(arr, n - 1, sum - arr[n - 1]);
        }
    }
};

int main() {
    

    // Task 7
    MagicNumberFinder magic;
    int magicArr[] = { 2, 3, 5, 8, 13 };
    int magicSize = 5;
    cout << "Magic Number: " << magic.findMagicNumber(magicArr, magicSize) << endl;

    return 0;
}
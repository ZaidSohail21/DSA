#include "List.h"
template<class T>
class MyArray :public Array<T> {


public:
	MyArray();
	MyArray(int m);
	MyArray(MyArray& m);
	//Task 3
	bool isPrime(int n);
	int sum_Prime();
	int secondMaxEven();
	int oddMaxEven();
	void printDuplicates();
};
//Constructors & Deconstructors
//template<class T>
//Custom_array<T>::Custom_array() :Array<T>() { }
//
//template <class T>
//Custom_array<T>::Custom_array(int m) : Array<T>(m) { }
//
//template<class T>
//Custom_array<T>::Custom_array(Custom_array& m) : Array(m.maxsize) {}

template<class T>
bool MyArray<T>::isPrime(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

template<class T>
int MyArray<T>::sum_Prime() {
	int sum = 0;
	for (int i = 0; i < currentsize; i++) {
		if (isPrime(arr[i])) {
			sum += arr[i];
		}
	}
	return sum;
}

template<class T>
int MyArray<T>::secondMaxEven() {

	int maxEven = -1; // Initialize to a value smaller than any possible even number
	int secondMaxEven = -1;

	for (int i = 0; i < currentsize; ++i) {
		if (arr[i] % 2 == 0) { // Check if the number is even
			if (arr[i] > maxEven) {
				secondMaxEven = maxEven;
				maxEven = arr[i];
			}
			else if (arr[i] > secondMaxEven && arr[i] != maxEven) {
				secondMaxEven = arr[i];
			}
		}
	}

	return secondMaxEven;
}

template<class T>
int Myarray<T>::oddMaxEven() {

	int maxodd = -1; // Initialize to a value smaller than any possible even number
	int secondMaxOdd = -1;

	for (int i = 0; i < currentsize; ++i) {
		if (arr[i] % 2 == 0) { // Check if the number is even
			if (arr[i] > maxodd) {
				secondMaxOdd = maxodd;
				maxodd = arr[i];
			}
			else if (arr[i] > secondMaxOdd && arr[i] != maxodd) {
				secondMaxOdd = arr[i];
			}
		}
	}

	return secondMaxOdd;
}

template<class T>
void Myarray<T>::printDuplicates() {
	for (int i = 0; i < currentsize; i++) {
		for (int j = 0; j < currentsize; j++) {
			if (arr[i] == arr[j]) {
				cout << arr[i] << " are Duplicated!" << endl;
			}
		}
	}
}


#include "List.h"
template<class T>
class MyArray:public Array<T> {
	

public:
	MyArray();
	MyArray(int m);
	MyArray(MyArray &m);
	//Task # 1
	void addStartValue(T a);
	void addEndValue(T a) ;
	void RemoveStartValue() ;
	void RemoveEndValue();
	void display();

	//Task # 2 
	bool isEmpty();
	bool isFull();
	int size();
	bool insertAt(int index, T value);
	int last();
	bool search(T a);
	//Task # 3
	bool isPrime(int n);
	int sum_Prime();
	int secondMaxEven();
	int SecondOddMax();
	void printDuplicates();
};
//Constructors & Deconstructors
template<class T>
MyArray<T>::MyArray():Array<T>(){ }

template <class T>
MyArray<T>::MyArray(int m) :Array<T>(m) { }

template<class T>
MyArray<T>::MyArray(MyArray& m):Array(m.maxsize){}

//Task_1 Functions 
template<class T>
void MyArray<T>::addEndValue(T a) {
	arr[currentsize] = a;
	currentsize++;
}

template<class T>
void MyArray<T>::addStartValue(T a) {
	
	for (int i = currentsize; i >0; i--) {
		arr[i] = arr[i-1];
	}
	arr[0] = a;
	currentsize++;
}

template<class T>
void MyArray<T>::RemoveEndValue() {
	currentsize--;
}
template<class T>
void MyArray<T>::RemoveStartValue() {
	for (int i = 0; i < currentsize; i++) {
		arr[i] = arr[i + 1];
	}
	currentsize--;
}

template<class T>
void MyArray<T>::display() {
	for (int i = 0; i < currentsize; i++) {
		cout << arr[i] << "  ";
	}
	cout << endl;
}

//task 2
template<class T>
bool MyArray<T>::isEmpty() {
	if (currentsize == 0) {
		return true;
	}
	else {
		return false;
	}
}

template<class T>
bool MyArray<T>::isFull() {
	if (currentsize == maxsize) {
		return true;
	}
	else {
		return false;
	}
}

template<class T>
int MyArray<T>::size() {
	return currentsize;
}

template<class T>
bool MyArray<T>::insertAt(int index, T value) {
	if (maxsize > index) {
		arr[index] = value;
		return true;
	}
	else {
		return false;
	}
}

template<class T>
int MyArray<T>::last() {
	return arr[currentsize];
}
template<class T>
bool MyArray<T>::search(T a) {
	for (int i = 0; i < currentsize; i++) {
		if (arr[i] == a) {
			return true;
		}
	}
	return false;
}

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

	for (int i = 0; i < currentsize; i++) {
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
int MyArray<T>::SecondOddMax() {

	int maxodd = -1; 
	int secondMaxOdd = -1;

	for (int i = 0; i < currentsize; i++) {
		if (arr[i] % 2 != 0) { 
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
void MyArray<T>::printDuplicates() {
	for (int i = 0; i < currentsize; i++) {
		for (int j = 0; j < currentsize; j++) {
			if (arr[i] == arr[j]) {
				cout << arr[i] << " are Duplicated!" << endl;
			}
		}
	}
}

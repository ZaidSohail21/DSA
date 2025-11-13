#include <iostream>
#include <string>
using namespace std;
template<class T>
class Array {
protected:
	T*arr;
	int currentsize=0;
	int maxsize;

public:
	Array();
	Array(int m);
	Array(Array &obj);
	virtual void addStartValue(int a) = 0;
	virtual void addEndValue(int a) = 0;
	virtual void RemoveStartValue() = 0;
	virtual void RemoveEndValue() = 0;
	virtual ~Array();
};
template<class T>
Array<T>::Array():maxsize(0),currentsize(0) { 
	arr = new T[maxsize];
}
template<class T>
Array<T>::Array(int m) :maxsize(m),currentsize(0) { 
	arr = new T[maxsize];
}
template<class T>
Array<T>::Array(Array& obj) {
	maxsize = obj.maxsize;
	currentsize = obj.currentsize;
}
template<class T>
Array<T>::~Array() {
	delete[] arr;
}
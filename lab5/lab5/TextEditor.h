#include <iostream>
using namespace std;

template <class T>
class Stack {
private:
    T* arr;
    int maxSize;
    int topIndex;

public:
    Stack(int size = 100) {
        maxSize = size;
        arr = new T[maxSize];
        topIndex = -1;
    }

    void push(const T& item) {
        if (topIndex < maxSize - 1) {
            arr[++topIndex] = item;
        }
        else {
            cout << "Stack Overflow!\n";
        }
    }

    T pop() {
        if (topIndex >= 0) {
            return arr[topIndex--];
        }
        else {
            cout << "Stack Underflow!\n";
            return T(); // Return default value
        }
    }

    T top() const {
        if (topIndex >= 0) {
            return arr[topIndex];
        }
        return T();
    }

    bool isEmpty() const {
        return topIndex == -1;
    }

    void clear() {
        topIndex = -1;
    }

    ~Stack() {
        delete[] arr;
    }
};
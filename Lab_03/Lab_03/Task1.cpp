#include "Mylist.h"


int main(){
	
    MyArray <int> a(10);
	a.addStartValue(1221);
	a.addEndValue(4);
	a.addEndValue(2);
	a.addStartValue(3);
	a.display();
	int c;
	do {
		cout << "Press 1 :if you wanted to know the cardinalety of array!" << endl;
		cout << "Press 2 :if you wanted to insert the value of your own index  array!" << endl;
		cout << "Press 3 :if you wanted to know the last index value!" << endl;
		cout << "Press 4 :if you wanted to search value in array!" << endl;
		cout << "Press 5 :if you wanted to sum_prime numbers!" << endl;
		cout << "Press 6 :if you wanted to search 2 max_even!" << endl;
		cout << "Press 7 :if you wanted to search 2 max_odd!" << endl;
		cout << "Press 8 :if you wanted to Print duplicates" << endl;
		cout << "Press 0 : for exit!" << endl;
		cout << "Enter your choice ";
		cin >> c;
		if (c == 1) {
			if (a.isEmpty()) {
				cout << "Arr is Empty!" << endl;
			}
			else if (a.isFull()) {
				cout << "Arr is Full!" << endl;
			}
			else {
				cout << "The size is : " << a.size() << endl;
			}
		}
		else if (c == 2) {
			int v, b;
			cout << "Enter Index Value :" << endl;
			cin >> v;
			cout << "Enter Value :" << endl;
			cin >> b;
			if (a.insertAt(v, b)) {
				cout << "value Inserted! " << endl;
			}
			else {
				cout << "Not inserted check max & current size of the array!" << endl;
			}
		}
		else if (c == 3) {
			cout << "Last Index Value : " << a.last() << endl;
		}
		else if (c == 4) {
			int i;
			cout << "Enter the value you wanted to search "<< endl;
			cin >> i;
			a.search(i);
		}
		else if (c == 5) {
			cout << "The sum of prime number are :" << a.sum_Prime() << endl;
		}
		else if (c == 6) {
			cout << "The secondMaxEven are :" << a.secondMaxEven() << endl;
		}
		else if (c == 7) {
			cout << "The SecondOddMax are :" << a.SecondOddMax() << endl;
		}
		else if (c == 8) {
			cout << "The Dupliactes are :" << endl;
			a.printDuplicates();
		}
		else if (c == 0) {
			break;
		}
		else {
			cout << "Enter a valid!" << endl;
		}

		

	} while (c != 0);
	cout << "hi" << endl;
	return 0;
}

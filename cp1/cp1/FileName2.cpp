#include <iostream>
#include <string>
using namespace std;
class employee {
	int max;
	int currentsize;
	string* name;
	int* id;
	int* salary;
public:
	employee() {
		max = 0;
		currentsize = 0;
		name = new string[max];
		salary = new int[max];
		id = new int[max];
	}
	employee(int a) {
		max = a;
		currentsize = 0;
		name = new string[max];
		id = new int[max];
		salary = new int[max];
	}
	void insert(int i, int sal, string n) {
		if (currentsize == max) {
			cout << "Array is Full! " << endl;
		}
		else {
			name[currentsize] = n;
			salary[currentsize] = sal;
			id[currentsize] = i;
			currentsize++;
		}
	}
	void display() {
		for (int i = 0; i < currentsize; i++) {
			cout << "Name :" << name[i] << endl;
			cout << "ID :" << id[i] << endl;
			cout << "Salary :" << salary[i] << endl;
		}
	}
	void sorting() {
		for (int i = 0; i < currentsize - 1; i++) {
			int min_index = i;
			for (int j = i + 1; j < currentsize; j++) {
				if (salary[j] < salary[min_index]) {
					min_index = j;
				}
			}
			//swapping
			int temp = salary[i];
			salary[i] = salary[min_index];
			salary[min_index] = temp;

			temp = id[i];
			id[i] = id[min_index];
			id[min_index] = temp;

			string temp1 = name[i];
			name[i] = name[min_index];
			name[min_index] = temp1;
		}
	}
	void Binary_Search(int val) {
		for (int i = 0; i < currentsize; i++) {
			int min_index = i;
			for (int j = 0; j < i - currentsize - 1; j++) {
				if (id[j] < id[j + 1]) {

					  int temp4 = id[j];
					  id[j] = id[j+1];
					  id[j+1] = temp4;
				}
			}

		}
		//Now Performing Binary  Seacrch
		int value = val;
		int low = 0;
		int high = currentsize - 1;
		int mid = 0;
		for (int i = 0; i < currentsize; i++) {
			mid = (low + high) / 2;
			if (id[mid] == value) {

				cout << "Employee Found" << endl;
				cout << "The Id is present in index :" << mid << endl;
				break;
			}
			else if (id[mid] < value) {
				low = mid + 1;
			}
			else{
				high = mid - 1;
			}
		}

	}
	~employee() {
		delete[] name;
		delete[]id;
		delete[]salary;
	}
};

int main() {

	employee e1(20);
	int a;

	do { 
      cout << "--------------------------------------------------"<<endl;
		cout << "Press 1: For Adding The Employee Data :" << endl;
		cout << "Press 2: For Sorting The Employee Salary :" << endl;
		cout << "Press 3: For Displaying The Employee Data :" << endl;

		cout << "Press 4: For Search The Employee :" << endl;
		cout << "Press 0: For Exit the program :" << endl;
		cin >> a;
      cout << "--------------------------------------------------"<<endl;
		if (a == 1) {
			int i, s;
			string n;
			cout << "Enter Employee Name :";
			cin >> n;
			cout << "Enter Employee ID : ";
			cin >> i;
			cout << "Enter Employee Salary :";
			cin >> s;
			e1.insert(i, s, n);
		}
		else if (a == 2) {
			e1.sorting();
			e1.display();
		}
		else if (a == 3) {
			e1.display();
		}
		else if (a == 4) {
			int i;
			cout << "Enter Employee ID You wanted to search :";
			cin >> i;
			e1.Binary_Search(i);


		}
		else if (a == 0) {
			cout << "Program Exiting! " << endl;
		}
	} while (a != 0);

	return 0;
}
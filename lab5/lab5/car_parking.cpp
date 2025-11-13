//#include "MyCarStack.h"
//
//int main() {
//	MyStack<int> parking(8);
//	int choice;
//	int carNumber;
//
//	do {
//		cout << "\n--- Parking Lot Menu ---\n";
//		cout << "1. Park a new car\n";
//		cout << "2. Remove a car by number\n";
//		cout << "3. View top parked car\n";
//		cout << "4. View total cars parked\n";
//		cout << "5. Display all parked cars\n";
//		cout << "6. Search for a car\n";
//		cout << "0. Exit\n";
//		cout << "Enter your choice: ";
//		cin >> choice;
//
//		if (choice == 1) {
//
//			cout << "Enter car number to park: ";
//			cin >> carNumber;
//			parking.push(carNumber);
//			
//		}
//		else if (choice == 2) {
//			cout << "Enter car number to remove: ";
//			cin >> carNumber;
//			parking.removeCar(carNumber);
//		}
//		else if (choice == 3) {
//			cout << "Top car: " << parking.top() << "\n";
//		}
//		else if (choice == 4) {
//			cout << "Total cars parked: " << parking.size() << "\n";
//		}
//		else if (choice == 5) {
//			parking.display();
//		}
//		else if (choice == 6) {
//			cout << "Enter car number to search: ";
//			cin >> carNumber;
//			if (parking.search(carNumber)) {
//				cout << "Car " << carNumber << " is in the parking lot.\n";
//			}
//			else {
//				cout << "Car " << carNumber << " not found.\n";
//			}
//			
//		}
//		else if (choice == 0) {
//			cout << "Exiting...\n";
//			break;
//		}
//		else {
//			cout << "Invalid choice.\n";
//		}
//		
//	} while (choice != 0);
//
//	return 0;
//}

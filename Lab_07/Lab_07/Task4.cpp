//#include "MyLL.h"
//
//int main() {
//	MyLL obj;
//	int a;
//	do {
//		cout << "Press 1:Add a new patient to the end of the queue" << endl;
//		cout << "Press 2:Remove a patient from the queue if they cancel" << endl;
//		cout << "Press 3:Display the current list of patients in order" << endl;
//		cout << "Press 4:Count how many patients are currently in the queue" << endl;
//		cout << "Press 0: For Exit" << endl;
//		cin >> a;
//		if (a == 1) {
//			int b;
//			cout << "enter b:";
//			cin >> b;
//			obj.InsertAtTail(b);
//		}
//		else if (a == 2) {
//			cout << "Delete Value :" << obj.DeleteAtHead() << endl;
//		}
//		else if (a == 3) {
//			obj.display();
//		}
//		else if (a == 4) {
//			cout << "Count :" <<obj.getter() <<endl;
//		}
//		else if (a == 0) {
//			cout << "Exiting Program" << endl;
//			break;
//		}
//		else {
//			cout << "Enter a valid Number" << endl;
//		}
//	} while (a != 0);
//
//	
//	return 0;
//}
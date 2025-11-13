//#include "MyLL.h"
//
//int main() {
//	MyLL obj;
//	int a;
//	do {
//		cout << "Press 1:Insert node at a specific position" << endl;
//		cout << "Press 2:Delete node at a specific position" << endl;
//		cout << "Press 3:Search for an element in the list" << endl;
//		cout << "Press 4:Count total number of nodes" << endl;
//		cout << "Press 5:Display" << endl;
//		cout << "Press 0: For Exit" << endl;
//		cin >> a;
//		if (a == 1) {
//			cout << "Positions Starting from 0 :" << endl;
//			int b;
//			cout << "Enter Value:";
//			cin >> b;
//			cout << "Enter Position:" << endl;
//			int hu;
//			cin >> hu;
//			obj.InsertAtPosition(b,hu);
//		}
//		else if (a == 2) {
//			cout << "Enter Position:" << endl;
//			int hu;
//			cin >> hu;
//			cout << "Delete Value :" << obj.DeleteAtPosition(hu) << endl;
//		}
//		else if (a == 3) {
//			int c;
//			cout << "enter Search value :";
//			cin >> c;
//			obj.search(c);
//		}
//		else if (a == 4) {
//			cout << "Count :" << obj.getter() << endl;
//		}
//		else if (a == 5) {
//			obj.display();
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
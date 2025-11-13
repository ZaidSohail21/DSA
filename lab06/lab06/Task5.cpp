//#include "MyQueue.h"
//#include <string>
//int main() {
//		Myqueue<string> q(10);
//		
//	int d;
//	do {
//		cout << "Press 1: Add new print jobs to the queue" << endl;
//		cout << "Press 2: Print the document from the front of the queue" << endl;
//		cout << "Press 3: Display the remaining print jobs in the queue" << endl;
//		cout << "Press 4:  Check the front document without printing it. " << endl;
//		cout << "Press 0: for exit" << endl;
//		cin >> d;
//		if (d == 1) {
//			cout << "Enter Document Name :";
//			string s;
//			cin >> s;
//			q.enqueue(s);
//		}
//		else if (d == 2) {
//
//			cout << "Removed value is :" << q.dequeue() << endl;
//
//		}
//		else if (d == 4) {
//
//			cout << "Front value is :" << q.peek() << endl;
//
//		}
//		else if (d == 3) {
//			q.display();
//		}
//	} while (d != 0);
//	
//	cout << "HI" << endl;
//	return 0;
//}

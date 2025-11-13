#include "muqueue.h"

int main() {
	int a = 1;
	Myqueue<int> q1(20);

	do {
		cout << "Press 1 : if you wanted to enqueue next passenger :" << endl;
		cout << "Press 2 : if you wanted to dequeue passenger :" << endl;
		cout << "Press 3 : if you wanted to display all passenger :" << endl;
		cout << "Press 4 : if you wanted to rear the passenger :" << endl;
		cout << "Press 5 : if you wanted to count the total passenger :" << endl;
		cout << "Press 0 : if you wanted to exit  the program:" << endl;
		cin >> a;
		if (a == 1) {
			cout << "Enter passenger name :";
			string name;
			cin >> name;
			cout << "Enter ID name :";
			int id;
			cin >> id;
			q1.enqueue(id,name);
		}
		else if (a == 2) {
			cout << "The dequeue person name is :" << q1.dequeue2() << endl;
			cout << "The dequeue person id is :" << q1.dequeue() << endl;
		}
		else if(a==3){
			q1.display();
		}
		else if (a == 4) {
			cout << "The next person ID is :" << q1.peek() << endl;
		}
		else if (a == 5) {
			int count = 0;
			Myqueue<int> q2(20);
			while (!q1.isEmpty()) {
				q2.enqueue(q1.dequeue(), q1.dequeue2());
				count++;
			}
			while (!q2.isEmpty()) {
				q1.enqueue(q2.dequeue(), q2.dequeue2());
			
			}
			cout << "Total no of passengers are :" << count << endl;
		}
		else if (a == 0) {
			cout << "Program exiting" << endl;
		}
	} while (a != 0);
	return 0;
}
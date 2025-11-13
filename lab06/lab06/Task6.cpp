//#include <iostream>
//#include <string>
//using namespace std;
//
//class MyQueue {
//private:
//    int* packageID;
//    string* address;
//    int* startTime;
//    int* endTime;
//    int front, rear, maxSize, cs;
//
//public:
//    MyQueue(int size) {
//        maxSize = size;
//        packageID = new int[maxSize];
//        address = new string[maxSize];
//        startTime = new int[maxSize];
//        endTime = new int[maxSize];
//        front = 0;
//        rear = 0;
//        cs = 0;
//    }
//
//    bool isFull() {
//        return cs == maxSize;
//    }
//
//    bool isEmpty() {
//        return cs == 0;
//    }
//
//    void enqueue(int id, string addr, int start, int end) {
//        if (isFull()) {
//            cout << "Queue is full!" << endl;
//            return;
//        }
//        packageID[rear] = id;
//        address[rear] = addr;
//        startTime[rear] = start;
//        endTime[rear] = end;
//        rear++;
//        cs++;
//    }
//
//    void dequeue() {
//        if (isEmpty()) {
//            cout << "Queue is empty!" << endl;
//            return;
//        }
//        for (int i = 0; i < cs - 1; i++) {
//            packageID[i] = packageID[i + 1];
//            address[i] = address[i + 1];
//            startTime[i] = startTime[i + 1];
//            endTime[i] = endTime[i + 1];
//        }
//        rear--;
//        cs--;
//    }
//
//    void display() {
//        if (isEmpty()) {
//            cout << "Queue is empty!" << endl;
//            return;
//        }
//        for (int i = 0; i < cs; i++) {
//            cout << "Package ID: " << packageID[i]
//                << ", Address: " << address[i]
//                << ", Time Window: [" << startTime[i]
//                << "-" << endTime[i] << "]" << endl;
//        }
//    }
//
//    void peek() {
//        if (isEmpty()) {
//            cout << "Queue is empty!" << endl;
//            return;
//        }
//        cout << "Next Package - ID: " << packageID[0]
//            << ", Address: " << address[0]
//            << ", Time Window: [" << startTime[0]
//            << "-" << endTime[0] << "]" << endl;
//    }
//
//    void timeToDeliver(int currentTime) {
//        while (!isEmpty()) {
//            if (currentTime >= startTime[0] && currentTime <= endTime[0]) {
//                cout << " Package ID " << packageID[0] << " delivered at time " << currentTime << ".\n";
//                dequeue();
//                break;
//            }
//            else {
//                cout << " Package ID " << packageID[0] << " expired! Skipping...\n";
//                dequeue();
//            }
//        }
//
//        if (isEmpty()) {
//            cout << " No more packages to deliver.\n";
//        }
//    }
//};
//int main() {
//    MyQueue deliveryQueue(10);
//    int choice;
//
//    do {
//        cout << "\n Package Delivery Menu:\n";
//        cout << "1. Add Package\n";
//        cout << "2. Deliver Package\n";
//        cout << "3. Display Packages\n";
//        cout << "4. Peek Next Package\n";
//        cout << "0. Exit\n";
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        if (choice == 1) {
//            int id, start, end;
//            string addr;
//            cout << "Enter Package ID: ";
//            cin >> id;
//            cin.ignore();
//            cout << "Enter Address: ";
//            getline(cin, addr);
//            cout << "Enter Start Time: ";
//            cin >> start;
//            cout << "Enter End Time: ";
//            cin >> end;
//            deliveryQueue.enqueue(id, addr, start, end);
//        }
//        else if (choice == 2) {
//            int currentTime;
//            cout << "Enter current time: ";
//            cin >> currentTime;
//            deliveryQueue.timeToDeliver(currentTime);
//        }
//        else if (choice == 3) {
//            deliveryQueue.display();
//        }
//        else if (choice == 4) {
//            deliveryQueue.peek();
//        }
//    } while (choice != 0);
//
//    cout << " Exiting Delivery System...\n";
//    return 0;
//}

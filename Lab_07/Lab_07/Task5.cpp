//#include <iostream>
//#include "MyLL.h"
//using namespace std;
//
//void showMenu() {
//    cout << "\n--- Library Reservation Menu ---" << endl;
//    cout << "1. Add student to reservation list" << endl;
//    cout << "2. Add urgent student (priority)" << endl;
//    cout << "3. Cancel a reservation" << endl;
//    cout << "4. Serve the next student (book returned)" << endl;
//    cout << "5. Update student priority" << endl;
//    cout << "6. Display reservation list" << endl;
//    cout << "7. Count students in reservation list" << endl;
//    cout << "8. Exit" << endl;
//    cout << "Enter your choice: ";
//}
//
//int main() {
//    MyLL book1Queue, book2Queue;
//    int choice, bookID, studentID;
//
//    while (true) {
//        showMenu();
//        cin >> choice;
//
//        if (choice == 8) {
//            cout << "Exiting the system." << endl;
//            break;
//        }
//
//        cout << "\nSelect Book (1 or 2): ";
//        cin >> bookID;
//
//        if (bookID != 1 && bookID != 2) {
//            cout << "Invalid book selection!" << endl;
//            continue;
//        }
//        if (bookID == 1) {
//            if (choice == 1) {
//                cout << "Enter student ID: ";
//                cin >> studentID;
//                book1Queue.InsertAtTail(studentID);
//            }
//            else if (choice == 2) {
//                cout << "Enter urgent student ID: ";
//                cin >> studentID;
//                book1Queue.InsertAtHead(studentID);
//            }
//            else if (choice == 3) {
//                cout << "Enter student ID to cancel: ";
//                cin >> studentID;
//                book1Queue.DeleteAtValue(studentID);
//            }
//            else if (choice == 4) {
//                book1Queue.DeleteAtHead();
//            }
//            else if (choice == 5) {
//                cout << "Enter student ID to prioritize: ";
//                cin >> studentID;
//                if (book1Queue.DeleteAtValue(studentID))
//                    book1Queue.InsertAtHead(studentID);
//            }
//            else if (choice == 6) {
//                book1Queue.display();
//            }
//            else if (choice == 7) {
//                cout << "Total students: " << book1Queue.getter() << endl;
//            }
//            else {
//                cout << "Invalid choice!" << endl;
//            }
//        }
//        else if (bookID == 2) {
//            if (choice == 1) {
//                cout << "Enter student ID: ";
//                cin >> studentID;
//                book2Queue.InsertAtTail(studentID);
//            }
//            else if (choice == 2) {
//                cout << "Enter urgent student ID: ";
//                cin >> studentID;
//                book2Queue.InsertAtHead(studentID);
//            }
//            else if (choice == 3) {
//                cout << "Enter student ID to cancel: ";
//                cin >> studentID;
//                book2Queue.DeleteAtValue(studentID);
//            }
//            else if (choice == 4) {
//                book2Queue.DeleteAtHead();
//            }
//            else if (choice == 5) {
//                cout << "Enter student ID to prioritize: ";
//                cin >> studentID;
//                if (book2Queue.DeleteAtValue(studentID))
//                    book2Queue.InsertAtHead(studentID);
//            }
//            else if (choice == 6) {
//                book2Queue.display();
//            }
//            else if (choice == 7) {
//                cout << "Total students: " << book2Queue.getter() << endl;
//            }
//            else {
//                cout << "Invalid choice!" << endl;
//            }
//        }
//    }
//
//    return 0;
//}

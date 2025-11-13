//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* next;
//    Node(int val) : data(val), next(nullptr) {}
//};
//
//class SinglyLinkedList {
//public:
//    Node* head;
//    SinglyLinkedList() : head(nullptr) {}
//
//    void insertAtBeginning(int val) {
//        head = insertAtBeginningRec(head, val);
//        printList();
//    }
//
//    void insertAtEnd(int val) {
//        head = insertAtEndRec(head, val);
//        printList();
//    }
//
//    void insertAtPosition(int val, int pos) {
//        head = insertAtPositionRec(head, val, pos);
//        printList();
//    }
//
//    void deleteByValue(int val) {
//        head = deleteByValueRec(head, val);
//        printList();
//    }
//
//    void deleteAtPosition(int pos) {
//        head = deleteAtPositionRec(head, pos);
//        printList();
//    }
//
//    int search(int val) {
//        return searchRec(head, val, 1);
//    }
//
//    void printList() {
//        printListRec(head);
//        cout << endl;
//    }
//
//private:
//    Node* insertAtBeginningRec(Node* node, int val) {
//        Node* newNode = new Node(val);
//        newNode->next = node;
//        return newNode;
//    }
//
//    Node* insertAtEndRec(Node* node, int val) {
//        if (!node) return new Node(val);
//        node->next = insertAtEndRec(node->next, val);
//        return node;
//    }
//
//    Node* insertAtPositionRec(Node* node, int val, int pos) {
//        if (pos == 1) return insertAtBeginningRec(node, val);
//        if (!node) return nullptr;
//        node->next = insertAtPositionRec(node->next, val, pos - 1);
//        return node;
//    }
//
//    Node* deleteByValueRec(Node* node, int val) {
//        if (!node) return nullptr;
//        if (node->data == val) {
//            Node* temp = node->next;
//            delete node;
//            return temp;
//        }
//        node->next = deleteByValueRec(node->next, val);
//        return node;
//    }
//
//    Node* deleteAtPositionRec(Node* node, int pos) {
//        if (!node) return nullptr;
//        if (pos == 1) {
//            Node* temp = node->next;
//            delete node;
//            return temp;
//        }
//        node->next = deleteAtPositionRec(node->next, pos - 1);
//        return node;
//    }
//
//    int searchRec(Node* node, int val, int index) {
//        if (!node) return -1;
//        if (node->data == val) return index;
//        return searchRec(node->next, val, index + 1);
//    }
//
//    void printListRec(Node* node) {
//        if (!node) return;
//        cout << node->data << " ";
//        printListRec(node->next);
//    }
//};
//
//int main() {
//    SinglyLinkedList list;
//
//    // Inserting elements
//    list.insertAtBeginning(10);
//    list.insertAtEnd(20);
//    list.insertAtEnd(30);
//    list.insertAtPosition(25, 3); // Insert 25 at position 3
//
//    // Deleting elements
//    list.deleteByValue(20);
//    list.deleteAtPosition(2); // Deletes 25
//
//    // Searching
//    int pos = list.search(30);
//    if (pos != -1)
//        cout << "30 found at position: " << pos << endl;
//    else
//        cout << "30 not found in the list." << endl;
//
//    return 0;
//}

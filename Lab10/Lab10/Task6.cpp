//#include <iostream>
//using namespace std;
//
//class DNode {
//public:
//    int data;
//    DNode* prev;
//    DNode* next;
//    DNode(int val) : data(val), prev(nullptr), next(nullptr) {}
//};
//class DoublyLinkedList {
//public:
//    DNode* head;
//    DNode* tail;
//
//    DoublyLinkedList() : head(nullptr), tail(nullptr) {}
//
//    void insertAtBeginning(int val) {
//        DNode* newNode = new DNode(val);
//        insertAtBeginningRec(head, newNode);
//        if (!tail) tail = newNode;
//    }
//
//    void insertAtEnd(int val) {
//        DNode* newNode = new DNode(val);
//        insertAtEndRec(head, newNode);
//        if (!tail) tail = newNode;
//    }
//
//    void insertAtPosition(int val, int pos) {
//        head = insertAtPositionRec(head, nullptr, new DNode(val), pos);
//    }
//
//    void deleteByValue(int val) {
//        head = deleteByValueRec(head, val);
//    }
//
//    void deleteAtPosition(int pos) {
//        head = deleteAtPositionRec(head, pos);
//    }
//
//    int search(int val) {
//        return searchRec(head, val, 1);
//    }
//
//    void printForward() {
//        printForwardRec(head);
//        cout << endl;
//    }
//
//    void printReverse() {
//        printReverseRec(tail);
//        cout << endl;
//    }
//
//    bool isPalindrome() {
//        return isPalindromeRec(head, tail);
//    }
//
//private:
//    void insertAtBeginningRec(DNode*& node, DNode* newNode) {
//        if (!node) {
//            node = newNode;
//            return;
//        }
//        newNode->next = node;
//        node->prev = newNode;
//        node = newNode;
//    }
//
//    void insertAtEndRec(DNode*& node, DNode* newNode) {
//        if (!node) {
//            node = newNode;
//            tail = newNode;
//            return;
//        }
//        if (!node->next) {
//            node->next = newNode;
//            newNode->prev = node;
//            tail = newNode;
//            return;
//        }
//        insertAtEndRec(node->next, newNode);
//    }
//
//    DNode* insertAtPositionRec(DNode* node, DNode* prev, DNode* newNode, int pos) {
//        if (pos == 1) {
//            newNode->next = node;
//            newNode->prev = prev;
//            if (node) node->prev = newNode;
//            return newNode;
//        }
//        if (!node) return nullptr;
//        node->next = insertAtPositionRec(node->next, node, newNode, pos - 1);
//        return node;
//    }
//
//    DNode* deleteByValueRec(DNode* node, int val) {
//        if (!node) return nullptr;
//        if (node->data == val) {
//            DNode* next = node->next;
//            if (next) next->prev = node->prev;
//            if (node->prev) node->prev->next = next;
//            else head = next;
//            if (tail == node) tail = node->prev;
//            delete node;
//            return next;
//        }
//        node->next = deleteByValueRec(node->next, val);
//        return node;
//    }
//
//    DNode* deleteAtPositionRec(DNode* node, int pos) {
//        if (!node) return nullptr;
//        if (pos == 1) {
//            DNode* next = node->next;
//            if (next) next->prev = node->prev;
//            if (node->prev) node->prev->next = next;
//            else head = next;
//            if (tail == node) tail = node->prev;
//            delete node;
//            return next;
//        }
//        node->next = deleteAtPositionRec(node->next, pos - 1);
//        return node;
//    }
//
//    int searchRec(DNode* node, int val, int pos) {
//        if (!node) return -1;
//        if (node->data == val) return pos;
//        return searchRec(node->next, val, pos + 1);
//    }
//
//    void printForwardRec(DNode* node) {
//        if (!node) return;
//        cout << node->data << " ";
//        printForwardRec(node->next);
//    }
//
//    void printReverseRec(DNode* node) {
//        if (!node) return;
//        cout << node->data << " ";
//        printReverseRec(node->prev);
//    }
//
//    bool isPalindromeRec(DNode* left, DNode* right) {
//        if (!left || !right || left == right || left->prev == right) return true;
//        if (left->data != right->data) return false;
//        return isPalindromeRec(left->next, right->prev);
//    }
//};
//int main() {
//    DoublyLinkedList dll;
//    dll.insertAtBeginning(3);
//    dll.insertAtBeginning(2);
//    dll.insertAtEnd(4);
//    dll.insertAtPosition(1, 1); // Insert 1 at position 1
//    dll.printForward();
//    dll.printReverse();
//
//    dll.deleteByValue(3);
//    dll.deleteAtPosition(2);
//    dll.printForward();
//
//    cout << "Search 4: Position " << dll.search(4) << endl;
//    cout << "Is DLL a palindrome? " << (dll.isPalindrome() ? "Yes" : "No") << endl;
//
//    return 0;
//}
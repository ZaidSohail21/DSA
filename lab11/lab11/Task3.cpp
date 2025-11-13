//#include <iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    Node* leftChild;
//    Node* rightChild;
//};
//
//class BST {
//private:
//    Node* root;
//
//    Node* insert(Node* node, int value) {
//        if (node == nullptr) {
//            return new Node{ value, nullptr, nullptr };
//        }
//
//        if (value < node->data) {
//            node->leftChild = insert(node->leftChild, value);
//        }
//        else {
//            node->rightChild = insert(node->rightChild, value);
//        }
//
//        return node;
//    }
//
//    bool search(Node* node, int value) {
//        if (node == nullptr) {
//            return false;
//        }
//
//        if (value == node->data) {
//            return true;
//        }
//        else if (value < node->data) {
//            return search(node->leftChild, value);
//        }
//        else {
//            return search(node->rightChild, value);
//        }
//    }
//
//public:
//    BST() {
//        root = nullptr;
//    }
//
//    void insert(int value) {
//        root = insert(root, value);
//    }
//
//    bool searchValue(int value) {
//        return search(root, value);
//    }
//};
//
//int main() {
//    BST tree;
//    tree.insert(10);
//    tree.insert(5);
//    tree.insert(20);
//    tree.insert(15);
//    tree.insert(25);
//
//    int target;
//    cout << "Enter value to search: ";
//    cin >> target;
//
//    if (tree.searchValue(target)) {
//        cout << "Value Found\n";
//    }
//    else {
//        cout << "Value Not Found\n";
//    }
//
//    return 0;
//}
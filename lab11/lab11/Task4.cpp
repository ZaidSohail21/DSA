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
//    int findMin(Node* node) {
//        if (node->leftChild == nullptr) {
//            return node->data;
//        }
//        else {
//            return findMin(node->leftChild);
//        }
//    }
//
//    int findMax(Node* node) {
//        if (node->rightChild == nullptr) {
//            return node->data;
//        }
//        else {
//            return findMax(node->rightChild);
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
//    int getMin() {
//        return findMin(root);
//    }
//
//    int getMax() {
//        return findMax(root);
//    }
//};
//
//int main() {
//    BST tree;
//    tree.insert(50);
//    tree.insert(20);
//    tree.insert(80);
//    tree.insert(10);
//    tree.insert(90);
//
//    cout << "Minimum: " << tree.getMin() << endl;
//    cout << "Maximum: " << tree.getMax() << endl;
//
//    return 0;
//}
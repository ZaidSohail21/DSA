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
//    Node* insertRecursive(Node* node, int value) {
//        if (node == nullptr) {
//            return new Node{ value, nullptr, nullptr };
//        }
//
//        if (value < node->data) {
//            node->leftChild = insertRecursive(node->leftChild, value);
//        }
//        else {
//            node->rightChild = insertRecursive(node->rightChild, value);
//        }
//
//        return node;
//    }
//
//    void inorder(Node* node) {
//        if (node != nullptr) {
//            inorder(node->leftChild);
//            cout << node->data << " ";
//            inorder(node->rightChild);
//        }
//    }
//
//public:
//    BST() {
//        root = nullptr;
//    }
//
//    void insert(int value) {
//        root = insertRecursive(root, value);
//    }
//
//    void displayInorder() {
//        cout << "Inorder Traversal : ";
//        inorder(root);
//        cout << endl;
//    }
//};
//
//int main() {
//    BST tree;
//    tree.insert(40);
//    tree.insert(20);
//    tree.insert(60);
//    tree.insert(10);
//    tree.insert(30);
//    tree.insert(50);
//    tree.insert(70);
//
//    tree.displayInorder();
//    return 0;
//}
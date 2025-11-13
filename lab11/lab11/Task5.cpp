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
//    void inorder(Node* node) {
//        if (node != nullptr) {
//            inorder(node->leftChild);
//            cout << node->data << " ";
//            inorder(node->rightChild);
//        }
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
//    Node* deleteNode(Node* node, int value) {
//        if (node == nullptr) {
//            return nullptr;
//        }
//
//        if (value < node->data) {
//            node->leftChild = deleteNode(node->leftChild, value);
//        }
//        else if (value > node->data) {
//            node->rightChild = deleteNode(node->rightChild, value);
//        }
//        else {
//            if (node->leftChild == nullptr) {
//                Node* temp = node->rightChild;
//                delete node;
//                return temp;
//            }
//            else if (node->rightChild == nullptr) {
//                Node* temp = node->leftChild;
//                delete node;
//                return temp;
//            }
//
//            int minRight = findMin(node->rightChild);
//            node->data = minRight;
//            node->rightChild = deleteNode(node->rightChild, minRight);
//        }
//
//        return node;
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
//    void remove(int value) {
//        root = deleteNode(root, value);
//    }
//
//    void showInorder() {
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
//
//    cout << "Original Inorder: ";
//    tree.showInorder();
//
//    int val;
//    cout << "Enter value to delete: ";
//    cin >> val;
//    tree.remove(val);
//
//    cout << "After Deletion Inorder: ";
//    tree.showInorder();
//
//    return 0;
//}
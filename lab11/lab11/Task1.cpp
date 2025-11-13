//#include <iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    Node* leftChild;
//    Node* rightChild;
//};
//
//class ManualTree {
//private:
//    Node* root;
//
//    void inorder(Node* node) {
//        if (node != nullptr) {
//            inorder(node->leftChild);
//            cout << node->data << " ";
//            inorder(node->rightChild);
//        }
//    }
//
//    void preorder(Node* node) {
//        if (node != nullptr) {
//            cout << node->data << " ";
//            preorder(node->leftChild);
//            preorder(node->rightChild);
//        }
//    }
//
//    void postorder(Node* node) {
//        if (node != nullptr) {
//            postorder(node->leftChild);
//            postorder(node->rightChild);
//            cout << node->data << " ";
//        }
//    }
//
//public:
//    ManualTree() {
//        root = nullptr;
//    }
//
//    Node* buildSampleTree() {
//        root = new Node{ 1, nullptr, nullptr };
//        root->leftChild = new Node{ 2, nullptr, nullptr };
//        root->rightChild = new Node{ 3, nullptr, nullptr };
//        root->leftChild->leftChild = new Node{ 4, nullptr, nullptr };
//        root->rightChild->rightChild = new Node{ 5, nullptr, nullptr };
//        return root;
//    }
//
//    void displayTraversals(Node* root) {
//        cout << "Inorder Traversal: ";
//        inorder(root);
//        cout << "\nPreorder Traversal: ";
//        preorder(root);
//        cout << "\nPostorder Traversal: ";
//        postorder(root);
//        cout << endl;
//    }
//};
//
//int main() {
//    ManualTree tree;
//    Node* root = tree.buildSampleTree();
//    tree.displayTraversals(root);
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* left, * right;
//    Node(int val) {
//        data = val;
//        left = right = nullptr;
//    }
//};
//
//class BST {
//public:
//    Node* insert(Node* root, int val) {
//        if (root == nullptr) return new Node(val);
//        if (val < root->data)
//            root->left = insert(root->left, val);
//        else
//            root->right = insert(root->right, val);
//        return root;
//    }
//
//    Node* findMin(Node* root) {
//        while (root->left != nullptr)
//            root = root->left;
//        return root;
//    }
//
//    Node* deleteNode(Node* root, int val) {
//        if (root == nullptr) return nullptr;
//        if (val < root->data)
//            root->left = deleteNode(root->left, val);
//        else if (val > root->data)
//            root->right = deleteNode(root->right, val);
//        else {
//            if (root->left == nullptr) return root->right;
//            else if (root->right == nullptr) return root->left;
//            Node* temp = findMin(root->right);
//            root->data = temp->data;
//            root->right = deleteNode(root->right, temp->data);
//        }
//        return root;
//    }
//
//    void inOrder(Node* root) {
//        if (root == nullptr) return;
//        inOrder(root->left);
//        cout << root->data << " ";
//        inOrder(root->right);
//    }
//};
//
//int main() {
//    BST tree;
//    Node* root = nullptr;
//    int elements[] = { 50, 30, 70, 20, 40, 60, 80 };
//    for (int val : elements)
//        root = tree.insert(root, val);
//
//    cout << "In-order after insertion: ";
//    tree.inOrder(root);
//    cout << endl;
//
//    root = tree.deleteNode(root, 70);
//
//    cout << "In-order after deletion: ";
//    tree.inOrder(root);
//    cout << endl;
//
//    return 0;
//}

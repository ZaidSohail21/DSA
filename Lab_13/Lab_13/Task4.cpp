//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int key, height;
//    Node* left, * right;
//    Node(int k) {
//        key = k;
//        height = 1;
//        left = right = nullptr;
//    }
//};
//
//int height(Node* n) {
//    return n ? n->height : 0;
//}
//
//int balanceFactor(Node* n) {
//    return n ? height(n->left) - height(n->right) : 0;
//}
//
//int max(int a, int b) {
//    return (a > b) ? a : b;
//}
//
//Node* rightRotate(Node* y) {
//    Node* x = y->left;
//    Node* T2 = x->right;
//    x->right = y;
//    y->left = T2;
//    y->height = max(height(y->left), height(y->right)) + 1;
//    x->height = max(height(x->left), height(x->right)) + 1;
//    return x;
//}
//
//Node* leftRotate(Node* x) {
//    Node* y = x->right;
//    Node* T2 = y->left;
//    y->left = x;
//    x->right = T2;
//    x->height = max(height(x->left), height(x->right)) + 1;
//    y->height = max(height(y->left), height(y->right)) + 1;
//    return y;
//}
//
//Node* insert(Node* node, int key) {
//    if (!node) return new Node(key);
//
//    if (key < node->key)
//        node->left = insert(node->left, key);
//    else if (key > node->key)
//        node->right = insert(node->right, key);
//    else
//        return node;
//
//    node->height = 1 + max(height(node->left), height(node->right));
//
//    int bf = balanceFactor(node);
//
//    // LL
//    if (bf > 1 && key < node->left->key)
//        return rightRotate(node);
//
//    // RR
//    if (bf < -1 && key > node->right->key)
//        return leftRotate(node);
//
//    // LR
//    if (bf > 1 && key > node->left->key) {
//        node->left = leftRotate(node->left);
//        return rightRotate(node);
//    }
//
//    // RL
//    if (bf < -1 && key < node->right->key) {
//        node->right = rightRotate(node->right);
//        return leftRotate(node);
//    }
//
//    return node;
//}
//
//void inOrder(Node* root) {
//    if (!root) return;
//    inOrder(root->left);
//    cout << root->key << " ";
//    inOrder(root->right);
//}
//
//int main() {
//    Node* root = nullptr;
//    int arr[] = { 30, 20, 40, 10, 25, 35, 50, 5 };
//    for (int val : arr)
//        root = insert(root, val);
//
//    cout << "In-order traversal of AVL Tree: ";
//    inOrder(root);
//    cout << endl;
//    return 0;
//}

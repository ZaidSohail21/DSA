//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int key, height;
//    Node* left, * right;
//
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
//int getBalance(Node* n) {
//    return n ? height(n->left) - height(n->right) : 0;
//}
//
//int max(int a, int b) {
//    return (a > b) ? a : b;
//}
//
//Node* rightRotate(Node* y) {
//    cout << "Performing Right Rotation (LL case) on node: " << y->key << endl;
//    Node* x = y->left;
//    Node* T2 = x->right;
//
//    x->right = y;
//    y->left = T2;
//
//    y->height = max(height(y->left), height(y->right)) + 1;
//    x->height = max(height(x->left), height(x->right)) + 1;
//
//    return x;
//}
//
//Node* leftRotate(Node* x) {
//    cout << "Performing Left Rotation (RR case) on node: " << x->key << endl;
//    Node* y = x->right;
//    Node* T2 = y->left;
//
//    y->left = x;
//    x->right = T2;
//
//    x->height = max(height(x->left), height(x->right)) + 1;
//    y->height = max(height(y->left), height(y->right)) + 1;
//
//    return y;
//}
//
//Node* insert(Node* node, int key) {
//    if (!node) {
//        cout << "Inserting " << key << endl;
//        return new Node(key);
//    }
//
//    if (key < node->key)
//        node->left = insert(node->left, key);
//    else if (key > node->key)
//        node->right = insert(node->right, key);
//    else
//        return node;
//
//    node->height = 1 + max(height(node->left), height(node->right));
//    int balance = getBalance(node);
//
//    if (balance > 1 && key < node->left->key)
//        return rightRotate(node);
//    if (balance < -1 && key > node->right->key)
//        return leftRotate(node);
//    if (balance > 1 && key > node->left->key) {
//        cout << "Performing Left-Right Rotation (LR case) on node: " << node->key << endl;
//        node->left = leftRotate(node->left);
//        return rightRotate(node);
//    }
//    if (balance < -1 && key < node->right->key) {
//        cout << "Performing Right-Left Rotation (RL case) on node: " << node->key << endl;
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
//void printTree(Node* root, string indent = "", bool last = true) {
//    if (root) {
//        cout << indent;
//        if (last) {
//            cout << "??";
//            indent += "  ";
//        }
//        else {
//            cout << "??";
//            indent += "| ";
//        }
//        cout << root->key << endl;
//        printTree(root->left, indent, false);
//        printTree(root->right, indent, true);
//    }
//}
//
//int main() {
//    Node* root = nullptr;
//    int sequence[] = { 10, 20, 30 };
//    int n = sizeof(sequence) / sizeof(sequence[0]);
//
//    for (int i = 0; i < n; ++i) {
//        root = insert(root, sequence[i]);
//        cout << "AVL Tree after inserting " << sequence[i] << ":\n";
//        printTree(root);
//        cout << "-------------------------\n";
//    }
//
//    cout << "Final In-order Traversal: ";
//    inOrder(root);
//    cout << endl;
//
//    return 0;
//}

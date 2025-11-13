#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* left;
	Node* right;
};
class LL {
protected:
	Node* root;
public:
	LL() {
		root = nullptr;
	}
	virtual void insert(int) = 0;
	virtual void inorder() = 0;
};
class myLL :public LL {
public:
	myLL():LL(){ }
	void insert(int a) {
		Node* nn;
		nn->data = a;
		nn->left = nullptr;
		nn->right = nullptr;
		if (root == nullptr) {
			root = nn;
		}
		else {
			Node* t = root;
			while (1) {
				if (t->data > a) {
					if (t->left == nullptr) {
						t->left = nn;
					}
					else {
						t = t->left;
					}
				}
				else {
					if (t->right == nullptr) {
						t->right = nn;
					}
					else {
						t = t->right;
					}
				}
			}
		}
	}
	void inorder() {
		
		while (1) {
			Node* t = root;
			if (t->left != nullptr) {
				t = t->left;
				if (t->left == nullptr) {
					cout << t->data << "  ";
				}
			}
			else {
				if (t->right != nullptr) {
					t = t->right;
					if (t->left == nullptr) {
						cout << t->data << "  ";
					}
				}
			}
		}
	}

};
int main() {
	cout << "Heelo  world " << endl;
	return 0;
}
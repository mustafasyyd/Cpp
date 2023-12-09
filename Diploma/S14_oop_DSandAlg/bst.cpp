// C++ program to demonstrate insertion
// in a Binary Search Tree recursively.
#include <iostream>
using namespace std;



class BinSearchTree
{

};

class BST {


public:
	// Default constructor.
	BST();

	// Parameterized constructor.
	BST(int);

	// Insert function.
	BST* Insert(BST*, int);

	// Inorder traversal.
	void Inorder(BST*);

    //search
    BST* search(BST* root, int key);

    int data;
	BST *left, *right; // pointer to implementation pimpl idiom

};

// Default Constructor definition.
BST ::BST()
	: data(0)
	, left(NULL)
	, right(NULL)
{
}

// Parameterized Constructor definition.
BST ::BST(int value)
{
	data = value;
	left = right = NULL;
}

// Insert function definition.
BST* BST ::Insert(BST* root, int value)
{
	if (!root) {
		return new BST(value);
	}

	if (value > root->data) {
		root->right = Insert(root->right, value);
	}
	else {
		root->left = Insert(root->left, value);
	}

	return root;
}
BST* BST::search(BST* root, int key)
{
    if (root == NULL || root->data == key)
       return root;
    
    if (root->data < key)
       return search(root->right, key);
 
    return search(root->left, key);
}
void BST ::Inorder(BST* root)
{
	if (!root) {
		return;
	}
	Inorder(root->left);
	cout << root->data << endl;
	Inorder(root->right);
}

int main()
{
	BST b, *root = NULL;

	root = b.Insert(root, 50);
	b.Insert(root, 30);
	b.Insert(root, 20);
	b.Insert(root, 40);
	b.Insert(root, 70);
	b.Insert(root, 60);
	b.Insert(root, 80);
    BST* keyChild = b.search(root,80);
    if(keyChild->data == 80)
         cout <<"found matched key";
	return 0;
}

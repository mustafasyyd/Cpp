// C++ program to demonstrate insertion
// in a Binary Search Tree recursively.
#include <iostream>
#include "BinSearchTree.h"

using namespace std;



int main()
{
	BST_DS::BinSearchTree<int32_t> bst , *root = NULL ;

	root = bst.InsertVlaue(root ,20);
	
	bst.InsertVlaue(root , 20);
	
	bst.InsertVlaue(root , 30);
	bst.InsertVlaue(root , 40);
	bst.InsertVlaue(root , 10);
	bst.InsertVlaue(root , 5);

	int32_t val = bst.getValue ( bst.SearchVlaue (root , 40) );
	cout<< val <<endl;


	return 0;
}

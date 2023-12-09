// C++ program to demonstrate insertion
// in a Binary Search Tree recursively.
#include <iostream>
using namespace std;

namespace BST_DS
{
	template <class T>
	class BinSearchTree
	{
		public:
			BinSearchTree()	
				: data(0.0) 
				, lbranch(NULL) 
				, rbranch(NULL)			{}

				BinSearchTree( T value )	
				: data(value) 
				, lbranch(NULL) 
				, rbranch(NULL)			{}

			BinSearchTree* InsertVlaue ( BinSearchTree* root , T value)
			{
				if( !root )	
					return new BinSearchTree(value);
	
				if( value > root->data)	
					root->rbranch = InsertVlaue ( root->rbranch , value );

				else
					root->lbranch = InsertVlaue ( root->lbranch , value );

				return root;
			}
			
			BinSearchTree* SearchVlaue ( BinSearchTree* root , T To_Find)
			{
				if (root == NULL || root->data == To_Find)	
					return root;
    
    			if (To_Find > root->data )
       				return SearchVlaue(root->rbranch, To_Find);

    			return SearchVlaue(root->lbranch, To_Find);
			}
			
			void Check_Inorderity( BinSearchTree* root)
			{
				if (!root)	return;
				
				Inorder( root->lbranch );
				cout<< root->data <<endl;
				Inorder( root->rbranch );
			}

			T getValue (BinSearchTree* found)      
			{	return found->data; 	}

		private:
			T data;
			BinSearchTree *lbranch , *rbranch;	
	};
}

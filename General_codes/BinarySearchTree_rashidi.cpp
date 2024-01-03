#include <iostream>

  class BST
  {
      public :
      BST() : data(0) , right(NULL) , left(NULL)
      {}//;

      BST(int value) : data(value) , right(NULL) , left(NULL)
      {}//;
    
      BST* Insert(BST* root,int value)
      {
        if (!root)
        {
          return new BST(value) ;
        }

        if (value > root->data)
        {
          root->right = Insert(root->right,value);
        }

        if (value < root->data)
        {
          root->left = Insert(root->left,value);
        }
  
        return root ; 
      }//;


      BST* Search(BST* root ,int key)
      {
        if (root == NULL || root->data == key )
        {
            return root ;
        }//;

        if (key > root->data )
        {
            return Search(root->right,key);
        }//;
    
        return Search(root->left, key);
        
        /*if (key < root->data)
        {
          return  Search(root->left,key);
        }//;*/
        //return root;
     
      }//;
    
      ~BST() 
      {
        delete right ;
        delete left ; 
      }//;

      int data ; 
      BST* right ;
      BST* left ; 
  };


void MakeSure(BST* MakeSureptr, int num)
{
    if (MakeSureptr->data == num )
    {
      std::cout << " found matched key ";
    }
    else 
    {
      std::cout<< "not found matched key ";
    }
}//;

 int main ()
 {
    BST A  , *root = NULL; 
    int key ; 
     
    root = A.Insert(root , 50);
    A.Insert(root , 60);
    A.Insert(root , 80);
    A.Insert(root , 40);
    A.Insert(root , 90);
    A.Insert(root , 100);

     
    BST* searchptr = A.Search(root , 55);
    
    MakeSure(searchptr,55);
  


    return 0 ;
 }

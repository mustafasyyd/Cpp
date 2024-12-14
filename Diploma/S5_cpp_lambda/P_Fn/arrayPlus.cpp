#include <iostream>
#include "arrayPlus.h"

int Get_size()
{
    int size;
    std::cin>> size;
    return size;
}
void Get_array( int a[],int &size)
{
    //ptr_Get_size() pointer to function, then calling fn. through pointer
    // for (int i = 0; i < ptr_Get_size(); i++)
    for (int i = 0; i < size ; i++)      
    {                                                    
        std::cin >> a[i];      
    }
}

void Print_array(const int *a, int &size)
{
    std::cout<< "Array:[ ";
    for ( int i = 0; i<size ; i++)
    {
        std::cout<< a[i] << " ";
    }
    std::cout<< "]"<< std::endl;
}

/**
 * 
 * void myFunction(int* arr, int size) {
       // Access array elements using arr[i]
   }

   // Usage:
   int myArray[] = {1, 2, 3, 4, 5};
   int size = sizeof(myArray) / sizeof(myArray[0]);
   myFunction(myArray, size);

 * 
*/


/**
 * 
 *void myFunction(int (&arr)[5]) {
       // Access array elements using arr[i]
   }
   // Usage:
   int myArray[] = {1, 2, 3, 4, 5};
   myFunction(myArray);

 * 
*/
#include <iostream>
/*
 * 
 * 
 * @file ptr_ref.cpp
 * @Author: mustafa.syyd
*/

int Get_size(){
    int size;
    std::cin>> size;
    return size;

}

void Get_array(int a[], int (*ptr_Get_size)()){
    for ( int i = 0; i < ptr_Get_size(); i++)     //ptr_Get_size() pointer to function, 
    {                                           //then calling fn. through pointer 
        std::cin>> a[i];        
    }
}

void  Print_array(const int *a,int (*ptr_Get_size)()){
    std::cout<< "Array:[ ";
    for ( int i = 0; i < ptr_Get_size(); i++){
        std::cout<< a[i] << " ";
    }
    std::cout<< "]"<< std::endl;
}

int main(){

    int (*fn_ptr)() = &Get_size;
    int size = fn_ptr();

    int a[size];

    Get_array(a, &Get_size);
    Print_array(a, &Get_size);
    

    return 0;
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
 * 
 *void myFunction(int (&arr)[5]) {
       // Access array elements using arr[i]
   }

   // Usage:
   int myArray[] = {1, 2, 3, 4, 5};
   myFunction(myArray);

 * 
*/
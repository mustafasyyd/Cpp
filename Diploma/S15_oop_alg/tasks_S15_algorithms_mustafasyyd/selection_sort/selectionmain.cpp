//selection sort implimentation

#include <iostream>
#include <vector>
#include "selectionsort.h"

using namespace std;

// Driver program to test above functions 
int main() 
{ 
    vector<int> arr = {64, 25, 12, 22, 11}; 
   
    selectionSort(arr); 
    
    cout << "Sorted array: \n"; 
    printArray(arr); 
    
    return 0; 
}
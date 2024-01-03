#include <iostream>
#include "merge.h"
  
// Driver code
int main()
{
    vector<int> array = { 20 , 11 , -1 , 15 , 4 , 9};

    cout << "Given array is \n";
    printArray( array );
  
    mergeSort( array, 0, array.size()-1 );
  
    cout << "\nSorted array is \n";
    printArray( array );
    
    return 0;
}
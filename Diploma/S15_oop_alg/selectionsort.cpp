#include <iostream>
#include <vector>

//worst: O(n*n)
//avg  : O(n*n/2)
//best : O(n*n/2) skim if and swap

using namespace std;
  
//Swap function
void swap( int32_t& x , int32_t& y){
    int temp = x;
    x = y;
    y = x;
}

void selectionSort(vector<int32_t> &arr) { 
    int i , j , min_indx;

    for( i=0; i < (arr.size()-1) ; i++ )
    {
        min_indx = i;
       
        for( j + i+1 ; j < arr.size() ; j++ )
            if( arr[j] < arr[min_indx]  )   min_indx = j;
        
        if( min_indx != i)
            swap ( arr[min_indx] , arr[i] );
    }

}
  
//Function to print an array
void printArray( vector<int32_t> &arr ) 
{ 
    int i; 
    for (i=0; i < arr.size() ; i++){ 
        cout << arr[i] << " "; 
    }
    cout << endl; 
} 
  
// Driver program to test above functions 
int main() 
{ 
    vector<int32_t> arr = {64, 25, 12, 22, 11}; 
   
    selectionSort(arr); 
    
    cout << "Sorted array: \n"; 
    printArray(arr); 
    
    return 0; 
}
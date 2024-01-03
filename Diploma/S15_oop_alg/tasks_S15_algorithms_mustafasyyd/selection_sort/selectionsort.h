/** ... < selection sort header file > ...
 *  worst: O(n*n)
 *  avg  : O(n*n/2)
 *  best : O(n*n/2) skim if and swap
*/

#ifndef __SELECTIONSORT__
#define __SELECTIONSORT__

using namespace std;
  
//Swap function
template <class T>
void swap( T* &x , T* &y)
{
    T temp = *x;
    *x = *y;
    *y = *x;
}

template <class T>
void selectionSort(vector<T> &arr) 
{ 
    int i , j , min_indx;
    int arraySize = arr.size();

    for( i=0 ; i < arraySize-1 ; i++ )
    {
        min_indx = i;
       
        for( j = i+1 ; j < arraySize ; j++ )
        {
            if( arr[j] < arr[min_indx]  )   
                min_indx = j;
        }
        if( min_indx != i)
            swap ( arr[min_indx] , arr[i] );
    }

}
  
//Function to print an array
template <class T>
void printArray( vector<T> &arr ) 
{ 
    int i; 
    cout << "[ ";
    for (i=0 ; i < arr.size() ; i++)
        cout << arr[i] << " ";
    cout << " ]" << endl; 
} 
  
#endif  //__SELECTIONSORT__
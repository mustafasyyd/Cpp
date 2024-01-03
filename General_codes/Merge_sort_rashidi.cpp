#include <iostream>
#include <array>
#include <vector>
#include <memory>
using namespace std ;
// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]

    // Merge the temp arrays back into array[left..right]


void Merge ( vector<int> &array ,int const left ,int const mid ,int const right )
{
  int const subArrayOne =(mid - left)+1 , subArrayTwo = right-mid ;
  //shared_ptr<int> leftArray ( new int[subArrayOne] );   //shared_ptr<int> rightArray ( new int[subArrayTwo] ) ; 
  int* leftArray ( new int[subArrayOne] );  
  int* rightArray ( new int[subArrayTwo] ) ; 

  //copy right array
  for (int i = 0 ; i < subArrayOne ; i++)
    leftArray[i] = array[left + i]; 
  //copy left array
  for (int j =0 ; j < subArrayTwo ; j++ )
    rightArray[j] = array[mid + 1 + j] ; 
  

  int indexOfRightArray = 0 , indexOfLeftArray = 0 ;
  int indexOfMergeArray = left;  
  while( indexOfLeftArray < subArrayOne && indexOfRightArray < subArrayTwo )
  {
    if (leftArray[indexOfLeftArray] <= rightArray[indexOfRightArray] ) // error: array[indexOfMergeArray])
      {
        array[indexOfMergeArray] = leftArray[indexOfLeftArray] ; 
        indexOfLeftArray++ ;  indexOfMergeArray++;
      }
    else {
      array[indexOfMergeArray] = rightArray[indexOfRightArray] ; 
      indexOfRightArray++;  indexOfMergeArray++;
    }
  }


  // Copy the remaining elements of
  while ( indexOfLeftArray < subArrayOne )
  {
    array[indexOfMergeArray] = leftArray[indexOfLeftArray] ; 

    indexOfLeftArray++ ;  indexOfMergeArray++;
  }
  while (indexOfRightArray < subArrayTwo)
  {
    array[indexOfMergeArray] = rightArray[indexOfRightArray] ; 
    indexOfRightArray++;  indexOfMergeArray++; 
  }
 
}



// begin is for left index and end is
// right index of the sub-array
// of arr to be sorted 
void mergeSort( vector<int> &array , int const begin , int const end )
{
  if (begin >= end) return;

  int mid = begin + (end - begin)/2;
  mergeSort(array,begin,mid);
  mergeSort(array,mid+1,end);
  Merge(array,begin,mid ,end);
}


void PrintArry( vector<int> &arr )
{
   for (int i = 0 ; i<arr.size() ; i++)
    cout<< arr[i] << " " ;
}

int main()
{
    vector<int> Array { 5 , 3 , 6 , 8 , 9 , 122 , 1 , 7 , 6 , 10 , 11 , 10};

    cout << "Given array is \n";
    PrintArry( Array );

    mergeSort( Array , 0 , Array.size()-1 ) ;    //error : was (size+1)
    cout << "\nSorted array is \n";
    PrintArry( Array );

  return 0;
}


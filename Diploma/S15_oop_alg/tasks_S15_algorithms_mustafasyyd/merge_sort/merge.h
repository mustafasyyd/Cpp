#ifndef __MERGE__
#define __MERGE__

#include <iostream>
#include <memory>
#include <vector>

using namespace std;

template <class T>  
void merge( vector<T> array, const int left, const  int mid, const int right )
{
    const auto  leftArray_size = mid - left + 1;\
    const auto rightArray_size = right - mid;
  
    //creating temporary left and right arrays
    std::shared_ptr<T> leftArray  (new T[leftArray_size]);
    std::shared_ptr<T> rightArray (new T[rightArray_size]);
  
    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < leftArray_size; i++)
        leftArray[i] = array[left + i];

    for (auto j = 0; j < rightArray_size; j++)
        rightArray[j] = array[mid + 1 + j];
  
    auto leftArrIdx = 0 ,  rightArrayIdx = 0 ;     
    int mergedArrIdx= left; // Initial index of merged array
  
    // Merge the temp arrays back into array[left..right]
    while (leftArrIdx < leftArray_size && rightArrayIdx < rightArray_size) 
    {
        if (leftArray[leftArrIdx] <= rightArray[rightArrayIdx]) 
        {
            array[mergedArrIdx] = leftArray[leftArrIdx];
            leftArrIdx++;
        }
        else {
            array[mergedArrIdx] = rightArray[rightArrayIdx];
            rightArrayIdx++;
        }
        mergedArrIdx++;
    }
    
    // Copy the remaining elements of left array.
    while (leftArrIdx < leftArray_size) 
    {
        array[mergedArrIdx] = leftArray[leftArrIdx];
        leftArrIdx++;
        mergedArrIdx++;
    }
    // Copy the remaining elements of right array.
    while (rightArrayIdx < rightArray_size)
    {
        array[mergedArrIdx] = rightArray[rightArrayIdx];
        rightArrayIdx++;
        mergedArrIdx++;
    }
}


template <class T>  
void mergeSort( vector<T> array , int const begin, int const end)
{
    if (begin >= end)
        return; // Returns recursively
  
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid); //left
    mergeSort(array, mid + 1, end); //right
    merge(array, begin, mid, end);
}
  
// UTILITY FUNCTIONS, Function to print an array
template <class T>  
void printArray( vector<T> array )
{
    for (auto i = 0; i < array.size(); i++)
        cout << array[i] << " ";
}

#endif //__MERGE__
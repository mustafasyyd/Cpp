#include <iostream>
#include "element_frequency.h"

void frequencies::Find_Frequencies ( int arr[], int freq[], int size){
  
  for (int i = 0; i<size; i++)  
  {
    int count = 1;
    for (int j = i+1; j<size; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
        freq[j] = 0;
      }
    }

    if (freq[i] != 0) 
        freq[i] = count;
  }
}

//function to print frequencies.
void frequencies::Print_Frequencies ( int arr[], int freq[], int size){
  
  std::cout << "element : frequency" << std::endl;
  for (int i = 0; i < size; i++){
    if (freq[i] != 0)
      std::cout << arr[i] << " : " << freq[i] << std::endl;
  }
  
}
  
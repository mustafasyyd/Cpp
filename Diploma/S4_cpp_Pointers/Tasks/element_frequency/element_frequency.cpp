#include <iostream>
#include "element_frequency.h"
#include <array>

/*
  * We are given an array of integer elements which contains duplicate values
  * and the task is to calculate the frequencies of the distinct elements 
  * present in an array and print the result. 
  
  * @file element _frequency.cpp
  * @Author: mustafa syyd
*/

//function to find frequencies.

int main() 
{

  //declaring the size of array 
  int size;

  //getting the size from usr.
  std::cout<< "enter the array size: " << std::endl;
  std::cin>> size;

  //array of integers.
  int arr[size] = {0};
  std::cout<< "enter the array values: " << std::endl;
  std::cin>> size;

  //array of frequencies, to store the frequencies.
  int freq[size] = {0};

  //make all freq values -1, as a reference.
  for (int &el : freq)
  {
    el = -1;
  }

  //do the operation.
  frequencies::Find_Frequencies  (arr, freq, size);
  frequencies::Print_Frequencies (arr, freq, size);

  return 0; //done
}

/**
 * < Exploring pointers & pointers to arrays >
 * 
 * @file  : ptr_to_arr.cpp
 * @author: mustafa.syyd
*/

#include <iostream>
using namespace std;

int main(){

     int arr[] = {1,2,3,4,5};
     int size = sizeof(arr)/sizeof(arr[0]);
/*
     cout<< arr <<endl;    
     cout<< arr-2 <<endl;
     cout<<  arr[0]  <<endl;    //Accessing arr using "Array Notation"
     cout<<  *arr  <<endl;      //Accessing arr using "Pointer Notation"
     cout<< *(arr+0) <<endl;
     cout<< *(arr+22) <<endl;
*/
    //ERROR: lvalue required as increment operan
 //    cout<< *(arr++) <<endl;
 //    cout<< *(++arr) <<endl;

     //int inc =4;
    // cout<< *(arr+inc) <<endl; //pointer to constant;


    int x=9;

    int* p_arr = &x;
    p_arr++; //not allowed / authorized to access next or before address in mem.

    p_arr = arr; //allowed to acced arr locatios in mem ( p_arr : p_arr+(size-1) ), beyond that is not authorized


    for(int r=0 ; r < size ; r++){
        cout<< *(p_arr++) <<endl; //pointer to variable;
    }



    return 0;
}
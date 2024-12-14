/**
 * @file    TwoArrSum.cpp
 * @author  mustafa.sayed
 * @date    7.25.2024
 * @brief   part of freq array problem and series of mhmd affifi https://www.youtube.com/watch?v=kQGTjql8WjI&list=PLYknlDiw2kSwdDhTSDoX7ZoVEle8nbZdk&index=3 
 *          can we swap two arrays, such that sum of each equals the same value wit O(N) complexity. 
 */


#include<iostream>
#include<vector>
#include<algorithm>
#include "FreqArrary.h"

#define endl "\n"
using namespace std;

int ArrSum( vector <int> arr);
void ArrSwap(int &a, int &b);
void PrintArr(vector<int> arr);

int main()
{
    vector<int> A({3,1,5,5,7,8,1})                                                    ,
                B({2,5,0,7,5,0,3})                                                    ;


    std::vector <int> freq_A (0)                                                ;
    int Arr_diff { (ArrSum(A) - ArrSum(B))}                                     ;

    if (Arr_diff<0)
        Arr_diff *= -1;

    else if (!Arr_diff)
    {
        cout << "The two arrays sum is already the same!" 
        << endl ;
    }    
    
    cout << "A ";
    PrintArr(A) ;
    cout << "B ";
    PrintArr(B) ;

    // cout << "sum of array A = " << SummArr_A << endl                            ;
    // cout << "sum of array B = " << SummArr_B << endl                            ;
    cout << "Difference wanted between array A and B divided by 2 = " 
        << Arr_diff/2 
        << endl    ;

    freq_A = Get_freq_array(A)  ; 
    cout << "freq_A "           ; 
    PrintArr(freq_A)            ;

    for (int i{0}; i<B.size(); i++)
    {   
        int val_sum { B[i]+(Arr_diff/2) }  ,
            val_diff { abs(B[i]-(Arr_diff/2)) } ;
        // if (val_diff <0)
        //     val_diff *= -1;

        if ( val_sum == Arr_diff/2 || val_diff == Arr_diff/2 )
            ArrSwap(B[i], A[i]);
    }
    
    cout << "A ";
    PrintArr(A) ;
    cout << "Array A sum = " << ArrSum(A)  << endl;  
    
    cout << "B ";
    PrintArr(B) ;
    cout << "Array B sum = " << ArrSum(B)  << endl;  
  

    cout << "The Minimum difference between the two arrays = " 
         << abs(ArrSum(A) - ArrSum(B))
    << endl;  

    return 0;
}


// ----------------------------------------------------------------------
    //-------------------- Brute force algorithm inside main() ------------------------ 
    // for (int i{0}; i<A.size(); i++)
    // {   
    //     ArrSwap( A[i],B[i]);
    //     if ( (SummArr_A - SummArr_B) == 0 )
    //     {
    //         cout << "arrays customized successfully" << endl;
    //         break;
    //     }
    // }
    
    // if ( (SummArr_A - SummArr_B) != 0 )
    // {
    //     cout << "Arrays customization failed " << endl;
    // }

int ArrSum( vector <int> arr)
{
    int i{0},
        sum{0};
    for (i ; i<arr.size() ;i++)
    {
        sum += arr[i];
    }
    return sum;
}


void ArrSwap(int &a, int &b)
{
    int temp {a};
    a = b;
    b = temp;
}

void PrintArr(vector<int> arr)
{
    cout << "["             ; 
    for( auto& el : arr )
        cout << el << " "   ;
    cout << "]" << endl     ;
}
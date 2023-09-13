//variable_sized_arr.cpp

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    uint32_t n , q;
    cout<< "\nEnter array length n: ";    cin>> n;
    cout<< "\nEnter queries number q: ";  cin>> q;
    
    vector<vector<int>> arr;

    for ( int i =0; i<n ; i++){
        
        uint32_t k;
        cout<< "\nEnter inner array length k: "; cin>> k;
        vector<int> temp;
        
        for ( int j =0; j < k ; j++){
            int val;
            cout<< "\nEnter inner array value: "; cin>> val;
            temp.push_back(val);
        }
        arr.push_back(temp);
    }

    for (int i=0 ; i<q ; i++){
        uint32_t first, second;
        cout<< "\nEnter first index:  " ; cin>> first;    
        cout<< "\nEnter second index: ";  cin>> second;
        cout<< arr[first][second];
    }

    return 0;
}
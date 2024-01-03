#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {   
    vector<int> Array;
    int arrSize , indx , integer , queries;
    cout 
    << "Enter number of integers: "; 
    cin 
    >> arrSize;
    
    for (indx=0 ; indx<arrSize ; indx++) {
        cout 
        << "input an integer: "; 
        cin 
        >> integer;
        Array.push_back(integer);
    }
    
    cout 
    << "Enter number of queries: "; 
    cin 
    >> queries;
    
    for(indx=0 ; indx < queries ; indx++) 
    {
        cout 
        << "input a value to compare: "; 
        cin 
        >> integer;
        auto elementIndx 
            = lower_bound(Array.begin(), Array.end() , integer) 
                    - Array.begin();
        
        if (Array[elementIndx] == integer)  
            cout
            << "Yes "
            << elementIndx+1
            << endl;
        else
            cout 
            << "No " 
            << elementIndx+1 
            << endl;
    }
    
    return 0;
}

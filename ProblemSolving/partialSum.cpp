/**
 * < partialSum.cpp >
 * @file: frequencyArray.cpp
 * @author: mustafa.syyd 
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
#define endl '\n'

void partialSum(vector<int>& array , vector<int>& pfSum){
    pfSum[0] = array[0];
    for(int i=1; i<array.size() ;i++)
        pfSum[i] = pfSum[i-1] + array[i];
}

int main()
{
    vector<int> array = { 2  , 5 , 3 , 1 , 7 , 4 };
    cout << "array elements:[ ";
    for( auto el : array )  cout << el << " ";
    cout << "]" <<endl;
    
    vector<int> pfSum(array.size());
    partialSum(array , pfSum);
    cout << "Prefix summary:[ ";
    for( auto el : pfSum )  cout << el << " ";
    cout << "]" <<endl;

    return 0;
}
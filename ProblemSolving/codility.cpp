/**
 * < codility.cpp >
 * @file: frequencyArray.cpp
 * @author: mustafa.syyd 
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
#define endl '\n'

int codility(vector<int>& array ,int& index){
    int left=array[0];
    int  right=0 ;

    for(int i=1; i<array.size() ;i++)  right += array[i];
    
    int min = abs( right - left ); 
    index = 0 ;
    
    for(int i=1; i<array.size()-1 ;i++){
        left += array[i];
        right -= array[i];
        if ( abs( right - left ) < min ) {
            min = abs( right - left );
            index =i ;
        }
    }
    return min;
}

int main()
{
    vector<int> array = { 2  , 5 , 3 , 1 , 7 , 4 };
    cout << "array elements:[ ";
    for( auto el : array )  cout << el << " ";
    cout << "]" <<endl;
    
    int min =-1 , index=-1;
    min = codility(array, index);
    cout << "Best place get minimum difference is at index: "
         << index << endl;
    cout << "print minimum sum of the array : "
         << min << endl;

    return 0;
}
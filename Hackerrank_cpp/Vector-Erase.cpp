#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    vector<int> integers;
    //cout << integers.size() << endl; //size = zero
    int i , Int , size; 
    int position , begin , end;
    
    cout << "\nEnter number of intergers: " ; cin >> size;
    for(i=0 ; i<size ; i++){
        cout << "Enter a value: "; cin >> Int;
        integers.push_back(Int);
    }
    
    cout << "\nEnter position to be removed:  ";  cin >> position ; 
    integers.erase( integers.begin()+position-1 );
    
    cout << "\nEnter range to remove [begin : end]:  ";    
    cout << " \nbegin : " ;   cin >> begin;
    cout << " \nend   : " ;   cin >> end; 
    integers.erase( integers.begin()+begin-1 , integers.begin()+end-1 );

    cout << integers.size() << endl;
    for(i=0 ; i<integers.size() ; i++)
        cout << integers[i] << " ";

    return 0;
}

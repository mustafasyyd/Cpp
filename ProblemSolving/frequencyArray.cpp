/**
 * < Frequency array >
 * @file: frequencyArray.cpp
 * @author: mustafa.syyd 
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
#define endl '\n'


int main()
{
    vector<int> array = {0 , 2 , 4 , 6 ,8 , 10 };
    cout << "array elements:[ ";
    for( auto el : array ) 
        cout << el << " ";
    cout << "]" <<endl;
    
    //vector<int>::iterator PtoMAX; 
    //int MAXSIZE;  
    //PtoMAX = *(max_element(array.begin() , array.end()) );
    //MAXSIZE = *PtoMAX;
 
    auto MAXSIZE = *( max_element(array.begin() , array.end()) );
    cout << "Maximum element in the array is --> "
         <<MAXSIZE 
         <<endl;    

    vector<int>freq (MAXSIZE+1);
    cout << "frequency array size is --> "
         << freq.size() << endl
         << "is frequency array empty? --> "
         << boolalpha << freq.empty() << endl;

    for(auto i=0; i<array.size() ;i++)
        freq[(array[i])]++;
    
    cout << "frequency array: \n"
         << "[ 0 1 2 3 4 5 6 7 8 9 10]"
         <<endl << "[ ";
    for( auto& el : freq )
        cout << el << " " ;
    cout << "]" <<endl;
    
    return 0;
}
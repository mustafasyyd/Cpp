#include<iostream>
#include<vector>
using namespace std;

template <class T>
T BinarySearch ( vector <T> v , T To_Find )
{
    int first = 0, last = v.size()-1 ; 
    int med;

    while( first-last > 1 )
    {
        med = (first + last) / 2;
        
        if( To_Find > v[med])  
            first = med + 1 ;   
        else   
            last = med;  
    } 

    if(v[first] = To_Find) 
        return v[first];     
    else
        return v[last]; 
}



int main()
{
    float math_const;
    vector<float> math_constants = {3.14 , 2.54 , 1.6 , 1};

    cin>> math_const;

    auto result = BinarySearch<float>(math_constants , math_const);
    cout<<"Math constant: " << result << endl;

    return 0;
}
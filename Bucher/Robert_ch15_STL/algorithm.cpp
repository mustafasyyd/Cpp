#include<iostream>
#include<vector>
#include<array>

using namespace std;

namespace myalgorithm 
{
    template <class Iterator , class T>
    Iterator find ( Iterator begin, Iterator itPastEnd , T element ) 
    {
        //use binary search (for sorted containers)
        //used most eff data structures.
        for ( auto it = begin ; it!= itPastEnd ; it++)
            if ( *it== 33 )    
                return it;    
    }
    
    template <class Iterator>
    Iterator sort ( Iterator begin , Iterator itPastEnd ) //sort: linear - binary - merge  
    {
        Iterator result;
        for ( auto it = begin ; it != itPastEnd ; it++)
            if ( *it== 33 )
                return it;    
    }

    template <class Iterator , class T >
    int count ( Iterator begin, Iterator itAdvanced , T element ) 
    {
        int count = 0;
        for ( auto it = begin ; it != end ; it++)
            if (*it == 33)  
                count++ ; 
        return count;    
    }
}


int main()
{
    vector<int> array = { 19 , 10 , 96 , 19 , 10 , 96};
    
    return 0;
}
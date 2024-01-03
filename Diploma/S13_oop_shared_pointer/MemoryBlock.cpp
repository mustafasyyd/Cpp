/**
 *                  ...... < Move Semantics > ......
 *          
 * 1) Move constructor.   2) Move assignment  ( '=' operator overloading )
 * 
 * @file: MemoryBlock.cpp
 * */

#include<iostream>
#include"MemoryBlock.h"
#include<vector>

using namespace std;

int main()
{
    /*MemoryBlock<int> RafiStudio(2);
    std::cout<< "RafiStudio Length: " << RafiStudio.Length() <<std::endl;

    MemoryBlock<int> RaiaGrocery (4);
    std::cout<< "RaiaGrocery Length: " << RaiaGrocery.Length() <<std::endl;

    RafiStudio = RaiaGrocery;
    std::cout<< "RafiStudio Length: " << RafiStudio.Length() <<std::endl;

    MemoryBlock<int> Samsung(RaiaGrocery);
    std::cout<< "Samsung Length: " << RafiStudio.Length() <<std::endl;*/

    vector< MemoryBlock<long> > vec_mem;
    
    vec_mem.push_back(MemoryBlock<long>(2011));
    vec_mem.push_back(MemoryBlock<long>(1968));
    vec_mem.push_back(MemoryBlock<long>(1936));

    vec_mem.insert( vec_mem.begin()+1 , MemoryBlock<long>(1990) ); //ERROR: ?????

    return 0;
}
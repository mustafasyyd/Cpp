/**
 *                  ...... < Move Semantics > ......
 *          
 * 1) Move constructor.   2) Move assignment  ( '=' operator overloading )
 *
 * @file: MemoryBlock.h 
 *  
 * */

#pragma once
#include<iostream>
#include<algorithm>

using namespace std;

template <class N>
class MemoryBlock
{
    public:

        MemoryBlock (size_t len );                  //1-ar ctor    
        MemoryBlock (const MemoryBlock& copy);      //copy ctor
        ~MemoryBlock ();                            //destor
    
        //Move constructor , rvalue reference
        MemoryBlock ( MemoryBlock&& other ); //the arg is an 'rvalue reference'
    
        MemoryBlock& operator= ( const MemoryBlock& copy );  //copy assignment operator.
        MemoryBlock& operator = ( MemoryBlock&& other );

        //Retrieving the length of the data resource.
         size_t Length();   //static use in splitted files   [.h] and [.cpp] ??


    private:
        N *buffer;
        size_t length;
};


//-----------------Implementation--------------------

    //1-arg constructor
template <class N>
MemoryBlock<N>::MemoryBlock (size_t len ) 
    : length(len) 
    , buffer( new N[len] )
{
    cout<< "Memory created\n";
}

    //Copy constructor
template <class N>
MemoryBlock<N>::MemoryBlock (const MemoryBlock& copy) 
    : length(copy.length) 
    , buffer( new N[copy.length] ) 
{
    std::copy( copy.buffer , copy.buffer+this->length , this->buffer );
    std::cout<< "Memory copies at creating memory block\n";
}
   
    //Destructor
template <class N>
MemoryBlock<N>::~MemoryBlock () 
{
    if( buffer != nullptr )
    {
        delete[] buffer;
        cout<< "Memory deleted\n";
    }
}

    //Move constructor , rvalue reference
template <class N>
MemoryBlock<N>::MemoryBlock ( MemoryBlock&& other ) //the arg is an 'rvalue reference'
    : buffer(nullptr) 
    , length(0)
{
    this->length = other.length;
    this->buffer = other.buffer;

    //assigning the data members of the source to the default values (null and 0)
    other.buffer = nullptr;
    other.length = 0;
}


template <class N>
MemoryBlock& MemoryBlock<N>::operator= ( MemoryBlock&& other )
{   
    //perform no opertion if you try to assign object to it self.
    if (this != & other)
    {   
        //free the existing buffer that points to heap
            delete[] this->buffer;
            this->length = other.length;
            this->buffer = other.buffer;

            other.buffer = nullptr;
            other.Length = 0;
    }

    return *this;
}


template <class N>
MemoryBlock& MemoryBlock<N>::operator= ( const MemoryBlock& copy )
{  
    // m1 = m2; must be overloaded, as they're usr def types.
    if( this != &copy ) //????? ask eng.muhmd
    {
        delete[] buffer;
                
        this->length = copy.length; 
        this->buffer = new N [this->length];
        std::copy( copy.buffer , copy.buffer+this->length , this->buffer );
        std::cout<< "Memory copied by = operator overloading\n";
    }
    return *this;
}



template <class N>
size_t MemoryBlock<N>::Length()    //static use in splitted files   [.h] and [.cpp]
{
    return this->length;
}
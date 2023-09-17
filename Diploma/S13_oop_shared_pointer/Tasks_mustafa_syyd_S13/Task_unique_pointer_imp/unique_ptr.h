/**
 *  ...... < Implementation of Unique pointer as class template > ......
 * 
 * @file: uinque_ptr.h
 * 
*/
#pragma once

#include<iostream>
#include <memory>


using namespace std;

template <class T>
class UniquePointer
{
    public:                        
        UniquePointer(T* p) : unique(p) {}                         //1-arg Parametrized Constructor
        
        UniquePointer( const UniquePointer& copy ) = delete;       //Copy Constructor //ERROR: use of deleted function if you tried to use it
        
        UniquePointer( UniquePointer&& move )                      //Move Constructor
        {
            this->unique = move.unique;
            move.unique = nullptr;
        }

        ~UniquePointer()   {   delete unique;   }
        
        UniquePointer& operator= (UniquePointer& copy) = delete;   //must take exactly one argument 
        T& operator* ()    {   return *unique;  }
        T* operator->()    {    return unique;  }
        
    
        static T* MakeUnique( T* p )
        {
            return p;
        }

    private:
        T* unique;
};



class Pen
{   
    public:
    //Declarations
        Pen(int id = 000);      //1-arg constructor
        int getColorId();         //methode to get the color id

    private:
        int color_id;
};

//Definition outside class Pen.
Pen::Pen(int id) : color_id(id) {}

int Pen::getColorId() {   return color_id;  }

/**
 *          ........ < Shared Pointer Implementation as a templated class > ......
 * 
 * 
 * @file: sharedpointer.h
*/
#pragma once

#include<iostream>

using namespace std;

template<typename T>
class SharedPointer
{
    private:
        T* sharedptr;
        long *count ;  
    public:
        SharedPointer( T* sp = NULL ) : sharedptr(sp)  // [count(0)]: is a static data member; it can only be initialized at its definition
        {   
            count = new long{1} ;
        }

        SharedPointer( const SharedPointer& other)
        {
            this->sharedptr = other.sharedptr;
            this->count     = other.count;
            (*count)++;     
        }

        ~SharedPointer()
        {
            (*count)--;
            if( (*count) == 0 )
            {   delete sharedptr;   }
        }

        SharedPointer& operator=( const SharedPointer& other)
        {   
            cout<< "Assign\n";         
            this->sharedptr = other.sharedptr;
            (*count)++;    
            return *this;   
        }

        T& operator*()
        {   return *sharedptr; }

        

        T* operator-> ()
        {   return sharedptr;    }

        static T* MakeShared( T* obj_ptr )
        {
            return obj_ptr;
        }

        long get_count()
        {
            return *(count);
        }
};


//template<typename T> long SharedPointer<T>::count = 0;
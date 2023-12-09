//pair class template implementation
//file: pair.h
#pragma once

#include<iostream>

namespace ASsociated{
    template <class T1 , class T2>
    struct pair
    {
        T1 first; T2 second;
        
        pair( T1 fir , T2 sec ) 
            : first(fir) 
            , second(sec) 
        {}
        
        pair ( const pair& p ) 
            : first(p.first) 
            , second (p.second) 
        {}
        
        static pair make_pair(T1 fir , T2 sec){
            return pair(fir , sec);
        }
        static pair make_pair(T1& fir , T2& sec){
            return pair(fir , sec);
        }

        void resetFirst( T1 fir ){
            first = fir;
        }
        void resetFirst( T1& fir ){
            first = fir;
        }
        
        void resetSecond( T2 sec ){
            second = sec;
        }
        void resetSecond( T2& sec ){
            second = sec;
        }

        void print()
        {
            std::cout << "First element : " << this->first 
                    << "\nSecond element: " << this->second 
            << std::endl;
        }

        void Traverse(void (*callfn)())
        {
            callfn();
        }
    };
}

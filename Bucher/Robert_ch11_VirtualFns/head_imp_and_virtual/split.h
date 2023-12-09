#ifndef __SPLIT__
#define __SPLIT__

#include<iostream>

class A
{
    public: 
        virtual void split() = 0 ;
        virtual ~A() {}
};

class B : public A
{
    public:
    void split();
    
};


#endif  //__SPLIT__
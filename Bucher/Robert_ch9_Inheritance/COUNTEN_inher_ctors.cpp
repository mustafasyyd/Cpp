/**
 * < exploring inheritance,
 *          COUNTEN.CPP> 
 * @file: inheritance.cpp
 * @author: mustafa.syyd
*/

#include<iostream>
using namespace std;

class Counter
{   
    public:
        Counter() : count(0) {}                           //def ctor: in derived class: inherited and executed at obj creation
        Counter(unsigned int cn) : count(cn) {}          //para ctor: is not inherited and not executed at obj creation

        //prefix operator ovreloading
        Counter operator++() 
        {
            return Counter(++count);
        }

        virtual unsigned int getCount()
        {
            cout<< "parent class fn\n";
            return count;
        }

    protected:
        unsigned int count;
};

class CountDn : public Counter
{    public:
        CountDn() :  Counter() {}       //   ... : count(4): gives an error, so you cannot inizialize it at ini. list, but you can in the body

        CountDn(int cn) : Counter(cn) {}           //FOR ALL CTORs in CHILD: cannot use 'mData of PARENT' in ITS initializer list ::::>(ERROR)

        Counter operator--() 
        {
            return Counter(--count);
        }
        unsigned int getCount() //overriden automatically without virtual, how & what?
        {   
            cout<< "child class fn\n";
            return count;
        }
};


int main()
{
    CountDn c1; //count=0 , def ctor bas then def ctor derived.

    //compiler error: no parametrized ctor existed, and cannot inherit that of base class 
    //CountDn c1(2);

    //cout<<"counter [ " << c1.getCount() <<" ]\n";

    ++c1;   //count=3
    ++c1;   //count=2

    cout<<"Counter [ " << c1.getCount() <<" ]\n";
    cout<<"Counter [ " << c1.Counter::getCount() <<" ]\n";

    return 0;
}
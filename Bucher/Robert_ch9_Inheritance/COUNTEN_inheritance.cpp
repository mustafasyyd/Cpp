/**
 * < exploring inheritance, COUNTEN.CPP > 
 * @file: inheritance.cpp
 * @author: mustafa.syyd
*/

#include<iostream>
using namespace std;

class Counter
{   
    public:
        Counter()
        {
            count = 7;
        }
        Counter(unsigned int cn) : count(cn) {} 
       
        unsigned int getCount()
        {
            return count;
        }
        
        //prefix operator ovreloading
        Counter operator++() 
        {
            return Counter(++count);
        }

    protected:
        unsigned int count;
};

class CountDn : public Counter
{    public:
        CountDn() {
            cout<<"ctor2\n";
        }
        
        //prefix operator ovreloading
        Counter operator--() 
        {
            return Counter(--count);
        }
};


int main()
{
    CountDn c1; //count=0 , def ctor.
    cout<<"counter [ " << c1.getCount() <<" ]\n";


/**
 * 
    ++c1;   //count=3
    ++c1;   //count=2

    cout<<"counter [ " << c1.getCount() <<" ]\n";
*/
    return 0;
}
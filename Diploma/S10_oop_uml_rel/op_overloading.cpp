/**
 * < operator overloading >
 * 
 * @file: op_overloading.cpp
 * @author: mustafa.syyd
*/

#include<iostream>

using namespace std;

class Counter{
    public:
    Counter() : count(0) {}
    Counter(int c) : count(c) {}

    int getCount(){
        return count;
    }

    Counter operator ++(int){ // c++
           return Counter(count++);   
    }

    Counter operator ++(){ // ++c
        return Counter(++count);   
    }

    private:
    unsigned int count;
};


int main(){

    Counter c1;
    
    ++c1;
    cout<< "counter1 is: " <<c1.getCount();
    cout<<"\n";

    Counter c2;
    c2=++c1; //assignment by default from compiler

    //c1.operator++(arg)

    cout<< "counter2 is: " <<c2.getCount();
    cout<<"\n";


    Counter c3;
    c3=c1++;
    
    cout<< "counter3 is: " <<c3.getCount();
    cout<<"\n";

    cout<< "counter1 is: " <<c1.getCount();
    cout<<"\n";


    return 0;
}
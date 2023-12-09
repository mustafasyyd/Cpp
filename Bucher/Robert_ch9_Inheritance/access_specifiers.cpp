/**
 * < Access specifiers >  
 * < exploring inheritance and access specifiers >
 * 
 * < @file  : access_specifiers.cpp >
 * < @author: mustafa.syyd > 
*/


#include<iostream>
using namespace std;

class A {
    public:
    int publicaA;

    protected:
    int protectedaA;
    
    private:
    int privateaA;
};

class B : public A 
{
    void func(){
        int a;
        a = publicaA;
        a = protectedaA;
        //a = privateaA;

    }

};

class C : private A
{
    
    void func(){
        int a;
        a = publicaA;
        a = protectedaA;
        //a= privateaA;

    }

};

int main(){

    C c1;
    c1.publicaA =2;

    return 0;
}

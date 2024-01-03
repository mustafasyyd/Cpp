/**
 * < virtual pure Function >
 *
 * @file: virt_pure.cpp
 * @author: mustafa.syyd
*/

#include<iostream>
using namespace std;

class Parents{
    public:
         virtual void show() const =0;   //pure virtual Fn.
         virtual void info() { cout<<"Parents\n"; }
         void state(){ cout<<"Married\n"; }      
};  

class Father : public Parents {
    public:
        void show() const { 
            cout<< "\nFather"; 
        }
        void info() { cout<<"Father\n"; }
};

class Mother : public Parents {
    public:
        void show() const {
            cout<< "\nMother";
        }
        void info() { cout<<"Mother\n"; }
};

class child : public Father {
    public:
         void show() const {
            cout<< "\nChild";
        }

};



int main(){

/*
    Parents *pp; //even it has a garbage value
    pp->state();        //then, how it access the parent abstract class.
*/

/*
    Parents *persptr= new Father;
    persptr->info();  //virtual nescessary to print father
*/



    return 0;
}
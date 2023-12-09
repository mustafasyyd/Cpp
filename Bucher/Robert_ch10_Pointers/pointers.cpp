/**
 * < Exploring pointers >
 * 
 * @file  : pointers.cpp
 * @author: mustafa.syyd
*/

#include <iostream>
using namespace std;

//global var
double x=2  , y=4;
float  z=12 , w=12;

int main(){
    //local var
    int a=2;
    int b=7;
    float f=3.4;
/*
    //mem alloc upward
    cout<< &x <<endl;
    cout<< &y <<endl;
    cout<< &z <<endl;
    cout<< &w <<endl;*/


    //mem alloc downward, as it is stored in the stack
    cout<< &a <<endl;
    cout<< &b <<endl;

    int *p_int;
    float *p_flo;
    void *p_vd;

    p_int = &a;
    p_flo = (float*)&a; //old C-style casting

    //void ptr can point to any data type
    p_vd  = &a;
    p_vd  = &b;

    //reinterpret casting
    p_int = reinterpret_cast<int*>(&b);

    //cannot static cast type to pointer type
    //p_flo = static_cast<float*>(&a); //ERROR

    /* 
        The address size is (0x61ff08) 6-hex digits = [ 24-bit architecture ] 
    */

    return 0;
}
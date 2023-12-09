#include <iostream>
/*
 * 
 * 
 * @file ptr_ref.cpp
 * @Author: mustafa.syyd
*/


void divide(int a, int b){
    std::cout<< a / b << std::endl;
}


void mul(int a, int b){
    std::cout<< a * b << std::endl;
}

void Call_fn(void (*fn_ptr)(int, int)){
    fn_ptr(40, 20);
}

int main(){


    Call_fn (&mul);     //with &     
    Call_fn (divide);       //or without, egal und <was soll's!>

    void (*fn_ptr)( void (*fnptrarg)(int, int) );  //pointer to function with pointer to fn as argument
    
    fn_ptr = Call_fn;
    fn_ptr(&mul);

    return 0;
}
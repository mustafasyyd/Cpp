#include <iostream>
#include "Rechner.h"

 
    //add two numbers.
    int calc::add(int x, int y){
        return x+y;
    } 
    
    //subtract two numbers.
    int calc::sub(int x, int y){
        return x-y;
    }
    
    //multiply  two numbers.
    int calc::mul(int x, int y){
        return x*y;
    }
   
    //divide two numbers.
    int calc::div(int x, int y){
        return x/y;
    }
    
    //modulus two numbers.
    int calc::mod(int x, int y){
        return x%y;
    }   

    // print the result.
    void calc::GetResult(int result){
        std::cout<< "Result= "<< result << std::endl << std::endl;
    }

    
    void calc::DoArithmetic(char op, int x, int y){

    switch(op){

        case '+':
        calc::GetResult(calc::add(x, y));
        break;

        case '-':
            calc::GetResult(calc::sub(x, y));
            break;
     
        case '*':  
            calc::GetResult(calc::mul(x, y));
            break;
     
        case '/':
            calc::GetResult(calc::div(x, y));
            break;
     
        case '%':
            calc::GetResult(calc::mod(x, y));
            break;
     
        default:
            std::cout<<"Invalid operator"<<std::endl;
            break;
    }

    } 
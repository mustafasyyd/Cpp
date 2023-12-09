#include <iostream>
#include "Rechner.h"

/*
* A program to do arithmetic operations on two numbers
* (+ - * / %)
* Coded by: mustafa.syyd
*/

int main(){

    // declaring the two numbers, and the operatior.
    int x, y;
    char op;

 while (1)
 {
    std::cout<<"Enter two numbers: "<<std::endl;
    std::cin>> x>>y;
    
    std::cout<<"Enter the Operator: "<<std::endl;

    //preventing false input.
    while (1){
        
        std::cin>> op;
        if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%') break;
           
        std::cout<<"Please enter a valid Operator: "<<std::endl;
    }

    calc::DoArithmetic(op, x, y);

 }
 

    return 0;
}
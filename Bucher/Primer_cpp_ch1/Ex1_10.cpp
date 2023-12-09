#include <iostream>

/*
* Primer c++: p.13 - exercise 1.10
*  :write a program that uses a while loop (flow of control)
*   to print numbers from 10 down to 0, using -- operator
* code by: mustafa.syyd
*/


int main(){

    //decrementing variable
    int dec = 10;

    while( dec >= 0){

        if( dec == 10) std::cout<< "Numbers from 10 down to zero" << std::endl;

        std::cout<< dec << std::endl;
        --dec;
    }

    return 0;
}
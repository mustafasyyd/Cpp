#include <iostream>
/*
* Primer c++: p.13 - exercise 1.9
*  :write a program that uses a while loop (flow of control)
*   to print the sum of all numbers from 50 to 100.
* Code by: mustafa.syyd
*/

int main(){
    
//variables defining, //summary and accumulator.
int sum=0 , acc=50;

//flow of control
while( acc <= 100){

    sum += acc;
    ++acc;
}

//printing the summary.
std:: cout<< "Sum from 50 to 100 inclusive is: "
          << sum <<std::endl;

    return 0;
}
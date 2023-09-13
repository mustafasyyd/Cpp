#include <iostream>

/*
* Primer c++: p.13 - exercise 1.11
*  :write a program that prompts the usr for two numbers, and
*   print each number in the range between those two numbers.
* code by: mustafa.syyd
*/


int main(){

//declaring prompted variables. 
int num1, num2; 
int val=0, max=0;

//iostream, standard input object.
std::cout<<"Please enter two numbers: "<<std::endl;
std::cin>> num1>> num2;

if(num1 <= num2){
    val=num1;
    max=num2;
}else{
    val=num2;
    max=num1;
} 

while (val <= max)
{
    std::cout<< val <<std::endl;
    ++val;
}


    return 0;
}
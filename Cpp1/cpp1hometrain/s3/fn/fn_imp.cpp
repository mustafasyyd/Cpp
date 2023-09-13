#include <iostream>
#include "fn.h"

void name_usr::promptfn( std::string &s){
    std::cout<< "Enter your name please: " << std::endl;
    std::cin>> s;
}

void name_usr::printfn(const std::string s){
    std::cout<< s << std::endl;
}

void printfn(const std::string s){
    std::cout<< s << std::endl;
}
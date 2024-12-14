#include <iostream>
#include <array>
#include "arrTOfnHeader.h"

// using namespace std::cout, std::cin, std::endl;

int main(){
    
    std::array <char, 7> arr{0} ;
    prompt(arr)                 ;
    print(arr)                  ;

    return 0                    ;
}
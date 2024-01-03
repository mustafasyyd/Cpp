#include <iostream>
#include <array>
#include "unistd.h"

int main(){
    
    std::array<int,4> array{11,22,118,128};

    char c=128;

    for( char element : array ){
        std::cout<< element << std::endl;
    }

    //std::syscall();

    printf("ASCII character of (128) is:  %c ", c);



    return 0;
}
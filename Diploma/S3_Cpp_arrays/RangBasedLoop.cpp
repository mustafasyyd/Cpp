#include <iostream>
#include <array>
// #include "unistd.h"

using std::array;

int main(){
    
    array<int,5> Array_0 = {1,12,19,34,14}                      ;
    array<int,5> Array_1 {1,12,19,34,14}                        ;
    char character = 128                                        ;

    for( char element : Array_0 ){
        std::cout<< element << std::endl                        ;
    }

    // syscall();
    printf("ASCII character of (128) is:  %c", character)      ;
    std::cout << Array_0[1] <<std::endl                         ;

    return 0                                                    ;
}
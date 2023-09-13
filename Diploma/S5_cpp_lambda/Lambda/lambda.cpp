#include <iostream>
/*
 * 
 * 
 * @file ptr_ref.cpp
 * @Author: mustafa.syyd
*/


int main(){

    auto lm_print_mul = [](int a, int b) -> int {
        std::cout<< a * b << std::endl;
        return 0;
    };

    auto lm_mul = [] (int a, int b) -> int {
        return a * b;
    };

    auto lm_div = [] (int a, int b) -> auto {
        return a / b;
    };

    auto lm_op = [] (int a, int b) {
        return (2*a+b);
    };

    int rs = lm_mul(4, 2);
    int vlm = lm_div(4, 2)*2 + lm_mul(3, 2);

    std::cout<< "rs: "<< rs << std::endl;
    std::cout<< "vlm: "<< vlm << std::endl;


    std::cout<< "nlm: " << lm_print_mul(rs, vlm) << std::endl;

   // lm_print_mul(4, []()-> int { return 5; });

    
    

    return 0;
}
#include <iostream>
#include <array>
#include <algorithm>
#include <vector>
#include <functional>


/*
 * 
 * 
 * @file ptr_ref.cpp
 * @Author: mustafa.syyd
*/

void cal (std::array<int,5> &arr, std::function <void (int)> lm ){   //passing array to function
    for( auto &element : arr){                                            //passing lambda to function
        std::cout << "element: " << element << "   ";
        lm(element);
    }
}  

int main(){

    //std array definition.
    std::array<int, 5> arr = {21, 2, 13, 24, 9};

    auto lm_calc = [] (int a) -> void {
        std::cout<< a * a << "  " << std::endl;
    };

    cal(arr, lm_calc);


    
    return 0;
}
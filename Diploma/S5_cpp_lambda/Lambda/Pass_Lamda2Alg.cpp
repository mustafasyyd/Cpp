#include <iostream>
#include <array>
#include <algorithm>
/*
 * 
 * 
 * @file ptr_ref.cpp
 * @Author: mustafa.syyd
*/


int main(){

    //std array definition.
    std::array<int, 5> arr = {21, 2, 13, 24, 9};

    //looping through each element and mul by 2 :(el x 2)
    std::for_each( arr.begin(), arr.end(), [](int &el) -> void{
                                                                el*=2;                  
                                                              });


    //printing the array.
    for( auto &el : arr){
        std::cout<< el << " ";
    }

    std::sort(arr.begin() , arr.end() , [] (int &n1, int &n2) -> bool{
                                                                          return n1 < n2;
                                                                     });
    
    //printing the array.
    std::cout<< std::endl;
    for( auto &el : arr){
        std::cout<< el << " ";
    }
    
    return 0;
}
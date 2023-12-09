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

void calc (std::array<int, 7> &arr, std::function <void(int)> L_square , std::function <void(int)> L_cube ){

    for( auto &element : arr){
        
        std::cout << "element: " << element << "   ";
        
        if(element % 2 == 0){

            L_square(element);
            
        }else{

            L_cube(element);

        }
    }   
}

void calc (std::vector<int> &vec, std::function <void(int)> L_square , std::function <void(int)> L_cube ){

    for( auto &element : vec){
        
        std::cout << "element: " << element << "   ";
        
        if(element % 2 == 0){

            L_square(element);
            
        }else{

            L_cube(element);

        }
    }   
}


int main(){

    //std array definition.
    constexpr int size = 7;
    std::array<int, size> arr = {2, 4, 6, 3, 8, 5,10};
    std::vector<int> vec = {2, 4, 6, 3, 8, 5, 11, 10};

    auto  L_square = [](int n)->void {
        std::cout<< "square: " <<n*n <<std::endl;
        return;
    };

    
    auto  L_cube = [](int n) ->void {
        std::cout<< "cube: " <<n*n*n <<std::endl;
    };

    std::cout<< "...lambada with array..." << std::endl;
    calc (arr, L_square, L_cube);
    
    
    std::cout<< std::endl << std::endl << "...lambada with vector..." << std::endl;
    calc (vec, L_square, L_cube); //lambada passing to function (as pointer or not ?s)

    
    return 0;
}
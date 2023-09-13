#include <iostream>
#include<vector>
#include<algorithm  >
/*
 * 
 * 
 * @file ptr_ref.cpp
 * @Author: mustafa.syyd
*/

namespace vectors{

    int  Get_vec_size(){
        int size;
        std::cout<< "Pls enter the vector size: "<< std::endl;
        std::cin>> size;
        return size;
    }
    
    void Input_vector(std::vector<int> &v){
        for (auto it = v.begin(); it != v.end(); ++it){
            std::cin>> *it;
        }
    }

    void Output_vector(const std::vector<int> &v){
        
        std::cout<< "----Output sorted vector----- "<< std::endl;
        for ( int el : v){
            std::cout<< el << " ";
        }
        
        std::cout<< std::endl<< "------------------------------ "<< std::endl;
    }
}


int main(){

    std::vector<int> v(vectors::Get_vec_size(),0);

    vectors::Input_vector(v);
    std::sort(v.begin(),v.end());
    vectors::Output_vector(v);

}
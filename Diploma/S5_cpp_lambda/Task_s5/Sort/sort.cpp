
#include<iostream>
#include<vector>
#include"sort.h"


int vectors::Get_vec_size()
{
    int size;
    std::cout<< "Pls enter the vector size: "<< std::endl;
    std::cin>> size;
    return size;
}
    
void vectors::Input_vector(std::vector<int> &v)
{
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        std::cin >> *it;
    }
}

void vectors::Output_vector(const std::vector<int> &v)
{
    std::cout<< "----Output sorted vector----- "<< std::endl;
    for ( int el : v)
    {
        std::cout<< el << " ";
    }    
    std::cout<< std::endl<< "------------------------------ "<< std::endl;
}


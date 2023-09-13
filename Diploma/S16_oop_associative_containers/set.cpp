#include <iostream>
#include <set>
#include<unordered_set>


int main()
{
    std::set<double> numbers = { 100 , 11, 16 , 1 , 1 , 190 };

    std::cout << "{";
    for( auto& element : numbers ) //se
        std::cout << element << " "; 
    std::cout << "}" << std::endl;


    std::multiset<int> mnumbers = { 100 , 11, 16 , 1 , 1 , 190 };

    std::cout << "{";
    for( auto& element : mnumbers ) //se
        std::cout << element << " "; 
    std::cout << "}" << std::endl;
 

    return 0;
}
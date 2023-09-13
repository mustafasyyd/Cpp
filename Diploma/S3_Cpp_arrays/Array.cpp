#include <iostream>
#include <array>
int main() 
{
    
    std::array <char,7> arr = {'m','u','s','t','a','f','a'};
    
    for(auto n : arr)
        std::cout << n;    
    return 0;
}
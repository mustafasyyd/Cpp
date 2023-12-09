#include <vector>
#include "distance.hpp"

int main(/* int* argc , char** argv */)
{
    std::vector<Distance> dist_arr;
    dist_arr.push_back(Distance());
    
    char ans{' '} , n{0};
    do{
        dist_arr.push_back(Distance());
        dist_arr[n++].get_distance();
        
        std::cout 
        << "Enter another (y/n): ";
        std::cin 
        >>ans;
    
    } while( ans!='n' );

    std::cout 
    << "\nShow distance: \n";
    
    for (auto& el : dist_arr )
    {
        el.show_distance();
    }
    
    return 0;
}
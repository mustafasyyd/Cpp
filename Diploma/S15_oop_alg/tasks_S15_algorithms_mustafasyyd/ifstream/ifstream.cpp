#include <iostream>
#include <vector>
#include "fstream"





// Driver program to test above functions 
int main() 
{ 
    std::vector<char> file (4) ;
    //file.reserve(256);

    std::cout << "Initial size:  " << file.size();
    std::cout << "   Initial capacity:  " << file.capacity();
    std::cout << std::endl;
    

    std::ifstream ifs ("task.txt");
    char in; 
    for ( int i =0 ; (in = ifs.get() != -1)  ; i++ )
    {
        file.push_back(in) ;
    }

    std::cout << "New size    :  " << file.size();
    std::cout << "   New capacity    :  " << file.capacity();
    std::cout << std::endl;


    return 0; 
}
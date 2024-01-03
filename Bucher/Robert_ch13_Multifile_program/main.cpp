#include<iostream>
#include"header.hpp"

static int Studium{2023};

extern int Geburtstag;
int Datum;

int main()
{   
    std::cout << Geburtstag << std::endl;  // external linking
    std::cout << Studium << std::endl;  //static element (variable)
    // std::cout << Date << std::endl;
    
    Datum = 31123;  // 
    druck_data();
    
    return 0;
}
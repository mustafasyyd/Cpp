#include <iostream>
#include "arrTOfnHeader.h"
#include <array>



void prompt( std::array <char,7> &input )
{
    std::cout<< "pleace enter charachters of size " << input.size() << std::endl;
    for (char &letter : input)
    {    
        std::cin>> letter;
    }
}

void print ( const std::array <char,7> &input)
{
    for (char letter : input)
    {    
        std::cout<< letter;
    }
    
}
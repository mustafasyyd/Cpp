#ifndef __distance__
#define __distance__
#include <iostream>

class Distance
{
    private:
    double inch,feet;
    
    public:
    void get_distance();
    void show_distance();
};

void Distance::get_distance()
{
    std::cout
    << "\nGeben sie inch ein: "; 
    std::cin
    >> this->inch;

    std::cout
    << "\nGeben sie feet ein: "; 
    std::cin
    >> this->feet;
}

void Distance::show_distance()
{
    
    std::cout
    << "\ninch: " << this->inch
    << "\nfeet: " << this->feet
    <<
    std::endl;
}

#endif /*__distance__*/
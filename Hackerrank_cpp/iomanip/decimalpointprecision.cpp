#include <iostream>
#include <iomanip>

int main()
{
    double d = 122.34597977987;

    std::cout << std::fixed 
              << std::setprecision(9)
              << d
    << std::endl;
}
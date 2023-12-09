#include <iostream>

using namespace std;

int main()
{
    double miles=0.0; double km=0.0;
    constexpr double MilesToKm = 1.6;
   
    std::cout << "Inerst the distance: " << std::endl;
    std::cin >> miles;

    std::cout << "the distance equals : " << miles << std::endl;


    //distance in kilometer
    km = miles * MilesToKm;

    std::cout << "the Distance n KM is "<< km <<"km" << std::endl;
    return 0;
}

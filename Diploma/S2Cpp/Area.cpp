#include <iostream>
/*
*A program to get the area of a shape.
*Code by:mustafa.syyd
*/


int main (){

    double length{0}, width{0} ,area{0};
    std::cout << "please enter the length: ";   std::cin  >> length; std::cout << "\n";
    std::cout << "please enter the width: " ;   std::cin  >>  width; std::cout << "\n";
    
    area = length * width;
    std::cout<< "Area = length x width\n"
             << "Area = " << area << " m.m" << std::endl; 
    
    return 0;
}

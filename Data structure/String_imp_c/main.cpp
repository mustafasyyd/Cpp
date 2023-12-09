#include<iostream>
#include "String.hpp"


int main()
{
    String employee; // no arg ctor
    size_t len = employee.get_len();
    std::cout
        <<"string length: "
        << len
    << std::endl;

    String guard  = "ahmed fayez";  //1-arg ctor  // also: string s("--")
    std::cout <<"string: ";
    guard.show_data();
    std::cout << std::endl;

    employee = guard;   // --how ???--
    std::cout <<"string: ";
    employee.show_data();
    std::cout << std::endl;

    String bBuilding = "mustafa sayed ";
    bBuilding.concat(guard);
    std::cout <<"string: ";
    bBuilding.show_data();
    std::cout << std::endl;


    return 0;
}
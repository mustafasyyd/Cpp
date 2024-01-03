#include<iostream>
#include"gym.h"


int main()
{
    GYM artgym;
    try
    {
        artgym.initiate_error();
    }
    catch(GYM::GymError)
    {
        std::cerr << "Error" << '\n';
    }
    

    return 0;
}
#include<iostream>
#include<string>
#include"gym.h"

GYM::GYM()
{

}

GYM::~GYM()
{

}

// class GYM::GymError
// {
//     public:
//     GymError()
//     {}

//     ~GymError()
//     {}
    
//     void show_error()
//     {
//         std::cout
//         <<"Exception/Error Handeling!"
//         << 
//         std::endl;
//     }

//     private:
//     int error;
// };

void GYM::initiate_error()
{
    throw GymError();
}   

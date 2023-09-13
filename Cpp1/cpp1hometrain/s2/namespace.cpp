#include<iostream>
    
    //NOTE: (not recommended to do that, to prevent conflicts.)
//using namespace std;

//namespace creation: it's a accessed global space.
        //A Space: is a access machnism to global variable
namespace sonn{

    int altermust = 27;
    int altermhmud = 26;
    int alterrhman = 25;
}

    int altermust = 40;

int main(){

    //Compile-time, no space consumed or allocated by this exp.
    constexpr int alter=20;

    //alter von Freunden.
    int altermhmud = alter +7;
    int alterismail = alter+8;  
    //int altermust = 0;


    //Drucken von Angabe.
    std::cout<< "Das ALter Mhmuds ist: "<< altermust <<std::endl;

    return 0;
}
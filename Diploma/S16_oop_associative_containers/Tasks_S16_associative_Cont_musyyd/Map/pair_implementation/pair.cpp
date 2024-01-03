//pair class template implementation
#include<iostream>
#include "pair.h"

int main()
{
    ASsociated::pair <std::string , int> Salah ( "Muhammad Salah" , 11 );
    ASsociated::pair <std::string , int> Salah_clone ( Salah );

    Salah.print();
    Salah_clone.print();

    ASsociated::pair <std::string , int> Haaland ( ASsociated::pair <std::string , int>("Erling Haaland" , 9) );
    Haaland.print();
    Haaland.resetSecond(13);
    Haaland.print();

    std::string ozilName ("Mesut Ozil"); int shirtNumber = 7;
    ASsociated::pair <std::string , int> Ozil ( ASsociated::pair <std::string , int>( ozilName , shirtNumber) );
    Ozil.print();
    return 0;
}
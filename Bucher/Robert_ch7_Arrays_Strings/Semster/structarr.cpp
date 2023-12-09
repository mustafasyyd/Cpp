#include<iostream>
#include<array>
#include<string>


struct Fache
{
    std::string embddsys;
    std::string deutsch;
    std::string embddlinux;
};

class Distance
{
    public:
        double feet,
               inch;
};

int main(int argc , char** argv)
{
    constexpr int BEWERBUNGEN{4},
                  MESSUNGEN{2};

    std::array<Fache,BEWERBUNGEN> firmen;

    std::array<Distance,MESSUNGEN> distance;

    for( auto& el : firmen )
    {
        std::cout 
        << "Geben sie die dre Fache ein: ";
        
        std::cin  
        >> el.embddsys
        >> el.deutsch
        >> el.embddlinux;
        
        std::cout 
        << 
        std::endl;
    }

    for( auto& el : firmen )
    {
        std::cout << el.embddsys
                  << el.deutsch
                  << el.embddlinux
        <<
        std::endl;
    }

    return 0;

}
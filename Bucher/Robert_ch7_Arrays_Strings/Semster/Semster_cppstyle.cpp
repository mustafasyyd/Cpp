#include<iostream>
#include<iomanip>
#include<array>

// #define SEMESTER 3
// #define FACH 3

int main(int argc , char** argv)
{
    constexpr int FACH{3} 
                , SEMSTER{3};
    std::array< std::array<double , FACH> , SEMSTER > studium;
    int s{0} , f{0};

    for(s=0; s<SEMSTER; s++)
    {
        for(f=0; f<FACH; f++)
        {
            std::cout << "Geben Sie einen Wert fur SEMESTER ein " << s+1
                      << ", FACH " << f+1 << ":  ";
            std::cin >> studium[s][f];
        }
    }

    std::cout << "\n\n";
    std::cout << "--------------------------FACH-------------------------------\n";
    std::cout << "                    1              2             3";

    for(s=0; s<SEMSTER; s++)
    {
        std::cout<< "\nSEMESTER " << s+1;
        
        for(f=0; f<FACH; f++)
        {
            std::cout << std::setiosflags(std::ios::fixed)
                      << std::setiosflags(std::ios::showpoint)
                      << std::setprecision(2)
                      << std::setw(10)
                      << f+1;
            std::cout <<  studium[s][f];
        }
    }
    std::cout << "\n-----------------------------------------------------------\n";

    return 0;
}
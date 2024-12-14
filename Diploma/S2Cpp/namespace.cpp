#include<iostream>
    
    //NOTE: (not recommended to do that, to prevent conflicts.)
//using namespace std;

/*
    Namespace creation: it's an accessed global space.
    A resolution operator :: is an access machnism to global variable.
*/

using std::endl;

namespace Alter{
    int altermust    = 27   ;
    int altermhmud   = 26   ;
    int altermansour = 26   ;
    int alterrhman   = 25   ;
}

int altermust       = 17    ;


int main(){
    //Resolved at compile time, no mem section allocated for it, replaced by its value.
    constexpr int alter = 20    ;


    //alter von Freunden.
    int alterismail = alter + 8 ;   //alter ist ersetzt zur compile Zeit.
    // int altermust = 98;



    //Drucken von Angabe.
    std::cout << "Das ALter Mustafa ist: " << altermust << endl;
    std::cout << "Das ALter Mustafa ist: " << Alter::altermust << endl;
 
    return 0;
}
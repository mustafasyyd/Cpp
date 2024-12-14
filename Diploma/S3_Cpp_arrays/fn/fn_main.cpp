#include <iostream>
#include "fn.h"

/*
*Function in cpp
*   coded by: mustafa.syyd
*/


int main(){ 

    std::string s;

    name_usr::promptfn(s);

    name_usr::printfn(s);

    //fn that is different from name_usr namespace fn
    //printfn(s);

    return 0;
}
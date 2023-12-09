#include <iostream>
/* *Comments cpp training file*
*   checking the comments conditions
*   where compile error happens
*/

/*
*  /*nested comment gives compiler error, like this */
//*/

int main(){

    // ostream object (cout), which is the standard output stream
    std::cout<<"Comments cpp training file"<<std::endl;

    //
    //std::cout<<"/*";
    //std::cout<<"*/";

    //error
    //std::cout<</* "*/" */;

    //non-error
    std::cout<</* "*/" /* "/*" */;

    return 0;
}
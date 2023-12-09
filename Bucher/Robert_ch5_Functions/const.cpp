#include <iostream>

/**
 * 'const' function argument
 * 'const' outside fn argument
 * 
 * @file: const.cpp
 * @author: mustafa.syyd
 * 
*/

int statements = 89;

void Set_Statements(int state)
{
    statements = state;
}

void Set_Statements_ref(const int& state)
{
    statements = state;
}


int& Set_Statements_byref()
{
    return statements;
}

int Get_Statements() // const (err: as it is used for a class member function)
{
    return statements;
}

int main(){

    int state = 5450;

    std::cout<< "Statements number: "<< Get_Statements() <<std::endl;

    Set_Statements(700);
    std::cout<< "Statements number: "<< Get_Statements() <<std::endl;

    Set_Statements_ref(state);
    std::cout<< "Statements number: "<< Get_Statements() <<std::endl;

    Set_Statements_byref() = 1990;
    std::cout<< "Statements number: "<< Get_Statements() <<std::endl;


    return 0;
}
//rvalue.cpp

#include<iostream>
#include <vector>
#include <string.h>
#include <array>

using namespace std;

void Printname( string& name )    //................... lvalue reference
{
    cout<< "...lvalue reference...\n";
    cout<< "Name: "<< name <<endl;
}

void Printname( string&& name )   //...................  rvalue reference
{
    cout<< "...rvalue reference...\n";
    cout<< "Name: "<< name <<endl;
}


int main()
{   
    string student1 ("mustafa sayed");

    string student2 ("ahmd madie");

    Printname(student1);
    Printname(student2);

    Printname(student1 + student2);

    
    Printname("mhmud syyd");




    return 0;
}
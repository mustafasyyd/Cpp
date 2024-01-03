#include<iostream>
using namespace std;


int main()
{
    int *raw_ptr = new int;

    *raw_ptr = 12;

    cout<< "raw pointer value inside: "<<raw_ptr<<endl;
    cout<< "raw pointer indirection: "<<*raw_ptr<<endl;

    int* p = raw_ptr;
    cout<< "pointer to heap value inside: "<<p<<endl;
    cout<< "pointer to heap indirection: "<<*p<<endl;

    
    int*& p_ref = raw_ptr;
    cout<< "ref pointer to heap value inside: "<<p_ref<<endl;
    cout<< "ref pointer to heap indirection: "<<*p_ref<<endl;


    delete raw_ptr;                      /// location (new int) is deleted and garbage value is existed afterwards
    cout<< "Raw pointer deleted\n";

    cout<< "raw pointer value inside: "<<raw_ptr<<endl;         //pointer keeps address 
    cout<< "raw pointer indirection: "<<*raw_ptr<<endl;         //but heap is deleted and is garbage

    cout<< "pointer to heap value inside: "<<p<<endl;           //pointer keeps address
    cout<< "pointer to heap indirection: "<<*p<<endl;           //but heap is deleted and is garbage

    cout<< "ref pointer to heap value inside: "<<p_ref<<endl;   //pointer keeps address
    cout<< "ref pointer to heap indirection: "<<*p_ref<<endl;   //but heap is deleted and is garbage


    return 0;
}
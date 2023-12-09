#include<iostream>
using namespace std;


int main()
{
    double *ptr = new double;
    *ptr= 3.1454; 
    
    cout<< "raw pointer value inside: "<<  ptr <<endl;
    cout<< "raw pointer indirection: " << *ptr <<endl;

   
    //keeps the address inside but heap assigned location (new int) is deleted and garbage value is existed afterwards
    delete ptr;                         //thought what is the meaning of delete and it raw ptr still point to heap. (or it is undefined behavoir)
    cout<< "Raw pointer deleted\n";

    //raw ptr still associated to heap allocated mem. 
    *ptr = 99.9;
    cout<< "raw pointer value inside: "<<  ptr <<endl;
    cout<< "raw pointer indirection: " << *ptr <<endl;
    

    return 0;
}
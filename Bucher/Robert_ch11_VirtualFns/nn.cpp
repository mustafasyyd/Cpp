#include<iostream>
using namespace std;

int R_age=12;

int& GetAge(int age){
    int* new_age = & R_age;
    *new_age = age * R_age;
    return (R_age);
}

//invalid conversion from 'int*' to 'int' [-fpermissive]


int main(){

    cout<<R_age<<endl;
    cout<< GetAge(2)<<endl;
    cout<<R_age<<endl;

    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>

void Implement ( void (*ptrFn) (int) )
{
    int GPA = 3;
    ptrFn( GPA );
}

void Print (int age)
{ std::cout << age << std::endl; }

int main() {
    
    int age = 26;
    Implement( Print );
    
    return 0;
}
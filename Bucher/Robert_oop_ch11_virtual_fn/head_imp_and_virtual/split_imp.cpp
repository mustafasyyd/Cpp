#include<iostream>
#include "split.h"
using namespace std;

void A::split()  // 'virtual' keyword is always  written only in the header file
{
    cout<<"Split A\n";
}

void B::split()
{
    cout<<"Split B\n";
}

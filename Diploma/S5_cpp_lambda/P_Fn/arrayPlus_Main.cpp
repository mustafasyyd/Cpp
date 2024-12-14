/** 
 * 
 * @file  : arrayPlus_Main.cpp
 * @author: mustafa.syyd
 * @date  : 15.7.2023\
 * 
*/
#include <iostream>
#include "arrayPlus.h"

int main()
{
    int (*fn_ptr)() = &Get_size;
    int size = fn_ptr();
    int a[size];
    
    Get_array(a,size);
    Print_array(a,size);

    return 0;
}
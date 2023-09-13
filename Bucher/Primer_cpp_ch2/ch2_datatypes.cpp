#include <iostream>
/*
 * < testing char data types: char, char16_t, char32_t.
 *    checking addresses  of char in memory,
 *    and endianness or (byte order) in mem. >
 * 
 * @file datatypes.cpp
 * @Author: mustafa.syyd
*/

using std::cout;
using std::endl;

int main(){

    // testing char data types: char, char16_t, char32_t.
    char c1 = 'a';
    char16_t c16_t = 'b';
    char32_t c32_t = 'c';

    //printing data to stdout.
    cout << "----------------------------------------------- "<< endl; 
    cout << "C1   : " << c1 
                        << "    Size of char    : " << sizeof(c1) << endl;
    
    cout << "c16_t: " << c16_t 
                        << "   Size of char16_t: " << sizeof(c16_t) << endl;
                        
    cout << "c32_t: " << c32_t 
                        << "   Size of char16_t: " << sizeof(c32_t) << endl;
    
    cout << "----------------------------------------------- "<< endl;

//---------------------------------------------------------------------

    //checking addresses of char in memory
    char c_en1 = 'a';
    char c_en2 = 'b';
    char c_en3 = 'c';
    
    printf("char             : %c\n", c_en1);
    printf("char ASCII       : %d\n", c_en1);
    printf("char address hx  : %hx\n", &c_en1);
    printf("char address hx  : %hx\n", &c_en2);
    printf("char address hx  : %hx\n", &c_en3);
    cout<< "------------------------------------ "<< endl;

//---------------------------------------------------------------------
    // int , short, long, long long , float, double, long double.
        //long long --> 64 bits <8 byte>
        
        long long ll= 0x123456789abcdef;
        cout << sizeof(ll) << endl;

        long long  *p1 = &ll+0;
        long long  *p2 = &ll-1;
        long long  *p3 = &ll-2;

        printf(" %hx ", *p1);
        printf(" %hx ", *p2);
        printf(" %hx ", *p3 );

    return 0;
}
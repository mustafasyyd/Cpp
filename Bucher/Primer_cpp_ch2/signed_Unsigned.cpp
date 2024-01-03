#include <iostream>

/*                 ... [EX. 2.4 "primer cpp"] ...
  *   < Write a program to check whether your predictions were correct.
  *     If not, study this section until you understand what the problem is. >
  * 
 * @file signed_Unsigned.cpp
 * @Author: mustafa.syyd
*/

using std::cout;
using std::endl;

namespace s1{
    int SizeOf (char *name){
         
         cout<< "sizeof(name)   : " << sizeof(name) << endl;
         cout<< "sizeof(name[0]): " << sizeof(name[0]) << endl;
         return sizeof(name) / sizeof(name[0]);
         
         }
}

using s1::SizeOf;

int main(){

    unsigned u =1;
    int a =2;

    cout<< "unsigned value u        : " << u << endl;
    cout<< "sizeof unsigned datatype: " << sizeof(u) << endl;


    cout<< "integer value  a   : " << a << endl;
    cout<< "sizeof int datatype: " << sizeof(a) << endl;

    bool eq = sizeof(u) == sizeof(a);
    char arr_c[] = "is unsigned == int ?: ";
    
    cout<< "---------------------------------------------------------" << endl;
    
    cout << std::boolalpha;
    cout<< "is unsigned == int ?: "<< eq<< endl;
    printf("%s%d\n", arr_c, eq);
    
    cout<< "---------------------------------------------------------" << endl;

    /* ------------------------------------------------------------------
         //check whether your predictions about unsingned, signed 
                            // and their operations were correct */

        char name1[] = "mustafa";
        char name2[] = {'m', 'u', 's', 't', 'a', 'f', 'a'};
        char name3[] = {'m', 'u', 's', 't', 'a', 'f', 'a', '\0'}; 

/*
        int s1 = sizeof(name1) / sizeof(name1[0]);
        int s2 = sizeof(name2) / sizeof(name2[0]);
        int s3 = sizeof(name3) / sizeof(name3[0]);
*/
    //i want to ref to a ptr , like ref to var.
        cout<< SizeOf(name1) << endl;
        cout<< SizeOf(name2) << endl;
        cout<< SizeOf(name3) << endl;

    return 0;
}
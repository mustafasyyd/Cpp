#include <iostream>
/**
 * 
 * @file fn_ptr.cpp
 * @author mustafa.syyd
*/

void divide(int a, int b)
{
    std::cout
    << a / b 
    <<std::endl;
}
void mul(int a, int b)
{
    std::cout
    << a * b 
    << std::endl;
}
void Call_fn(void (*fn_ptr)(int, int))
{
    fn_ptr(40, 20);
}

int main()
{
    Call_fn (&mul);     //with &  (gib die addresse)    
    Call_fn (divide);     //oder ohne sie, egal, <was soll's!>

// ---------------------------------------------- ---------------------------------// 
// you have two way to Ptr to fn:
       // [1] two lines
    void (*fn_ptr_001)( void (*fnptrarg)(int, int) );  //pointer to function with argument <pointer to fn>
    fn_ptr_001 = Call_fn;
// ------------------------------------------
           // [1] one line
    void (*fn_ptr_002)( void (*fnptrarg)(int, int) ) = Call_fn;  //pointer to function with argument <pointer to fn>
// ---------------------------------------------- ---------------------------------//

fn_ptr_001(&mul);
fn_ptr_002(&mul);
    

// void (*fn_ptr_000) (int,int) ppr = Call_fn;
    
    return 0;

}
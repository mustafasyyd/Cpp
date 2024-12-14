#ifndef RECHNER_H
#define RECHNER_H

namespace calc
{
    //prototypes, body or declarations of functions.
    int add(int x, int y); //add two numbers.
    int sub(int x, int y); //subtract two numbers.
    int mul(int x, int y); //multiply  two numbers.
    int div(int x, int y); //divide two numbers.
    int mod(int x, int y); //modulus two numbers. 
    void GetResult(int result); // print the result.
    void DoArithmetic(char op, int a, int b);
}


#endif // RECHNER_H
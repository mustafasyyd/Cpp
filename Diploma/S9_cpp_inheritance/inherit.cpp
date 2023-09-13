#include <iostream>
#include <vector>

/**
 * 
 * 
 * @file ptr_ref.cpp
 * @author: mustafa.syyd
*/

class Complex
{
    public:
    Complex(float i=0, float j=0) : real(i), img(j)
    {
        std::cout<< "Real number: " << "     "
                 << "Imaginary number: " <<std::endl;
    }
    
    Complex operator+ (Complex& c)
    {
        Complex result;
        result.real = this->real + c.real;
        result.img = this->img + c.img;
        return result;
    }

    void Print_complex_num()
    {
        std::cout<< "i: "<< this->real<< "  "
                 << "img: "<<this->img<<std::endl;
    }

    private:
    float real;
    float img;
};

int main(){

    Complex c1 (1.2 , 3.2);
    c1.Print_complex_num();

    Complex c2 (4.5 , 4.8);
    c2.Print_complex_num();

    Complex c3 = c1 + c2;
    c3.Print_complex_num();
    return 0;
}
/*
uml relation
composite pattern
template>
*/
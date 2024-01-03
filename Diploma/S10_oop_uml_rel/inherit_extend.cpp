/**
 * 
 * 
 * @file ptr_ref.cpp
 * @author: mustafa.syyd
*/

#include <iostream>
#include <ostream> //???
#include <vector>

class Complex
{
    public:
    Complex(float i=0, float j=0) : real(i), img(j) {}
    
    Complex operator + (Complex& c)
    {
        Complex result;

        result.real = this->real + c.real;
        result.img = this->img + c.img;
        
        return result;
    }

    void Print_complex_num()
    {
        std::cout<< "i("<< this->real<< ")  "
                 << "j("<<this->img<< ")\n";
    }

    friend std::ostream& operator<<(std::ostream& out, Complex const& complex);

    private:
    float real;
    float img;
};

std::ostream& operator<<(std::ostream& out, Complex const& complex){
    out<< complex.real << " + i" << complex.img;
    return out;
}


int main(){

    Complex c1 (1.2 , 3.2);
    c1.Print_complex_num();

    Complex c2 (2.6 , 4.5);
    c2.Print_complex_num();


    Complex c3 = c1 + c2;
    c3.Print_complex_num();
    
    std::cout<<c3;

    return 0;

}
/*
uml relation
composite pattern
template>
*/
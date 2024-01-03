#include <iostream>
/**
 * << using 'Console Graphics lite' library
 *      to draw circles, which are dealt as 
 *                          Graphics objects >>
 *
 * @file circles.cpp
 * @author: mustafa.syyd
*/

class circles{
    public:
    //circles(); //fall nicht existent, und macht das [circles c1;]
                                       //der parameterizt ctor unten wirkt
    circles(double dia=10); 
    double& Set_diameter();
    double Get_diameter();
    
    private:
    double diameter;
};

    //circles::circles(): diameter(0) {}

    circles::circles(double dia) : diameter(dia) {}
    
    double& circles::Set_diameter(){
        return diameter;
    }
    double circles::Get_diameter(){
        return diameter;
    }

int main(){

    circles c1(12.5); //parameterized constructor.
    
    circles c_test;

    circles c2= c1; //copy all obj values.

    circles c3(c1); //default copy constructor.
                //while we cannot do that c3 = c1;

    std::cout<< "Diamaeter1= " <<c1.Get_diameter() << " meters" <<"\n";
    std::cout<< "Diamaeter_test= " <<c_test.Get_diameter() << " meters" <<std::endl;

    std::cout<< "Diamaeter2= " <<c2.Get_diameter() << " meters" <<std::endl;

    std::cout<< "Diamaeter3= " <<c3.Get_diameter() << " meters" <<std::endl;

    c3.Set_diameter()=25;
    std::cout<< "Diamaeter3= " <<c3.Get_diameter() << " meters" <<std::endl;

    return 0;
}
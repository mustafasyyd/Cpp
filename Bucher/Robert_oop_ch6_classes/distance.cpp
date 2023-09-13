#include <iostream>

class Distance{
    public:
    
    Distance() :feet(0), inch(0) {}
    Distance(double ft) : feet(ft) {}

    void set_feet(double ft){
        feet = ft;
    }
    double  Get_feet(){
        return feet;
    }
    double  Calc_inch(){
        return feet*12;
    }

    Distance Copy_Dist( Distance dist){
        Distance temp;
        temp.feet = this->feet + dist.feet;
        temp.inch = this->inch + dist.inch; 
        return temp;
    }

    private:
    double inch;
    double feet;

};


int main(){

    Distance dist1(2);
    std::cout<< dist1.Calc_inch() <<std::endl;
    
    Distance dist2(dist1);
    std::cout<< dist2.Calc_inch() <<std::endl;
    
    Distance dist3=dist2;
    std::cout<< dist3.Calc_inch() <<std::endl;

    Distance dist4;
    dist4 = dist1.Copy_Dist(dist2);
    std::cout<< "Feet: " <<dist4.Get_feet() << "  - inch:" <<  dist4.Calc_inch() <<std::endl;

    
    return 0;
}
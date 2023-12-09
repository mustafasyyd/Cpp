//strategy design pattern, part of behavioral design pattern

#include<iostream>
using namespace std;


class ElecMotor{
    public:
    ElecMotor( int w ) : watt(w) {}
    virtual ~ElecMotor() {}

    virtual void info_status() = 0;
    
    protected:
    float watt;
};

class Induction : public ElecMotor{
    public:
    Induction( int w ) : ElecMotor(w) {}

    void info_status(){
        cout<< "Induction motor, Wattage is: "<< watt <<endl;
    }
};

class DC : public ElecMotor{
    public:
    DC( int w ) : ElecMotor(w) {}

    void info_status(){
        cout<< "DC motor, Wattage is: "<< watt <<endl;
    }
};


class ElecMachine{
    public:
    ElecMachine( ElecMotor *em) : elecMotor(em) {}  //aggregation

    void show_nameplate(){
        elecMotor->info_status();
    }

    private:
    ElecMotor* elecMotor;
};

int main(){

    Induction ind(500);
    ind.info_status();

    DC dc(320);
    dc.info_status();

    ElecMachine emc(&ind);
    emc.show_nameplate();

    
    return 0;
}
#include<iostream>
#include "motors.h"
using namespace std;


ElecMotor::ElecMotor( int w ) : watt(w) {}
virtual ElecMotor::~ElecMotor() {}

virtual void ElecMotor::info_status(){}


Induction::Induction( int w ) : ElecMotor(w) {}

void Induction::info_status(){
        cout<< "Induction motor\n";
        cout<< "Wattage is: "<< watt <<endl;
}

DC::DC(int w) : ElecMotor(w) {}

void DC::info_status(){
        cout<< "DC motor\n";
        cout<< "Wattage is: "<< watt <<endl;
}


ElecMachine::ElecMachine( ElecMotor *em) : elecMotor(em) {}

void ElecMachine::show_nameplate(){
        elecMotor->info_status();
}

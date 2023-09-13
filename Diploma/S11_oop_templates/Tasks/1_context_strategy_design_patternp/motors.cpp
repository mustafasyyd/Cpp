#include<iostream>
#include "motors.h"
using namespace std;


int main(){

    Induction ind1(500);
    DC dc1();

    ElecMachine emc1(&ind1);
    emc1.show_nameplate();

    
    ElecMachine emc2(&dc1);
    emc2.show_nameplate();

    
    return 0;
}
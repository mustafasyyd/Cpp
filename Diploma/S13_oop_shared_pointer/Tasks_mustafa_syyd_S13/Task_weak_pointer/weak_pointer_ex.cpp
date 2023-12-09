/**
 *      .............. < Weak pointer > ..............
 * 
 * @file: weakpointer.cpp
 * 
*/

#include<iostream>
#include<memory>

using namespace std;

class ECU_motor;

class ECU_battery
{
    public:
         //ECU_battery (ECU_motor* ecu_m = nullptr ) : ptr(ecu_m)     {}
        ~ECU_battery () {}
        
        void showStatus()   {}

        void poinTo ( shared_ptr<ECU_motor> p )
        {
            this->ptr = p;
        }

    private:
        weak_ptr<ECU_motor> ptr;
        
};

class ECU_motor
{
    public:
        // ECU_motor (ECU_battery* ecu_m = nullptr ) : ptr(ecu_m)     {}
        ~ECU_motor ()  {}
        
        void showStatus()   {}

        void poinTo ( shared_ptr<ECU_battery> p )
        {
            this->ptr = p;
        }

    private:
        weak_ptr<ECU_battery> ptr;
        

};



int main()
{
    shared_ptr<ECU_battery> ptr_battery ( new ECU_battery() );
    shared_ptr<ECU_motor> ptr_motor ( new ECU_motor() );

    ptr_battery->poinTo(ptr_motor);
    cout<< "Count: "<<ptr_battery.use_count()<<endl;

    ptr_motor->poinTo(ptr_battery);
    cout<< "Count: "<<ptr_battery.use_count()<<endl;
    
    return 0;
}
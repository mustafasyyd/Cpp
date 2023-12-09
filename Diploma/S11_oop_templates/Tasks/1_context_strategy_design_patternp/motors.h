#ifndef _MOTORS_
#define _MOTORS_

#include<iostream>
using namespace std;


class ElecMotor{
    public:
    ElecMotor( int w );
    virtual ~ElecMotor();

    virtual void info_status();
    
    protected:
    float watt;
};

class Induction : public ElecMotor{
    public:
    Induction( int w );
    void info_status();
};

class DC : public ElecMotor{
    public:
    DC( int w );
    void info_status();
};


class ElecMachine{
    public:
    ElecMachine(ElecMotor *em);

    void show_nameplate();

    private:
    ElecMotor* elecMotor;
};

#endif  //_MOTORS_
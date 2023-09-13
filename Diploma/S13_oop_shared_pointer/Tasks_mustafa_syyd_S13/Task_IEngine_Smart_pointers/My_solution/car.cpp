/**
 *  ................ <  Cars & Engines model  > ................
 *      [Edited version]: makeing the engines shared by as many number as wanted of cars upon production 
 * 
 * @file: car.cpp
*/

#include "car.h"
#include "v7Engine.h"
#include "v8Engine.h"

using namespace std;

void Car::Drive()
{
    m_engine->Start();
    //Drive
}
void Car::Stop()
{
    m_engine->Stop();
}


int main()
{
    shared_ptr<V7Engine> engine_v7 ( new V7Engine() );

    Car MiniCoper(engine_v7);  //Dependency Injection
    cout<<" Mazcoper  engine_v7:    ";
    MiniCoper.Drive();


    Car MazCoper(engine_v7);  //Dependency Injection
    cout<<" Mazcoper engine_v7:     ";
    MiniCoper.Drive();
   
    Car RyderCar ( MakeV8Engine() );
    cout<<" RyderCar engine_v8:     ";
    RyderCar.Drive();
    
 
    return 0;
}
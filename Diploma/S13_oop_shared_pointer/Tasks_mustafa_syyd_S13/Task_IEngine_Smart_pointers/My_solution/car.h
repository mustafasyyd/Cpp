#pragma once
#include "IEngine.h"


class Car
{
public:
    Car( std::shared_ptr<IEngine> engine )
        : m_engine(engine)  {}

    void Drive();
    void Stop();
private:
    std::shared_ptr<IEngine> m_engine; 
};
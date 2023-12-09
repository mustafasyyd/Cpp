#include "IEngine.h"
#include <iostream>

class V7Engine : public IEngine
{
    public:
        void Start() override
        {
            std::cout << "Start V7 Engine \n";
        }
        
        void Stop() override 
        {
            std::cout << "Start V7 Engine \n";
        }
};
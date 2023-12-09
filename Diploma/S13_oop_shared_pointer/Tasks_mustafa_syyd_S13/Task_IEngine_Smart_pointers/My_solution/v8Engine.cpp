#include "v8Engine.h"
#include <iostream>

void V8Engine::Start()  
{
    std::cout << "Start V8 Engine\n";   /* start the engine */ 
}
void V8Engine::Stop()  
{ 
    std::cout << "Stop V8 Engine\n";    /* stop the engine */
}

std::shared_ptr<IEngine> MakeV8Engine()
{
    return std::make_shared<V8Engine>();
}

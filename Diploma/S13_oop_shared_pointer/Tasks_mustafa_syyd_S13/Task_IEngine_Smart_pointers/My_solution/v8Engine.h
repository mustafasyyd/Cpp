#include "IEngine.h"

class V8Engine : public IEngine
{
    void Start() override ;
    void Stop() override ;
};
std::shared_ptr<IEngine> MakeV8Engine();
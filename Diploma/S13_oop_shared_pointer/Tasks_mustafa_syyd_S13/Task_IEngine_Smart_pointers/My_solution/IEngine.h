#pragma once
#include <memory>

struct IEngine
{
    public:
        virtual void Start() = 0;
        virtual void Stop() = 0;
        virtual ~IEngine() = default;
};
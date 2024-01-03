#ifndef  GYM_H
#define      GYM_H

#include<string>

class GYM
{
    public:
    GYM();
    ~GYM();
    
    class GymError
    {
        // public:
        // GymError();
        // ~GymError();
        // void show_error();

    };

    void initiate_error();

    private:
    std::string name;
};

#endif      /*GYM_H*/
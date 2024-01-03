// Online C++ compiler to run C++ program online
#include <iostream>
#include <typeinfo>
using std::cout
    , std::endl;

class Log
{
    public:
        enum Level : char{ ERROR='E', WARNING='W' , FAIL='F' , INFO='I' };
        
        void show_level(Level lvl)
        {
            switch(lvl)
            {
                case 'E':
                    cout << level << ": There is an Error!"  << endl;
                    break;
                case 'W':
                    cout << level << ": Warning, watch out!" << endl;
                    break;
                case 'F':
                    cout << level << ": Failure occured" << endl;
                    break;
                case 'I':
                    cout << level << ": Information" << endl;
                    break;
            }
        }
        
    private:
        Level level=INFO;
};

enum num : char 
{
    a='a', 
    b    , 
    c    ,
    d    ,
    e    ,
    f
};

int main() 
{
    Log log;
    log.show_level(log.ERROR);
    log.show_level(Log::WARNING);
    
    
    // char x=f;
    // decltype(x) y=c ;
    // num c1=d;
    
    // if(c1==d)
    // {
    //     x=c1;
    //     cout << x << y << " Barcelona" << endl;
    // }
    // std::cout << typeid(x).name() << std::endl;
    // std::cout << c1 << std::endl;

    return 0;
}
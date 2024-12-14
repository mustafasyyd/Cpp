// Online C++ compiler to run C++ program online
#include <iostream>
#include <typeinfo>

using std::cout, std::endl;

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

enum Alphanumeric : char 
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
    Log log                     ;   //Create a log
    //SHow status level
    log.show_level(log.ERROR)   ;   //access through obj
    log.show_level(Log::WARNING);   //access through class
    log.show_level(Log::INFO)   ;   //access through object
    log.show_level(log.INFO)    ;   //access through obj
    
    // Create a character variable, store it in .data, char is assigned an enum var, the its value.
    char floor_char = f         ;
    //get type of x charachter and set as a type of new variable y, which is defined.
    decltype(floor_char) Cinnamon = c ;
    //create an object of enum "Alphanumeric".
    Alphanumeric alpha = a;
    
    if (alpha == a) 
    {
        floor_char = alpha;
        cout << "floor_char: " << floor_char
             << "\nalpha   : " << alpha << endl;
    }
    
    cout 
    << typeid(floor_char).name() 
    << " -> Means it is a character type" 
    << endl;
    
    cout 
    << alpha 
    << endl;

    return 0;
}
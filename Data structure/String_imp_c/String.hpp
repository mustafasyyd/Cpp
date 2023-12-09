#ifndef __String__
#define __String__

#include<cstring>
#include<iostream>


class String
{
    public:
        String();
        String(const char* s2);
        void show_data();
        void concat(String &s2);
        size_t get_len();

    private:
        enum {size=90};
        char str[size];
};


String::String()
{   
    str[0] = '\0';  
}

String::String(const char* s2)
{
    strcpy(str,s2);    
}
        
void String::show_data()
{   
    std::cout 
        << str << 
    std::endl;
}
        
void String::concat(String &s2)
{
    if(strlen(str)+strlen(s2.str) < size )
        strcat(str,s2.str);   
    else
        std::cout << "\nString too long\n";
}

size_t String::get_len()
{
    return strlen(str);
}

#endif  /* __String__*/

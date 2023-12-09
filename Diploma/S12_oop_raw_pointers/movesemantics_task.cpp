/**
 *  < ...Move Semantics and rvalue reference... >
 * 
 * @file: movesemantics.cpp
 * @author: mustafa.syyd
*/

#include<iostream>
extern "C" 
{
    #include<string.h>
}

using namespace std;

//Implementation of string (char array) data structur.
class cstring
{   
    public:
        cstring ();
        cstring (const char* s);        //one-arg ctor
        cstring (const cstring& cstr);   //copy ctor
        cstring(cstring&& rv_cstr);     //rvalue reference
        
        ~cstring()  
        { 
            delete[] strptr; 
        }

        void print();

    private:
        unsigned int size;
        char* strptr;
};

cstring::cstring () 
    : size(0) 
    , strptr (nullptr) 
{
        cout<<"\nempty string created\n"; 
}

cstring::cstring (const char* s)                  //one-arg ctor
{
    size = strlen(s);
    strptr = new char[size];
    memcpy(strptr, s , size);
}

cstring::cstring (const cstring& cstr)   //copy ctor
{
    this->size = cstr.size;
    strptr = new char[size];
    memcpy(strptr, cstr.strptr , size);
    cout<<"\ncopied\n";
}



cstring::cstring(cstring&& rv_cstr)      //rvalue reference
{
    this->size = rv_cstr.size;
    strptr = new char [size];
    memcpy(strptr, rv_cstr.strptr , size);
    rv_cstr.strptr = nullptr;
    cout<<"\nmoved\n";
}

void cstring::print()
{
    if( strptr != nullptr )
    {
        for(int it=0; it<size; it++)
        {
            cout<< *(strptr+it);
            /*
            if ( strptr[it] == " " )
                cout<<" ";*/
        }
        cout<<endl;
    }
}


class Position
{
    public:
        Position( const cstring& cs ) 
            : cstr(cs) {} 
        
        Position (cstring&& cs) 
            : cstr(move(cs)) {}  //rvalue casting

        void PrintPosition() 
        {  
            cstr.print(); 
        }

    private:
        cstring cstr;
};



int main()
{
    cstring eng("This is a professional employee");
    cout<<"\nEngineer: ";
    eng.print();

    cstring s;

    //copy eng into mah
    cstring bnk(eng);
    cout<<"\nBanker: ";
    bnk.print();
    
    cstring dev(static_cast<cstring&&>(bnk)); //move object eng to dev
    cout<<"\nDevelopper: ";
    dev.print();

    //Banker is empty
    cout<<"\nBanker: ";
    bnk.print();  //string object was emptied

    Position p(std::move(dev));
    cout<<"\nElement: ";
    p.PrintPosition();

    //Developper is empty
    cout<<"\nDevelopper: ";
    dev.print();

    
    Position pos(cstring("man is man"));
    pos.PrintPosition();
    
    return 0;
}
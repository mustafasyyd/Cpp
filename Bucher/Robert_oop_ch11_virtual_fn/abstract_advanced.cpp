/**
 * Abstract class
 * 
 * @file: abstract.cpp
 * @author: mustafa.syyd
*/
#include<iostream>
using namespace std;


class Parent
{
    public:
    //Parent(){}                       //Without def. ctor, no ERROR
    virtual ~Parent() {}             //must be written & with virual
    virtual void showStatus() = 0;   //pure virtual function
    void show_info(){
        cout<< "\t...info...\n";     //in abstract class you can write implementation inside body.
    }
};


class Child : public Parent
{
    public:
    /*Child() { //cout<< "Child called!\n";     //Without def. ctor, no ERROR
    } */                                        //if '}' commented, an ERROR: cannot declare variable 'd' to be of abstract type 'Child'
    ~Child() {cout<< "Child destructed!\n";
    }
    void showStatus()                //even without virual, you can override functions with the same name.
    {
        cout<< "Child number \n";
    }

    private:
    int child_number;
};


int main(){

    Child d;
    Parent *p = new Child();
    p->show_info();
    
    //sub sb1;
    //sb1.getMan();
   
    return 0;
}
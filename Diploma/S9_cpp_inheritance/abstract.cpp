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
    Parent(){}
    virtual ~Parent() {}    //must be written & with virual
    virtual void showStatus() = 0; //pure virtual function
    void show_info(){
        cout<< "\t...info...\n";
    }
};


class Child : public Parent
{
    public:
    Child() { cout<< "Child called!\n";}
    ~Child() {cout<< "Child destructed!\n";}
    void showStatus()
    {
        cout<< "Child number \n";
    }

    private:
    int child_number;
};

/*
class super
{
    public:
    super(){
       // cout<<"super\n";
    }
    virtual void getMan(){
        cout<<"man\n";
    }
};

class sub : public super
{
    public:
    sub() 
    {
        cout<<"sub\n";
    }
    virtual void getMan(){
        cout<<"manoOFchild\n";
    }
};
*/

int main(){

    Child d;
    Parent *p = new Child();
    p->show_info();
    
    //sub sb1;
    //sb1.getMan();


    
    return 0;
}
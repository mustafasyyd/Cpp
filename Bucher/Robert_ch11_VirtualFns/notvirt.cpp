/**
 * < classes derived from class, the same Fns without 'virtual' keyword >
 *
 * @file: notvirt.cpp
 * @author: mustafa.syyd
*/

#include<iostream>
using namespace std;

class Parent{
    public:
         void show(){ cout<< "\nParent";}    //override with ptrs using 'virtual'
        //void show(){ cout<< "\nParent";}          //no override with ptrs
};  

class ChildA : public Parent {
    public:
        void show(){ cout<< "\nChild A"; }
        void info(){ cout<< "\nName is Laith"; }
};

class ChildB : public Parent {
    public:
        void show(){ cout<< "\nChild B"; }
};



int main(){

    ChildA ca;
    ca.show();
    ca.info();

    //ptr of obj to its class type
    ChildA* pca;
    pca = &ca;
    pca->show();
    pca->info();

    //ptr of parent to child
    Parent* pp;
    pp = & ca;
    pp->show();
    pp->info();         //error: 'class Parent' has no member named 'info'
                                //compiler ignores ptr contents and get m_fn that matches the type
    
    /*Parent pp2(ca);
    pp2.show();*/


    //pp.parent::show()

    return 0;
}
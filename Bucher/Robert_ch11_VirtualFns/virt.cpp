/**
 * < classes derived from class, the same Fns using 'virtual' keyword >
 *
 * @file: virt.cpp
 * @author: mustafa.syyd
*/

#include<iostream>
using namespace std;

class Parents{
    public:
        virtual void show() const {                               //override with ptrs using 'virtual'
            cout<< "\nParents";                              //void show(){ cout<< "\nParent";}  ----> no override with ptrs
            }     
};  

class Father :  public Parents {
    public:
        void show() const { 
            cout<< "\nFather"; 
        }
};

class Mother :  public Parents {
    public:
        void show() const {
            cout<< "\nMother";
        }
};

class child : public Father {
    public:
         void show() const {
            cout<< "\nChild";
        }
};


int main(){

    Father f;
    f.show();

    //ptr of parent to child
    Parents* pp;
    pp = &f;
    pp->show();     

    child c;
    pp = &c;
    pp->show();  //no need for 'virtual' in Father class 

    //***********************************************************
    //ptr of obj to its class type
    /*Father* pf;
    pf = &f;
    pf->show();*/
    
    /**    .............. < Explanation > ..............
     * 
     * ERROR: 'class Parent' has no member named 'info'
     *
     * < compiler ignores ptr contents and get m_fn that matches the type. >
     * 
    */

    /*Parents pp2(ca);
    pp2.show();*/

    return 0;
}
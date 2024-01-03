#include<iostream>
#include <vector>
#include <string.h>
#include <array>

using namespace std;

template <typename Y>
class SmartPointer
{
    private:
        Y* smartptr;

    public:                               
        //instead [smartptr = new Y;] in default ctor, you can pass it in main().
        SmartPointer( Y* ptr = NULL) : smartptr(ptr) {}        //paramertrized ctor (1-arg ctor) 
        
        ~SmartPointer()                                 //destructor
        {
            delete smartptr;
        }                                   
        
        Y* operator+ (int& k )
        {
            return smartptr+k ; 
        }

        
        Y& operator* ()                                   //indirection operator overloading                    
        {
            return *smartptr;
        }

        Y* operator= (Y* p)
        {   
            return p;
        }

        Y* operator->()
        {
            return smartptr;
        }

//trial , not compiled to see truthiness or not ??? !!!!
        static SmartPointer MakeSmartPtr( Y* ptr )
        {
            SmartPointer<Y> s =  ptr ;
            return s;
        }
};


class Employee
{
    public:
        Employee(int id= 000)
            :mId(id) {}
        
        int getId()
        {
            return mId;
        }

    private:
        int mId;
};


int main()
{   
    vector<int> v = {12,27,322,421,598};
    SmartPointer<int> int_smp(&v[0]);

    SmartPointer<Employee> smart (new Employee(921));
    cout<< smart->getId()<<endl; 

    auto pointer = SmartPointer<Employee>::MakeSmartPtr(new Employee(1996));
    cout<< pointer->getId()<<endl;

    return 0;
}



/*
int main()
{   
    vector<int> v = {12,27,322,421,598};
    SmartPointer<int> int_smp(&v[0]);

    cout<< "Printing vector: ";
    for(int k=0 ; k < v.size() ; k++)
    {
        cout<< *(int_smp+k) << "  ";
    }
    cout<<endl;

    //--------------------------------------
    
    int heap_len=3;
    SmartPointer<int> (new int[heap_len]);
    for(int t=0 ; t>heap_len ; t++)
    {
        *(int_smp+t) = t;
    }
    
    cout<< "Printing Ptr to heap: ";
    for(int p=0 ; p < heap_len ; p++)
    {
       cout<< *(int_smp+p)<< "  ";
    }
    cout<<endl;

    //--------------------------------------



    return 0;
}*/
/**
 *      .............. < Weak pointer & cycling dependency > ..............
 * 
 * @file: weakpointer.cpp
 * 
*/

#include <iostream>
#include <memory>

class A
{
    private:    
        std::weak_ptr<A> aShared;

    public:
        
        A() 
        {
            std::cout<< "Created\n";
        }
        ~A()
        {
            std::cout<< "Destructed\n";

        }

        //set the the weak pointer
        void set_ptr( std::shared_ptr<A> ash )
        {   
            aShared = ash;
        }

};


int main()
{
    //pointer to A
    std::shared_ptr<A> sp1 = std::make_shared<A>();    
    
    //pointer to A
    std::shared_ptr<A> sp2 = std::make_shared<A>();

    sp1->set_ptr(sp2);
    sp2->set_ptr(sp1);
    
    //Cyclic dependency, solved by converting the class member shared_ptr to weak_ptr 

    //printing the count reference for each.
    std::cout<< sp1.use_count() <<std::endl;
    std::cout<< sp2.use_count() <<std::endl;
    
    return 0;
}
#include <iostream>
/**
 * Entdecken irgendwas beim 'CONST' member fn. 
 * new Class() heap dynamic allocation
 * inheritance ,reference as parameter to construcot
 * deligate constructor
 * copy constructor
 * 
 * @file train.cpp
 * @author: mustafa.syyd
*/

class Shoes
{
    public:
    Shoes() {}
    Shoes(std::string name , std::string type_of_use , int &size) 
                            : m_name(name) , m_type_of_use(type_of_use) ,m_size(size) {}
    
    Shoes(Shoes &s) : m_name(s.Get_name()) , m_type_of_use(s.Get_type_of_use()) , m_size(s.Get_size()) {}

    std::string Get_name() const;
    std::string Get_type_of_use() const;
    int Get_size() const;

    protected:
    std::string m_name;
    std::string m_type_of_use;
    int m_size;
};

std::string Shoes::Get_name() const
{
    return m_name;
}
std::string Shoes::Get_type_of_use() const
{
    return m_type_of_use;
}
int Shoes::Get_size() const
{
    // m_size=5; compilation_error
    return m_size;
}



class Nike: public Shoes
{
    public:
    Nike(std::string name , std::string type_of_use , int &size) : 
                                    Shoes(name , type_of_use, size) {} //deligate constructor
    Nike(Nike &n) : Shoes(n) {}

    private:
    int m_id;
};



int main()
{

    int size_1=34 , size_2=42;
    int new_size = size_1+size_2;

    Shoes s1("Classic","Work", size_1) ;
    Nike n1( "Nike" , "Sport" , size_2);

    std::cout<< "s1 " <<s1.Get_name() <<"  "<< s1.Get_type_of_use() << "_use  "<< s1.Get_size() <<std::endl;
    std::cout<< "n1 " <<n1.Get_name() <<"  "<< n1.Get_type_of_use() << "_use  "<< n1.Get_size() <<std::endl;

    Shoes *ptr_s_st = &n1; 
    Shoes *ptr_s_dy = new Nike("New Nike", "General" , new_size);
    
    std::cout<< "ptr_s_st "<<ptr_s_st->Get_name() <<"_ptr  "<< ptr_s_st->Get_type_of_use() << "_use  "<< ptr_s_st->Get_size() <<std::endl;
    std::cout<< "ptr_s_st "<<ptr_s_st->Get_name() <<"_ptr  "<< ptr_s_dy->Get_type_of_use() << " use  "<< ptr_s_dy->Get_size() <<std::endl;

    //copy constructor
    Shoes s2 = s1;
    std::cout<< "s2 " <<s2.Get_name() <<"_cpyd_s1_to_s2  "<< s2.Get_type_of_use() << " use  "<< s2.Get_size() <<std::endl;

    Shoes s3 (n1);    
    std::cout<< "s3 " <<s3.Get_name() <<"_cpyd_constr_s2_to_n1  "<< s3.Get_type_of_use() << " use  "<< s3.Get_size() <<std::endl;

    Nike n2 (n1);    
    std::cout<< "s3 " <<n2.Get_name() <<"_cpyd_constr_n1_to_n2  "<< n2.Get_type_of_use() << " use  "<< n2.Get_size() <<std::endl;


    Shoes s4 = n1;    
    std::cout<< "s4from_n1_child " <<s4.Get_name()<<std::endl;


    delete(ptr_s_st);
    delete(ptr_s_dy);

    return 0;
}

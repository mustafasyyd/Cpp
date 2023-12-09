#include <iostream>
#include "employee.h"

    employee::employee(){
        std::cout<< " default constructor" << std::endl;
        m_name = ("");
        m_salary=0;
        m_id=0;
    }

    employee::employee( std::string name ,int salary, int id){

        m_name=name;
        m_salary=salary;
        m_id= id;
    }

    employee::~employee(){
        std::cout<< "~destructor ist endlich hier!" << std::endl;
    }

    void employee::setname(std::string name){
        employee::m_name = name;
    }
    
    void employee::setsalary(int salary){
        employee::m_salary = salary;
    }
    void employee::setid(int id){
        employee::m_id = id;
    }
    
    std::string employee::getname(){
        return employee::m_name;
    }
    int employee::getsalary(){
        return employee::m_salary;
    } 
    int employee::getid(){
        return m_id;
    }
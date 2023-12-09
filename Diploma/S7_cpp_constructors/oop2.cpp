#include <iostream>
#include <vector>

/**
 * 
 * 
 * @file ptr_ref.cpp
 * @author: mustafa.syyd
*/

class employee
{

    public:

    employee(std::string, int , int &);
    void Set_salary(int);
    int Get_salary();

    private:
    std::string name;
    int id;
    int &salary;
};

class manager: public employee
{
    public:
    manager (std::string name, int id, int &salary) : employee(name, id, salary) {}
};

employee::employee (std::string name, int id , int &salary) : name(name), id(id), salary(salary)
{
    std::cout<< "employee is created." <<std::endl;
}

void employee::Set_salary(int salary)
{
        this->salary=salary;
}

int employee::Get_salary()
{
    return salary;
}

void Display_employees(std::vector <employee*> &employee_vec)
{
    for( auto emp : employee_vec)
    {
        std::cout<< "salary: "<< emp->Get_salary()<<std::endl;
    }
    
}

int main(){

    int salary=100;
/*
    employee syyd("mustafa", 111, salary);
    std::cout<< "employee salary: "<< syyd.Get_salary()<< std::endl;
*/
    employee *emp_manager = new manager("said", 001, salary);
    employee *emp_electronix = new manager("mustafa", 002, salary);

    std::vector <employee*> employee_vec;
    employee_vec.push_back(emp_manager);
    employee_vec.push_back(emp_electronix);
    
    Display_employees(employee_vec);

    return 0;
}

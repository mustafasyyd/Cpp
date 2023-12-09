#pragma once

#include <iostream>

class employee{
 
    public:
    employee();
    employee(std::string name ,int salary, int id);
    ~employee();

    void setname(std::string name);
    void setsalary(int salary);
    void setid(int id);

    std::string getname();
    int getsalary();
    int getid();


    private:
    std::string m_name;
    int m_salary;
    int m_id;

};
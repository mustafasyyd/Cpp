#include<iostream>

/**
 * < Return a function as a reference >
 * 
 * 
 * @file:retref.cpp
 * @author: mustafa.syyd
*/
/*
int salary;
int hoursperday;
int val=272;;

int& Set_Salary();
int* Set_Hours();
int Get_Inner_Value();
int* Ptr_Inner_Value();//comp-err: "address of local variable 'val' returned"
*/

class retref
{
private:
    mutable int salary;

public:
    retref(int salary);
    ~retref();

    void Set_Salary(int salary);
    int& Set_Salary();
    int Get_Salary();
    
    int& retref::Get_C_Salary() const{
        return salary; 
    } //qualifiers dropped in binding reference of type "int &" to initializer of type "const int"C/C++(433)

};

retref::retref(int salary) : salary(salary)
{
    std::cout<< "Constructor is called" <<std::endl;
}

retref::~retref()
{
    std::cout<< "Destructor is called" <<std::endl;
}

void retref::Set_Salary(int salary){
        this->salary = salary;
}

int& retref::Set_Salary(){
    return salary;
}

int retref::Get_Salary(){
    return salary;
}





int main(){
/*
    salary=2000; hoursperday=8;
    std::cout<< "Salary: " << salary << "  " << "Hours per Day: " << hoursperday <<std::endl;

    std::cout<< "Salary: " << Set_Salary() << "  " << "Hours per Day: " << *(Set_Hours()) <<std::endl;


    Set_Salary() = 9000; 
    *(Set_Hours()) =10;
    std::cout<< "Salary: " << salary << "  " << "Hours per Day: " << hoursperday <<std::endl;

    std::cout<< "Get inner value: " << Get_Inner_Value <<std::endl;
    std::cout<< "Get inner value: " << Ptr_Inner_Value() <<std::endl;
  */

    retref rtf1(5000);
    std::cout<< "First Salary: "<< rtf1.Get_Salary() <<std::endl;

    rtf1.Set_Salary(7500);
    std::cout<< "Second Salary: "<< rtf1.Get_Salary() <<std::endl;

    
    rtf1.Set_Salary()=12400;
    std::cout<< "Third Salary: "<< rtf1.Get_Salary() <<std::endl;
 
    rtf1.Get_C_Salary()=1700;
    std::cout<< "Fourth Salary: "<< rtf1.Get_C_Salary() <<std::endl;

    return 0;
}

/*
int& Set_Salary(){
    return salary;
}

int* Set_Hours(){
    return &hoursperday;
}


int Get_Inner_Value(){ 
    int val=7;
    return val;
}

int* Ptr_Inner_Value(){ //comp-err: "address of local variable 'val' returned"
    int val=7;
    return &val;
}
*/
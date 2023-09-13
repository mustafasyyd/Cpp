/*
 * [Program Description]: < employ model of managers, scintists, and laborers , 
                                            manager and scientists have educational background >
 * [ old Class Diagram ]: < Super class: Employee, from which Manager, Scientist and Laboerer classes derived,
                                             Manager and Scientist iherit educational background from Student class >  

 * .................< Aggregation relation concept >.................
 *  [Old implimentation]: < inheritance and FN overriding >
 *  [New implimentation]: < aggregation without inheritance > 
 * 
 * < @file: employ_enhanced.cpp >
 * < @author: mustafa.syyd > 
*/

#include<iostream>
using namespace std;

class Employee {
    public:
    void get_data_from_usr(){
        cout<<"\nEnter last name: ";  cin>>name;
        cout<<"\nEnter number   : ";  cin>>id;
    }
    void put_data() const{
        cout<<"\nName  :  "  << name;
        cout<<"\nId    :  "  << id;
    }

    private:  
        string name;
        unsigned long id;
};

class Student {
    public:
        void get_edu_from_usr(){
            cout<<"\nEnter name of school or university:      ";  cin>> school;
            cout<<"\nEnter the highst degree earned           ";
            cout<<"\n(Highschool, Bachelor's, Master's, PhD): ";  cin>> degree;
        }
        void put_edu() const{
            cout<<"\nSchool or University:  "<< school;
            cout<<"\nHighst degree earned:  "<< degree;
        }
    private:
    string school;
    string degree;
};

class Manager {
    public:
    void get_data_from_usr(){
        emp.get_data_from_usr();
        cout<<"\nEnter title    : ";  cin>> title;
        cout<<"\nEnter club dues: ";  cin>> club_dues;
        stu.get_edu_from_usr();
    }
    void put_data() const{
        emp.put_data();
        cout<<"\nTitle      :  "  << title;
        cout<<"\nClub dues  :  "  << club_dues;
        stu.put_edu();
    }

    private:
        string title;
        double club_dues;
        Employee emp;
        Student stu;
        
};

class Scientist {
    public:

    private:
        int pubs_num;
        Employee emp_sci;
        Student stdnt_sci;
};

class Laborer{
    private:
    Employee emp_lbr;
};

/*
class Foreman : private Laborer{
    public:
    void get_data_from_usr(){
        cout<<"\nEnter Quotas: "; cin>>quotas;
    }
    void put_data() const{
        Laborer::put_data();
        cout<<"\nQuotas: "<< quotas;
    } 
    private:
    float quotas;
};
*/



int main(){

    Manager mng;
    mng.get_data_from_usr();
    mng.put_data();

    return 0;
}
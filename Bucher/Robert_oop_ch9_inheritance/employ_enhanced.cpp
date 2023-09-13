/**
 * < employ model of managers, scintists, and laborers ,
 *              manager and scientists have educational background >
 * < Super class: Employee, from which Manager, Scientist and Laboerer classes derived,
 *                  Manager and Scientist iherit educational background from Student class >  
 * < exploring inheritance and FN overriding >
 * 
 * < @file: employ_enhanced.cpp >
 * < @author: mustafa.syyd > 
*/

#include<iostream>
using namespace std;

class Employee {
    public:
    void get_data_from_usr(){
        cout<<"\nEnter last name: "; cin>>name;
        cout<<"\nEnter number: ";    cin>>id;
    }
    void put_data() const{
        cout<<"\nName     :  "  << name;
        cout<<"\nId       :  "  << id;
    }

    private:  
        string name;
        int id;
};

class Student {
    public:
        void get_edu_from_usr(){
            cout<<"\nEnter School name: "; cin>> school;
            cout<<"\nEnter degree     : "; cin>> degree;
        }
        void put_edu() const{
            cout<<"\nSchool or University: "<< school;
            cout<<"\nDegree is           : "<< degree;
        }

    private:
    string school;
    string degree;

};

class Manager : private Employee , private Student {
    public:
        void get_data_from_usr(){
            Employee::get_data_from_usr();
            cout<<"\nEnter Title    :  ";    cin>>title;
            cout<<"\nEnter club Dues:  ";    cin>>club_dues;
            Student::get_edu_from_usr();
    }
        void put_data() const{ 
            Employee::put_data();
            cout<<"\nTitle    :  "  << title;
            cout<<"\nClub Dues:  "  << club_dues;
            Student::put_edu();
        }
    private:
        string title;
        int club_dues;
};

class Scientist : private Employee , private Student {
    public:
        void get_data_from_usr(){
            Employee::get_data_from_usr();            
            Student::get_edu_from_usr();
            cout<<"\nEnter Publications number :  ";    cin>>pubs_num;
    }
        void put_data() const{ 
            Employee::put_data();
            Student::put_edu();
            cout<<"\nPublications number    :  "  << pubs_num;
        }

    private:
        int pubs_num;
};

class Laborer : public Employee {};

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



int main(){

    /*Employee e1;
    e1.get_data_from_usr();
    e1.put_data();*/


    Manager m1;
    m1.get_data_from_usr();
    m1.put_data();

    return 0;
}
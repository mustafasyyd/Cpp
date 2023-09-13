/**
 * < employ model of managers, scintists, and laborers >
 * < Super class: Employee, from which Manager, Scientist and Laboerer classes derived >  
 * < exploring inheritance and FN overriding >
 * 
 * < @file: employ.cpp >
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

class Manager : public Employee {
    public:
        void get_data_from_usr(){
            Employee::get_data_from_usr();
            cout<<"\nEnter Title    :  ";    cin>>title;
            cout<<"\nEnter club Dues:  ";    cin>>club_dues;
    }
        void put_data() const{ 
            Employee::put_data();
            cout<<"\nTitle    :  "  << title;
            cout<<"\nClub Dues:  "  << club_dues;
        }
    private:
        string title;
        int club_dues;
};

class Scientist : public Employee {
    public:
        void get_data_from_usr(){
            Employee::get_data_from_usr();
            cout<<"\nEnter Publications number :  ";    cin>>pubs_num;
    }
        void put_data() const{ 
            Employee::put_data();
            cout<<"\nPublications number    :  "  << pubs_num;
        }

    private:
        int pubs_num;
};

class Laborer : public Employee {};



int main(){

    /*Employee e1;
    e1.get_data_from_usr();
    e1.put_data();*/


    Manager m1;
    m1.get_data_from_usr();
    m1.put_data();

    return 0;
}
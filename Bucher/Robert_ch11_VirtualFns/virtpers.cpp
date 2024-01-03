/**
 * 
 * < Persons model & virtual pure Function >
 *
 * @file: virtpers.cpp
 * @author: mustafa.syyd
*/

#include<iostream>
using namespace std;

class Person{
    public:
    void get_name_from_usr(){
        cout<<"\nEnter name: "; cin>> name;
    }

    void put_name(){
        cout<< "\nName: "<< name;
    }
    void info(){
        cout<<"\nPerson";
    }

    virtual get_data_from_usr() = 0;
    virtual bool isOutstanding() = 0;

    protected:
    string name;
};  

class Professor : public Person {
    public:    
        void info(){
            cout<<"\nProfessor";
        }
         get_data_from_usr(){
            Person::get_name_from_usr();
            cout<<"\nEnter number of publications: "; cin>>pubs_num;
         }
        bool isOutstanding(){
            return (pubs_num > 100)? true : false;
        }

    private:
        unsigned int pubs_num; 
};

class Student : public Person {
    public:
        void info(){
            cout<<"\nStudent";
        }
        get_data_from_usr(){
            Person::get_name_from_usr();
            cout<<"\nEnter GPa: "; cin>>gpa;
         }
        bool isOutstanding(){
            return (gpa > 3.5) ? true : false;
        }

    private:
        float gpa; 
};


int main(){

    Person* ptr_pers[100];
    int ind=0;
    char choice;

    do{
        cout<<"\n...Enter professor or student .... [p/s]"; cin>>choice;
        
        if(choice =='p') ptr_pers[ind++] = new Professor();
        else             ptr_pers[ind++] = new Student();

        cout<<"\n...Enter another...[y/n]"; cin>>choice;
    } while ( choice == 'y' );
    
    for(int j=0; j < ind; j++){
        ptr_pers[j]->get_data_from_usr();
        //ptr_pers[j]->info(); must be virtualed

        if( ptr_pers[j]->isOutstanding() )
            cout<<"This person is outstanding";
    }

    return 0;
}
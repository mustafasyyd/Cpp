/**
 * 
 * < virtual destructor >
 *
 * @file: virtdest.cpp
 * @author: mustafa.syyd
*/

#include<iostream>
using namespace std;

class Person{
    public:
    //virtual ~Person(){ cout<< "Person is being destruced!\n";}
    
    void info(){
        cout<<"\nPerson";
    }
    protected:
        int num;
};  

class Professor : virtual public Person {
    public:  
        //~Professor() { cout<< "Professor is being destruced!\n"; }

        void info(){
            cout<<"\nProfessor";
        }
        void set_num(int n){
            num = n;
        } 
        int get_num(){
            return num;
        } 
};

class Student : virtual public Person {
    public:
        //~Student() { cout<< "Student is being destruced!\n"; }

        void info(){
            cout<<"\nStudent";
        }
        void set_num(int n){
            num = n;
        } 
        int get_num(){
            return num;
        } 
};

class Test : public Professor ,  public Student {
    public:
        //~Test() { cout<< "Student is being destruced!\n"; }

        /*
        void info(){
            cout<<"\nStudent";
        } 
        */
        void set_num(int n){
            num = n;
        } 
        int get_num(){
            return num;
        } 
};


int main(){

    //Person* pPers = new Student;
    //delete pPers;

    Test t;
    //t.set_num(2);
    //cout<< "\nTest num: "<< t.get_num();
    t.Professor::info();
    t.Student::info();
    t.info();  //COMPILER ERROR: Ambiguity

    //Student s;
    //s.set_num(4);
    //cout<< "\nStudent num: "<< s.get_num();

    Professor p;
    //p.set_num(9);
    //cout<< "\nProf num: "<< p.get_num();

    return 0;
}
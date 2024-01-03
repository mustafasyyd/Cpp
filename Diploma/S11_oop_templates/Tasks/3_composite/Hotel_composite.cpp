/**
 * < Hotel Management  ---> Composition with inheritance (composite) >
 *    
 *                          ............. [  Description  ] ...........
 *    Hotel Management and department structure constisted of the Management, Reception, Housekeeping and the Engineering departments
 *      all departments under manager get tasks or mission only from the management.
 *      
 *                          .............. [    UML    ] .............
 *     classes: Manager that has derived classes, Receptionist ,Housekeeper and Engineer,
 *              the derived classes have strong containment of Manager.
 * 
 * @file: Hotel_composite.cpp 
 * @author: mustafa.syyd
*/


#include<iostream>
using namespace std;

class Manager
{
    public:
        virtual void showReport() {}

        //add task to the concerned department
        virtual void add_task(int& num , string& tsk , string& rep)
        {
            set_m_task_num (num);
            set_m_task(tsk);
            set_m_report(rep);
        }
        
        virtual void show_task_info() 
        {
            cout<< "[ Task number ]:\t" << get_m_task_num() <<endl;
            cout<< "[    Task     ]:\t" << get_m_task()     <<endl;
            cout<< "[    Report   ]:\t" << get_m_report()   <<endl;
        }

    
    protected:
        //Setters
        void set_m_task_num (int num) {  m_task_num = num; }
        void set_m_task(string tsk) { m_task = tsk ; }
        void set_m_report(string rep) { m_report = rep; } 

        //Getters
        int get_m_task_num() { return m_task_num; }
        string get_m_task() { return m_task; }
        string get_m_report() { return m_report; }
        
    private:  // So that tasks delived only from manager
        int m_task_num;
        string m_task;
        string m_report; 
};


class Receptionist : public Manager
{
    private:
        Manager mng; //manager of reception department (:Front office)
    
    public:
        void add_task(int num , string tsk , string rep)
        {   
            mng.add_task(num , tsk , rep);
            cout<< "\nReception department Task added successfully\n";
        }

        void show_task_info() 
        {   
            cout<< "------------------------------------------------------------------------------\n";
            cout<< " ...... Reception department Task info ......\n";
            mng.show_task_info();
            cout<< "------------------------------------------------------------------------------\n";
        }
};



class Housekeeper : public Manager
{
    private:
        Manager mng; //manager of Housekeeping department.
    
    public:
         void add_task(int num , string tsk , string rep)
        {   
            mng.add_task(num , tsk , rep);
            cout<< "\nHousekeeping department Task added successfully\n";
        }

        void show_task_info() 
        {
            cout<< "------------------------------------------------------------------------------\n";
            cout<< " ...... Housekeepingdepartment Task info ......\n";
            mng.show_task_info();
            cout<< "------------------------------------------------------------------------------\n";
        }
};


class Engineer : public Manager
{
    private:
        Manager mng; //manager of engineering maintenance department.
    
    public:
         void add_task(int num , string tsk , string rep)
        {   
            mng.add_task(num , tsk , rep);
            cout<< "\nEngineering department Task added successfully\n";
        }

        void show_task_info() 
        {
            cout<< "------------------------------------------------------------------------------\n";
            cout<< " ...... Engineering department Task info ...... :\n";
            mng.show_task_info();
            cout<< "------------------------------------------------------------------------------\n";
        }
};



int main()
{

    Receptionist recep;
    recep.add_task( 1 , "Informing german guests about Coktail Party at 6pm at 'Luna Bar' " , "Urgent German-specific" );
    recep.show_task_info();
    
    Housekeeper hk;
    hk.add_task ( 1, "Frequent cleaning of german rooms at saterdays & sundays " , " Urgent German-specific " );
    hk.show_task_info();
    
    
    return 0;
}
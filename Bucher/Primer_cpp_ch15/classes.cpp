#include <iostream>
/**
 * 
 * GeeksforGeeks "classes and objects"
 * Artikel nu.3
 * 
 * @file classes.cpp
 * @author: mustafa.syyd
*/
using std::string;
using std::cout;
using std::endl;

namespace cls{  //can i bypass a namespace that is existed already??? 
    //ClassNamingConvention.
    class Device{

        public:
        Device();
        ~Device();

        void Set_name(string name);
        void Set_battery( int battery);
    
        string Get_name();
        int Get_battery();

        private:
        string name;
        int battery;
        bool electonic;

    }earbuds; //creating instance of class -(object)- before the semi-colon.
    //scope of that object ???
}

int main(){

    cls::earbuds.Set_name("Earbuds");
    cls::earbuds.Set_battery(2);
    cout<< cls::earbuds.Get_name() <<endl;

    cls::Device laptop;
    laptop.Set_name("Laptop");
    laptop.Set_battery(10);
    cout<< laptop.Get_name() <<endl;

    return 0;
}


cls::Device::Device(){
    cout << "default constructor" << endl;
    name = "";
    battery=0;
}
void cls::Device::Set_battery(int battery){
    this-> battery =  battery;
}

void cls::Device::Set_name(string name){
        this->name = name;
    }

string cls::Device::Get_name(){
    return name;
}
int cls::Device::Get_battery(){
    return battery;
}


cls::Device::~Device(){
    cout << "destructor no." << battery << endl;
}

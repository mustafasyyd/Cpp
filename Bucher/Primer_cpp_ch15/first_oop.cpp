#include <iostream>
/**
 * 
 * 
 * @file first_oop.cpp
 * @author: mustafa.syyd
*/

using std::string;
using std::cout;
using std::endl;

class book{

    public:
    book(){
        m_pages=0;
        m_type="";
    }

    book (string type, int pages){
        m_pages= pages;
        m_type= type;
    }

    //setters
    void Set_pages (int pages){ m_pages = pages; }
    void Set_type (string type){ m_type = type; }

    //getters
    int Get_pages (){ return m_pages; }
    string Get_type (){ return m_type; }

    private:
    int m_pages;
    string m_type;
};

class car{

    private:

    public:

};

class motor {

    private: //operations: setters, getters and other mthds

    public:  //member data oder attributes
};

class Mcu{
    
    public: //memberfunctions

    Mcu(){

        name= "";
        arch = "";
        language = "";
        version = "";
        hz = 0;    
    }
    Mcu (string name, string arch, string language,string version, int hz){
        this->name= name;
        this->arch = arch;
        this->language = language;
        this-> version = version;
        this-> hz = hz;
    }

    //Setters
    void Set_Name(string name ){
        this->name = name;
    }

    void Set_Arch(string arch ){
        this->arch = arch;
    }
    void Set_Version(string version ){
        this->version = version;
    }
    void Set_Language(string language ){
        this->language = language;
    }
    void Set_Hz(int hz ){
        this->hz = hz;
    }
    
    //Getters
    string Get_Name(){
        return name;
    }

    string Get_Arch(){
        return arch;
    }
    string Get_Version(){
        return version;
    }
    string Get_Language(){
        return language;
    }
    int Get_Hz(){
        return hz;
    }
    
    void print_name(){
        cout << Get_Name();
    }
    void print_arch(){
        cout << Get_Arch();
    }


    //Member Data.
    private: 
    string name , arch, version, language;
    int hz;
    
};

int main(){

    book krimis;
    
//    car c1;
    krimis.Set_pages(198);
    krimis.Set_type("Krimis");

    cout<< "Der Buch " << krimis.Get_type() << " : " << krimis.Get_pages() << " Seiten" << endl;;


    Mcu arm;
    arm.Set_Name("Arm");
    arm.print_name();
    cout<< "\n";

    Mcu pic("pic", "RISC", "embdd c", "16f877a", 24);
    pic.print_name();
    cout<< "    ";
    pic.print_arch();


    return 0;
}
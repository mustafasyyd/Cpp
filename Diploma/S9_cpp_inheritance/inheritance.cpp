#include <iostream>
#include <vector>

/**
 * 
 * 
 * @file ptr_ref.cpp
 * @author: mustafa.syyd
*/

class Device
{
    public:
    virtual ~Device() = default;
    virtual double Get_Power_Cons()=0;
    virtual void Display_Power_Cons()=0;
};

class Electronics : public Device
{
    
    public:
    Electronics (std::string deviec_name , double volt , double amp) : m_name(deviec_name) , m_volt(volt) , m_amp(amp) {}
    
    double Get_Power_Cons() override
    {
        return m_volt*m_amp;
    }
    
    void Display_Power_Cons()
    {
       std::cout<< "Device " << m_name << "Power Consumption= " << this->Get_Power_Cons() <<std::endl;
    }

    protected:
    std::string m_name;
    double m_volt;
    double m_amp;
};

class Earbud : public Electronics
{
    public:
    Earbud(std::string deviec_name , double volt , double amp) : Electronics( m_name , volt , amp ){}

};

class Laptop : public Electronics
{
    public:
    Laptop( std::string deviec_name , double volt , double amp) : Electronics( m_name , volt , amp ){}
 
};


int main(){
    
    
 //   Laptop dell("dell", 120 ,2);
    //Statically allocation
    Device* device;
    Earbud earbud_tws( "Tws12.6v" , 120 , 2);

    device = &earbud_tws;
    device ->Display_Power_Cons();

    //Dynamically allocation
    Device* device_usa = new Laptop( "DELL G7" ,220 , 5);
    device_usa->Display_Power_Cons();

    
  //  std::cout << dell.Get_Power_Cons() << std::endl;

    return 0;
}



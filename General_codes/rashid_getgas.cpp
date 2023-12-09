#include <iostream>
#include <memory>
#include <exception>

class GasolineSource 
{
    public:
        virtual void FuelUp() = 0;
        virtual ~GasolineSource() = default;
};

class GasStation : public GasolineSource {
public:
    void FuelUp() override {
        std::cout<< "Pumping gas at gas station" << std::endl;
    }
}; 

class FuelCan : public GasolineSource {
public:
    void FuelUp() override {
        std::cout << "Pumping gas from fuel can" << std::endl;
    }
};

/// std::shared_ptr<int> shr

class Car {
private:
    std::shared_ptr<GasolineSource> gasolineService = nullptr ; // aggregation
   // GasolineSource *gasolineService = nullptr; // aggregation

public:
    Car(std::shared_ptr<GasolineSource> service) : gasolineService(service) 
    {
        if(gasolineService == nullptr)
        {
            throw std::invalid_argument ("service must not be null");
        }
    }

    void getGasoline() 
    {
        std::cout << "Car needs more gasoline!" << std::endl;
        gasolineService->FuelUp();
    }
};

int main() {
    
     try 
     {
        std::shared_ptr<GasolineSource> share_race = std::make_shared<GasStation>();  
        std::shared_ptr<GasolineSource> share_buggy = std::make_shared<GasStation>();  
        
        Car racecar( std::make_shared<GasStation>() );
        Car duneBuggy( std::shared_ptr<GasolineSource> (new GasStation()) );
        
        racecar.getGasoline(); 
        duneBuggy.getGasoline();
    } 

    catch(std::exception e)
            {   std::cout << e.what();  }

    
    return 0;
}
#include<iostream>
#include<memory>
#include<exception>

using namespace std;

class GasolineSource
{
    public:
        virtual void Fuel_up() = 0;
        virtual ~GasolineSource() = default;
};

class GasStation : public GasolineSource
{
    public:
        void Fuel_up() override
        {
            std::cout << "Pumping gas at gas station" << std::endl;
        }
};


class FuelCan : public GasolineSource
{
    public:
        void Fuel_up() override
        {
            std::cout << "Pumping gas from fuel can" << std::endl;
        }
};

class Car
{   
    public:
        Car(){}
        Car( GasolineSource* gs ) : gasolineService(gs)
        {
            if (gasolineService == nullptr)
                throw invalid_argument( " Service must not be null " );
        }

        void get_gasoline()
        {
            gasolineService->Fuel_up();
        }

    private:
        unique_ptr<GasolineSource> gasolineService = nullptr;
};



int main()
{
    
    try
    {
        Car race_car( new GasStation() );
        race_car.get_gasoline();

        Car dune_buggy( new  FuelCan() );
        dune_buggy.get_gasoline();
    }

   catch ( exception e )
   {
        cout<< e.what() <<endl;
   }
   
    return 0;
}
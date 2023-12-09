/**
 * 
 * 
*/

#include<iostream>

template <class T>
void Swap (T &a , T &b){
    T temp = a; //copy const.
    a = b;  //assignment operator
    b = temp;  //assignment operator

}

class House{
    public:
    House(std::string h_name) : hous_name(h_name) {}
    
    House(House& house){
        this->hous_name = house.hous_name;
    }
    
    std::string getName(){
        return hous_name;
    }
    
    House& operator =( const House &house){
        this->hous_name = house.hous_name;
        std::cout<< "Assignment Operator called\n";
        return *this; 
    }

    

    private:
    std::string hous_name;
};


int main(){

    House king("Lannister");
    House ruler("Stark");


    std::cout<<" The current King is "<< king.getName()<<"\n";

    Swap<House>(king, ruler);

    std::cout<<" The current King is "<< king.getName()<<"\n";
    std::cout<<" The Ruler is "<< ruler.getName()<<"\n";


    int i{4} , j(7);
    std::cout<<"i(" << i << ") j("<< j<< ")\n";

    Swap<int>(i,j);
    std::cout<<"i(" << i << ") j("<< j<< ")\n";
    

    return 0;
}
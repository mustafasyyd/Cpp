#include <iostream>


class GYM{

    protected:

    //attributes.
    int wiederh, anzahl;

    //methods.
    int Calc_Zeit(){
        return (wiederh*anzahl*2) ;
    }

    //setters & getters.
    public:
    void Set_Wiedeh(int wid){
        wiederh = wid;
    }

    void Set_Anzahl(int anz){
        anzahl = anz;
    }

    void Get_Zeit(){
        std::cout<< Calc_Zeit() << std::endl;
    }

};


class Sport{
   
    protected:
    int spielzeit;
    int punkte;

};

class Basketball : Sport{
    char ballfarbe;

    public:
    void Set_Ballfarbe(char ballfarb){
        ballfarbe = ballfarb;
    }

    void Set_spielzeit(int spielz){
        spielzeit = spielz;
    }

    void Getter_Ballfarbe(){
        std::cout<< ballfarbe << std::endl;
    }
    void Getter_spielzeit(){
        std::cout<< spielzeit << std::endl;
    }

};


int main(){

    GYM g;
    g.Set_Anzahl(8);
    g.Set_Wiedeh(3);
    g.Get_Zeit();

    Basketball b1;
    b1.Set_Ballfarbe ('r');


    return 0;
}
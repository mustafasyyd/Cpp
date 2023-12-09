#include <iostream>
/**
 * 
 * 
 * @file struct.cpp
 * @author: mustafa.syyd
*/

struct Team
{   
    public:

    void Set_names(std::string team_name , std::string captain_name){ m_captain_name = captain_name;
                                                                      this->team_name = team_name; }

    void Set_Team_Name(std::string team_name){ this->team_name = team_name; }

    void Set_Captain_Name(std::string captain_name){ m_captain_name = captain_name;}

    void Print_Names(){ std::cout<< "Team name: "<< this->team_name<< std::endl;
                         std::cout<< "Captain name: "<< m_captain_name<< std::endl; }
    private:
    std::string team_name;
    std::string m_captain_name;
    
};


int main(){

    
    Team miamifc;

    miamifc.Set_Team_Name("Miami Fc");
    miamifc.Set_Captain_Name("Lionel Messi");
    
    miamifc.Print_Names();

    Team* dalasfc;
    dalasfc = &miamifc;

    Team* newhampshirefc = new Team();

    Team& texasfc = miamifc; 


    return 0;
}

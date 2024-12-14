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

    //methods, struct functions
    void Set_names(std::string team_name , std::string captain_name)
    { 
        m_captain_name  = captain_name;
        this->team_name = team_name; 
    }

    void Set_Team_Name(std::string team_name){ this->team_name = team_name; }
    void Set_Captain_Name(std::string captain_name){ m_captain_name = captain_name;}
    void Print_Names()
    {
        std::cout<< "Team name: "<< this->team_name<< std::endl;
        std::cout<< "Captain name: "<< m_captain_name<< std::endl; 
    }

    private:
    //properties, variables
    std::string team_name;
    std::string m_captain_name;   
};


int main(){

    Team miamifc;

    miamifc.Set_Team_Name("Miami Fc");
    miamifc.Set_Captain_Name("Lionel Messi");    
    miamifc.Print_Names();

    Team* dalasfc;      //Create a pointer variable to "Teams" struct
    dalasfc = &miamifc; //put miamifc's address to dalasfc variable.  

    //alisa struct
    Team& texasfc = miamifc;
    texasfc.Set_Team_Name("Miami Fc");
    texasfc.Set_Captain_Name("Lionel Messi");    
    texasfc.Print_Names();


    /* 
        1. Create a Teams struct in the .heap mem sec (allocate a space in the .heap using new Team() )
        2. Create a pointer to point to  "Teams" struct in .heap mem sec. 
        3. Dynamic Allocation happens @run time and allocated in the .heap mem section.
    */
   
    Team* newhampshirefc = new Team(); 
    newhampshirefc->Set_Team_Name("NewhampshireFC");
    newhampshirefc->Set_Captain_Name("Mustafa sayed");
    newhampshirefc->Print_Names();

    return 0;
}

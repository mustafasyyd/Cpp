/**
 *          ........ < Character class  > ......
 * 
 * 
 * @file: character.h
*/

#include<iostream>

using namespace std;


class Character
{
    public:
        Character ( string& n , string& sw  , int& eff_lvl ) 
                                         : m_name(n) , m_software(sw) , m_effectLevel(eff_lvl)
        {}

        virtual ~Character() = default;       //destructor
       
        virtual string getName() = 0 ;
        virtual string getSoftware() = 0 ;
        virtual int getEffectLevel() = 0 ;
            
    protected:
        string m_name;
        string m_software;
        int m_effectLevel;  // impoertance scale [ min --> 1 , max --> 10 ]
};

class Character3D : public Character
{   
    public:
        Character3D(string n = " " , string sw = " " , int eff_lvl = 1 ) 
                                                : Character( n , sw , eff_lvl )    
        {}

        //Getters
        string getName() override
        {      return m_name ;        }

        string getSoftware() override
        {     return m_software ;     }
        
        int getEffectLevel() override
        {     return m_effectLevel;   }
    
};


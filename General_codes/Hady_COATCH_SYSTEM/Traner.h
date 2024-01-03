
#ifndef Trainer_H_
#define Trainer_H_
#include"hady_lib.h"
//PARENT CLASS
class Trainer 
{
    protected :
    std::string Trainer_Name      ;
    std::string Trainer_Program   ;
    std::string Trainer_Gender    ;
    std::string Trainer_QR_CODE   ;
    int Trainer_ID                ;
    int Trainer_Wight             ;
    int Trainer_Hight             ;
    int Trainer_Age               ;
    int Trainer_BMR               ;
    int Trainer_Total_Calories    ;
    int Trainer_Protien_Needed    ;

    void User_Enter_Trainer_Name         () ;
    void User_Enter_Trainer_Program      () ;
    void User_Enter_Trainer_Gender       () ;
    void User_Enter_QR_CODE              (std::string QR_CODE) ;
    void User_Enter_Trainer_ID           () ;
    void User_Enter_Trainer_Wight        () ;
    void User_Enter_Trainer_Hight        () ;
    void User_Enter_Trainer_Age          () ;
    
    void Disblay_Trainer_Name            () ;
    void Disblay_Trainer_Program         () ;
    void Disblay_Trainer_Gender          () ;
    void Disblay_Trainer_ID              () ;
    void Disblay_Trainer_Wight           () ;
    void Disblay_Trainer_Hight           () ;
    void Disblay_Trainer_Age             () ;
    void Disblay_Trainer_BMR             () ;
    void Disblay_Trainer_Toatal_Calories () ;
    void Disblay_Trainer_Protien         () ;

    std::string Get_Trainer_Name         () ;
    std::string Get_Trainer_Program      () ;
    std::string Get_Trainer_Gender       () ;
    int Get_Trainer_ID                   () ;
    int Get_Trainer_Wight                () ;
    int Get_Trainer_Hight                () ;
    int Get_Trainer_Age                  () ;
    int Get_Trainer_BMR                  () ;
    int Get_Trainer_Total_calories       () ;
    int Get_Trainer_Protien_Needed       () ;

    public : 
    Trainer () ;
   explicit  Trainer ( std::string QR_CODE ) ;
    ~Trainer () ;
};

// CHILD CLASSES 
class Bulking_Program   :  public Trainer 
{
   void  Calc_BMR            () ;
   void  Calc_Total_Calories () ;
   void  Calc_Protien_Needed () ;
   public :
   Bulking_Program () : Trainer()  
   {
      if(this->Trainer_Program == "BULKING")
      {
      this->Calc_BMR();
      this->Calc_Total_Calories() ;
      this->Calc_Protien_Needed();
      }
   }
   explicit Bulking_Program (std::string QR_CODE )  : Trainer (  QR_CODE ) 
   {
        if(this->Trainer_Program == "BULKING")
      {
      this->Calc_BMR();
      this->Calc_Total_Calories() ;
      this->Calc_Protien_Needed();
      }
   }
   ~Bulking_Program() ;
};




class Cutting_program   : public Trainer 
{
   void  Calc_BMR            () ;
   void  Calc_Total_Calories () ;
   void  Calc_Protien_Needed () ;
   public :
   Cutting_program () : Trainer() 
   {
          if(this->Trainer_Program == "CUTTING")
      {
      this->Calc_BMR();
      this->Calc_Total_Calories() ;
      this->Calc_Protien_Needed();
      }
   }
   explicit Cutting_program(std::string QR_CODE) : Trainer (  QR_CODE ) 
   {
       
      if(this->Trainer_Program == "CUTTING")
      {
      this->Calc_BMR();
      this->Calc_Total_Calories() ;
      this->Calc_Protien_Needed();
      }
   }
   ~Cutting_program();
};





#endif
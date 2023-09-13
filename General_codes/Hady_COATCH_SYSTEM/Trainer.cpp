#include"Traner.h"

/*
DEFINE ALL MEMBERS IN Trainer CLASS
*/
Trainer::Trainer() 
    : Trainer_ID(0)  , Trainer_Wight(0) , Trainer_Hight(0) 
    , Trainer_Age(0) , Trainer_BMR(0)  , Trainer_Total_Calories(0) 
    , Trainer_Protien_Needed(0)
{
      this->User_Enter_Trainer_Program();
      this->User_Enter_Trainer_Name   ();
      this->User_Enter_Trainer_Gender ();
      this->User_Enter_Trainer_ID     ();
      this->User_Enter_Trainer_Wight  ();
      this->User_Enter_Trainer_Hight  ();
      this->User_Enter_Trainer_Age    ();
}
/**************************************/
void Trainer::User_Enter_Trainer_Program ()
{
    std::cout<<"\nENTER TRAINER PROGRAM BULKING OR CUTTING\n" ;
    std::cin>>this->Trainer_Program ;
}
/**************************************/
void Trainer::User_Enter_Trainer_Name ()
{
     std::cout<<"\nENTER TRAINER NAME\n" ;
    std::cin>>this->Trainer_Name ;
}
/**************************************/
void Trainer::User_Enter_Trainer_Gender ()
{
    std::cout<<"\nENTER TRAINER GENDER MAN OR WOMAN\n" ;
    std::cin>>this->Trainer_Gender ;
}
/**************************************/
void Trainer::User_Enter_Trainer_ID ()
{
    std::cout<<"\nENTER TRAINER ID\n" ;
    std::cin>>this->Trainer_ID ;
}
/**************************************/
void Trainer::User_Enter_Trainer_Wight ()
{
    std::cout<<"\nENTER TRAINER WIGHT\n" ;
    std::cin>>this->Trainer_Wight ;
}
/**************************************/
void Trainer::User_Enter_Trainer_Hight ()
{
    std::cout<<"\nENTER TRAINER HIGHT\n" ;
    std::cin>>this->Trainer_Hight ;
}
/**************************************/
void Trainer::User_Enter_Trainer_Age ()
{
    std::cout<<"\nENTER TRAINER Age\n" ;
    std::cin>>this->Trainer_Age ;
}
/**************************************/
void Trainer::Disblay_Trainer_Name ()
{
    std::cout<<"\nTRAINER NAME\n" ;
    std::cout<<this->Trainer_Name ;
}
/**************************************/
void Trainer::Disblay_Trainer_Gender ()
{
    std::cout<<"\nTRAINER GENDER\n" ;
    std::cout<<this->Trainer_Gender ;
}
/**************************************/
void Trainer::Disblay_Trainer_Program ()
{
    std::cout<<"\nTRAINER PROGRAM\n" ;
    std::cout<<this->Trainer_Program ;
}
/**************************************/
void Trainer::Disblay_Trainer_ID ()
{
    std::cout<<"\nTRAINER ID\n" ;
    std::cout<<this->Trainer_ID ;
}
/**************************************/
void Trainer::Disblay_Trainer_Wight ()
{
    std::cout<<"\nTRAINER WIGHT\n" ;
    std::cout<<this->Trainer_Wight ;
}
/**************************************/
void Trainer::Disblay_Trainer_Hight ()
{
    std::cout<<"\nTRAINER Hight\n" ;
    std::cout<<this->Trainer_Hight ;
}
/**************************************/
void Trainer::Disblay_Trainer_Age ()
{
    std::cout<<"\nTRAINER Age\n" ;
    std::cout<<this->Trainer_Age ;
}
/**************************************/
void Trainer::Disblay_Trainer_BMR ()
{
    std::cout<<"\nTRAINER BMR\n" ;
    std::cout<<this->Trainer_BMR ;
}
/**************************************/
void Trainer::Disblay_Trainer_Toatal_Calories ()
{
    std::cout<<"\nTRAINER Total Calories to Eat\n" ;
    std::cout<<this->Trainer_Total_Calories ;
}
/**************************************/
void Trainer::Disblay_Trainer_Protien ()
{
    std::cout<<"\nTRAINER Total Protien in grams to Eat\n" ;
    std::cout<<this->Trainer_Protien_Needed ;
}
/**************************************/
std::string Trainer::Get_Trainer_Name    () 
{
    return this->Trainer_Name ;
}
/**************************************/
std::string Trainer::Get_Trainer_Program () 
{
    return this->Trainer_Program ;
}
std::string Trainer::Get_Trainer_Gender  () 
{
     return this->Trainer_Gender ;
}
/**************************************/
int Trainer::Get_Trainer_ID              () 
{
    return this->Trainer_ID ;
}
/**************************************/
int Trainer::Get_Trainer_Wight           () 
{
   return this->Trainer_Wight ;
}
/**************************************/
int Trainer::Get_Trainer_Hight           () 
{
   return this->Trainer_Hight ;
}
/**************************************/
int Trainer::Get_Trainer_Age           () 
{
   return this->Trainer_Age ;
}
/**************************************/
int Trainer::Get_Trainer_BMR             ()
{
    return this->Trainer_Hight ;
} 
/**************************************/
int Trainer::Get_Trainer_Total_calories  () 
{
    return this->Trainer_Total_Calories ;
}
/**************************************/
int Trainer:: Get_Trainer_Protien_Needed  ()
{
   return this->Trainer_Protien_Needed ;
}
/**************************************/
Trainer::Trainer ( std::string QR_CODE ) 
{
    this->User_Enter_QR_CODE(QR_CODE) ;
}
/**************************************/
Trainer::~Trainer()
{
   //DO NOTHING 
}
/**************************************/


/*
THE QR_CODE FUNCTION SEPERATES ALL MEMEBERS WHEN STRING ELEMENT = ','
AND SPECIFIES THE SIZE OF EACH MEMEBER STRING TO FILL
AND CONVERT STRINGS TO INT 
*/
void Trainer::User_Enter_QR_CODE       (std::string QR_CODE)
 {
   this->Trainer_QR_CODE = QR_CODE   ;
// INITIATE STRINGS FOR INT MEMEBER TO ASSIGN FROM QR_CODE BECAUSE IT STRING
    std::string Trainer_str_ID ; 
    std::string Trainer_str_Wight ; 
    std::string Trainer_str_Hight ;
    std::string Trainer_str_Age ;   
// RECOGNIZE EACH MEMBER SIZE AND PUT IT IN ARRAY                                                                  
    auto Recognize_size_member_in_QR = [  ]( std::string QR_CODE , std::array<int,7> & arr )  { 
                                                  
                                                   int counter_2 = 0 ;
                                                   int counter_1 = 0 ;
                                                    for(counter_1 ;counter_1 <= QR_CODE.size();counter_1++ )
                                                    {
                                                      if(QR_CODE[counter_1]==',' || counter_1 == QR_CODE.size() )
                                                      {
                                                        arr[ counter_2] = counter_1  ;
                                                        counter_2 ++ ;
                                                      }
                                                      
                                                    }
                                                    
                                                } ;
 std::array<int,7> size_of_each_member ;
 Recognize_size_member_in_QR(this->Trainer_QR_CODE, size_of_each_member) ;

 Trainer_Name.resize     (size_of_each_member[0]) ;
 Trainer_Program.resize  (size_of_each_member[1] - size_of_each_member[0] -1 ) ;
 Trainer_Gender.resize   (size_of_each_member[2] - size_of_each_member[1] -1) ;
 Trainer_str_ID.resize   (size_of_each_member[3] - size_of_each_member[2] -1) ;
 Trainer_str_Wight.resize(size_of_each_member[4] - size_of_each_member[3] -1) ;
 Trainer_str_Hight.resize(size_of_each_member[5] - size_of_each_member[4] -1) ;
 Trainer_str_Age.resize  (size_of_each_member[6] - size_of_each_member[5] -1) ;
// FUNCTION TO CONVERT FROM STRING TO INT STRING NUMBER = NUMBER + 48 THEN MULTIPLY THE NUMBER ACCORDING ITS POSITION
   auto Convert_string_to_int = []( std::string str , int & num ){ 
                                            int count = 0 ; 
                                         for( int counter = (str.size() - 1) ; counter>=0 ; counter--)
                                         {
                                            num += ( ( ( (int)str[count] ) - 48 ) * (pow(10,counter) ) ) ;
                                            
                                            count ++ ;
                                            if(counter == 0)
                                            {
                                              break ;
                                            }
                                           
                                         } 
                               } ;
     // FILL MEMBERS IN CLASS                           
    int counter_1 = 0 ;
    int counter_2 = 0 ;
    for(counter_2 ; counter_2<Trainer_Name.size(); counter_2++)      
    {
        this->Trainer_Name[counter_2] = Trainer_QR_CODE[counter_2] ;
        counter_1++;
    } 
    counter_1 ++ ;
    for(counter_2 = 0 ; counter_2<Trainer_Program.size(); counter_2++)      
    {
        this->Trainer_Program[counter_2] = Trainer_QR_CODE[counter_1] ;
        counter_1 ++ ;
    } 
    counter_1 ++ ;
    for(counter_2 = 0 ; counter_2<Trainer_Gender.size() ; counter_2++)      
    {
        this->Trainer_Gender[counter_2] = Trainer_QR_CODE[counter_1] ;
        counter_1 ++ ;
    } 
    counter_1 ++ ;
    for(counter_2 = 0 ; counter_2<Trainer_str_ID.size() ; counter_2++)      
    {
        Trainer_str_ID[counter_2] = Trainer_QR_CODE[counter_1] ;
        counter_1 ++ ;
    } 
    counter_1++ ;
    for(counter_2 = 0 ; counter_2< Trainer_str_Wight.size() ; counter_2++)      
    {
        Trainer_str_Wight[counter_2] = Trainer_QR_CODE[counter_1] ;
        counter_1 ++ ;
    } 
    counter_1++ ;
    
    for(counter_2 = 0 ; counter_2<Trainer_str_Hight.size() ; counter_2++)      
    {
        Trainer_str_Hight[counter_2] = Trainer_QR_CODE[counter_1] ;
        counter_1 ++ ;
    } 
    
    counter_1++ ; 
    for(counter_2 = 0 ; counter_2<Trainer_str_Age.size() ; counter_2++)      
    {
        Trainer_str_Age[counter_2] = Trainer_QR_CODE[counter_1] ;
        counter_1 ++ ;
    } 
      
    counter_1++ ;



    Convert_string_to_int(Trainer_str_ID , this->Trainer_ID      )   ;
    Convert_string_to_int(Trainer_str_Wight , this->Trainer_Wight)   ;
    Convert_string_to_int(Trainer_str_Hight , this->Trainer_Hight)   ;
    Convert_string_to_int(Trainer_str_Age , this->Trainer_Age    )   ;                      

 }




void Bulking_Program:: Calc_BMR () 
   {
      if(this->Trainer_Gender == "MAN")
        {
            Trainer_BMR = 88.362 + (13.397 * this->Trainer_Wight) + (4.799 * this->Trainer_Hight) + (5.677 * this->Trainer_Age) ;
        }
        else if (this->Trainer_Gender == "WOMAN")
        {
           Trainer_BMR = 447.593 + (9.247 * this->Trainer_Wight) + (3.098 * this->Trainer_Hight) + (4.330 * this->Trainer_Age) ;
        }
   }
   void Bulking_Program::Calc_Total_Calories () 
   {
     this->Trainer_Total_Calories = 500 + Trainer_BMR ;
   }
   void Bulking_Program::Calc_Protien_Needed () 
   {
    this->Trainer_Protien_Needed = 2.5 * this->Trainer_Wight ;
   }




Bulking_Program::~Bulking_Program ()
   {
     Disblay_Trainer_Name            () ;
     Disblay_Trainer_Program         () ;
     Disblay_Trainer_Gender          () ;
     Disblay_Trainer_ID              () ;
     Disblay_Trainer_Wight           () ;
     Disblay_Trainer_Hight           () ;
     Disblay_Trainer_Age             () ;
     Disblay_Trainer_BMR             () ;
     Disblay_Trainer_Toatal_Calories () ;
     Disblay_Trainer_Protien         () ;
   }



 void Cutting_program::Calc_BMR () 
   {
      if(this->Trainer_Gender == "MAN")
        {
            Trainer_BMR = 88.362 + (13.397 * this->Trainer_Wight) + (4.799 * this->Trainer_Hight) + (5.677 * this->Trainer_Age) ;
        }
        else if (this->Trainer_Gender == "WOMAN")
        {
           Trainer_BMR = 447.593 + (9.247 * this->Trainer_Wight) + (3.098 * this->Trainer_Hight) + (4.330 * this->Trainer_Age) ;
        }
   }
   void Cutting_program::Calc_Total_Calories () 
   {
     this->Trainer_Total_Calories = Trainer_BMR - 600  ;
   }
   void Cutting_program::Calc_Protien_Needed () 
   {
    this->Trainer_Protien_Needed = 3 * this->Trainer_Wight ;
   }





   Cutting_program::~Cutting_program ()
   {
     Disblay_Trainer_Name            () ;
     Disblay_Trainer_Program         () ;
     Disblay_Trainer_Gender          () ;
     Disblay_Trainer_ID              () ;
     Disblay_Trainer_Wight           () ;
     Disblay_Trainer_Hight           () ;
     Disblay_Trainer_Age             () ;
     Disblay_Trainer_BMR             () ;
     Disblay_Trainer_Toatal_Calories () ;
     Disblay_Trainer_Protien         () ; 
   }
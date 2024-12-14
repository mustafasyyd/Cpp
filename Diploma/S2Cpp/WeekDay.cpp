#include<iostream>

using std::cout , std::cin , std::endl;

enum Week: int
{
    Monday=1,Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday,
    WEEkDAYSNUMBER=7, NumOfDays=10
};

int main()
{
//     constexpr int DaysNext = 10                                 ; //@ compile time resolved
    int CurrentDay {0} ,  DaysNext{0};                          ;        
    cout<< "Enter a Day: "     ; cin >> CurrentDay              ;         
    cout<< "Enter a DayNext: " ; cin >> DaysNext                ;
    int DayAfter = (CurrentDay+DaysNext) % WEEkDAYSNUMBER       ; 
    std::string   FutureDay("");

    switch(DayAfter){
        case Monday:    FutureDay=("Monday")    ;       break   ;
        case Tuesday:   FutureDay=("Tuesday")   ;       break   ;
        case Wednesday: FutureDay=("Wednesday") ;       break   ;
        case Thursday:  FutureDay=("Thursday")  ;       break   ;
        case Friday:    FutureDay=("Friday")    ;       break   ;
        case Saturday:  FutureDay=("Saturday")  ;       break   ;
        case Sunday:    FutureDay=("Sunday")    ;       break   ;
        default:        FutureDay="N/A"         ;       break   ;
    }

    std::cout << "That day will be " << FutureDay << std::endl;

    return 0;
}
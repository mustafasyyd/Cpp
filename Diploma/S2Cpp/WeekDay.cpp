#include<iostream>

enum Week: std::uint16_t
{
    Monday=1U, 
    Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday,

    WEEk=7,
// NumOfDays=10,
};

int main(){

    constexpr std::uint16_t DaysNext = 10;

    std::uint16_t CurrentDay = Sunday;
    std::uint16_t DayAfter = (CurrentDay + DaysNext) % WEEk;
    std::string FutureDay("");
    
    

    switch(DayAfter){

        case Monday:
                FutureDay=("Monday");
                break;
        
        case Tuesday:
                FutureDay=("Tuesday");
                break;
        case Wednesday:
                FutureDay=("Wednesday"); 
                break;
        case Thursday:
                FutureDay=("Thursday");
                break;
        case Friday:
                FutureDay=("Friday");
                break;
        case Saturday:
                FutureDay=("Saturday");
                break;
        case Sunday:
                FutureDay=("Sunday");
                break;
        default:
                FutureDay="N/A";
                break;
    }

    std::cout<<"That day will be " << FutureDay << std::endl;

    return 0;
}
/*
**********************
QR_CODE TASK
**********************
THIS PROGRAM CALCULATE THE CALORIES AND PROTIEN YOU NEED TO EAT FOR BULKING OR CUTTING
YOU USE CLASS  Bulking_program  or Cutting_program HICH ARE INHARTED FROM PARENT CLASS Trainer
TO CALCULAT YOUR CALORIES 
ACORDING TO YOUR WIGHTT , HIGHT , GENDER , AGE WILL CACULATE YOUR BMR(THE CALORIES YOU BURN BER DAY)
THEN ADDING 500 CAL OR SUBTRACT ACCORDING TO CLASS 
IN EACH CLASS THERE ARE TWO COSTRUCTORS DEFAULT CONSTRUT AND PARAMTRIZED CONSTRUCT
PRAMTRIZED TAKES QR-CODE STRING MUST BE (NAME,PROGRAM,GENDER,ID,WIGHT,HIGHT,AGE)
IN PROGRAM MUST BE "CUTTING" OR "BULKING" AND "GENDER" MAN OR "WOMAN" AS WRITTEN IN PROGRAM BELOW
IF YOU USE Cuuting_program AND WRITE BULKING IN PROGRAM PARAMTER OR STRING QR_CODE
WILL NAT CALCUTE THE CALORIE AND PROTIEN 
*/
#include"Traner.h"

int  main()
{
    Cutting_program hady("hady,CUTTING,MAN,15,80,180,24") ;
}
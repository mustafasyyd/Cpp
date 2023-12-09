#include <iostream>
/**
 * < write inline function, that calculate Hotel night accomodation price >
 * 
 *  "inline function are resolved in compile-time
 *      to be in the main code, as short repeated statements
 *          are candidate to be inlined"
 * 
 * @file Hotel_acc_inline.cpp
 * @author: mustafa.syyd
*/

int n=10;
int ppr=50;

inline int Calc_Accomaodatio_Price( int& nights, int& pricepernight); //inline function

inline int Rechne_Aufenthat_Preis( int nights=n , int pricepernight=ppr ); //default value (immediate or variable)

int main(){

    int nights = 14;
    int pricepernight =50; //in euro currency

    std::cout<< "The total accomodation price is: "<< Calc_Accomaodatio_Price(nights, pricepernight)<< " euro" <<std::endl;
    
    std::cout<< "The total accomodation price is: "<< Rechne_Aufenthat_Preis()<< " euro" <<std::endl;

    return 0;
}


inline int Calc_Accomaodatio_Price( int& nights , int& pricepernight ){
   return nights*pricepernight; 
}

inline int Rechne_Aufenthat_Preis( int nights , int pricepernight ){
   if(nights==n && pricepernight==ppr)
        std::cout<< "...Default values are used..."<<std::endl; 
   return nights*pricepernight; 
}


#include<iostream>
using namespace std;

template < class S , class T>
S swaping ( S str , T &a , T &b ){
    T tempo;
    tempo = a;
    a = b;
    b = tempo;
    
    return str;
}


template < class P >
P MAX ( P a , P b ){
    return (a > b)? a : b;
}

int main(){


    int r=5, s=6;
 
   /*cout<< "r= "<< r << "\ts= "<< s <<endl;

    swaping<string ,int>("swap" , r , s );
    cout<< "r= "<< r << "\ts= "<< s <<endl;
    
    auto Fn =swaping("swap", r , s);
    cout<< "rs: "<< Fn <<endl;*/


    auto max = MAX<int>(r , s);
    cout<< max <<endl;



    //int a=5; float b=9;


    //auto max_2 = MAX( 2 , 3.2);       //deduced conflicting types for parameter 'P' ('int' and 'double')
    auto max_3 = MAX<float>( 2 , 3.2);
    cout<< max_3 <<endl;

    return 0;
}
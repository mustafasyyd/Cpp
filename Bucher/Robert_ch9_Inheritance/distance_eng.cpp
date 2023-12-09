/**
 * < Feet - Inches relationship > 
 * < &exploring inheritance >
 * 
 * < @file: englen.cpp >
 * < @author: mustafa.syyd > 
*/

#include<iostream>
using namespace std;

class Distance{
    public:
        Distance() : feet(0), inches(0.0) {} 
        Distance( int ft, float in) : feet(ft) , inches(in) {}

        void get_dist_from_usr(){
            cout<< "\nEnter feet: "  ;  cin>> feet;
            cout<< "\nEnter inches: ";  cin>> inches;
        }
        void show_data(){
            cout<< feet << "\'-"<< inches << '\"';
        }

    private:
        int feet;
        float inches;

};



int main(){
    Distance dist1;
    dist1.show_data();

    return 0;
}
/**
 * < Feet - Inches relationship, enhanced using derived class and feature of FNs overriding> 
 * < &exploring inheritance >
 * 
 * < @file: englen.cpp >
 * < @author: mustafa.syyd > 
*/

#include<iostream>
using namespace std;

enum posneg {
    pos,
    neg
};

class Distance{
    public:
        Distance() : feet(0), inches(0.0) {} 
        Distance( int ft, float in) : feet(ft) , inches(in) {}

        void get_dist_from_usr(){
            cout<< "\nEnter feet: "  ;  cin>> feet;
            cout<< "\nEnter inches: ";  cin>> inches;
        }
        void show_dist() const{
            cout<< feet << "\' "<< inches << '\"';
        }

    private:
        int feet;
        float inches;

};

class Distsign : public Distance{
    public:
        Distsign() : Distance(){
            sign = pos;
        }
        
        Distsign(int ft , float in , posneg sg=pos) : Distance(ft, in) {
            sign = sg;
        }

        void get_dist_from_usr(){

            Distance::get_dist_from_usr();    

            //get sign + or - char from usr, then if cond.
            char c_sg;w
            cout<<"\nEnter sign: ";  cin>>c_sg;
            sign = (c_sg == '+')?  pos : neg;
        }
        
        void show_dist() const {
            cout<< ( (sign==pos)? "\n(+)" : "(-)" );
            Distance::show_dist();
        }
    
    private:
        posneg sign;
};


int main(){
    //Distance dist1;
    //dist1.show_data();

    Distsign alpha(22 , 16.4, neg);
    alpha.show_dist();
    
    Distsign beta(15 , 21.54);
    beta.show_dist();

    Distsign gamma;
    gamma.get_dist_from_usr();
    gamma.show_dist();

    return 0;
}
/**
 * < Stack implimentation using class type, enhanced with derived class and the feature of functions overriding  >
 * < @file: staken.cpp >
 * < @author: mustafa.syyd > 
*/

#include<iostream>
using namespace std;

class Stack{
    public:
        Stack() : top(-1) {}     //def ctor

        void push(int el){
                st[++top] = el;  
        }
    
        int pop(){
            return st[top--];    
        }

        int getTop(){
            return st[top];
        }
        
        int getIndex(int index){
            return st[index];
        }

        showStack(){
            cout<< "... <STACK OF AGES> ...\n";
            for(int i=0; i <= top ; i++ ){
                cout<< "Age" <<(i+1) <<"["<< st[i] <<"]\n";
            }
        }

    protected:
        enum { MAX=10 };
        int st[MAX];
        int top;
};

class Stack2 : public Stack{
    public:
        void push(int el){
            if( this->top>= MAX-1 ){
                cout<< "\nERROR: ...THE STACK IS FULL...";
                exit(1);
            }
            Stack::push(el);
        }

        int pop(){
            if ( this->top < 0 ){
             cout<< "\nERROR: ...THE STACK IS EMPTY...";
             exit(1);
            }
             return Stack::pop();   
        }

};

int main(){

    int pop_val;

    Stack2 st_ages;
  //  st_ages.pop();

  //pushing values
    st_ages.push(21);
    st_ages.push(25);
    st_ages.push(26);
    st_ages.push(27);
    st_ages.push(25);
    st_ages.push(26);
    st_ages.push(27);
    st_ages.push(25);
    st_ages.push(26);
    st_ages.push(27);
    st_ages.push(25);
    st_ages.push(26);
    st_ages.push(27);


    //pop_val = st_ages.pop();

    st_ages.showStack();
    //cout<< " age: "<< st_ages.getIndex(1) <<endl;
    cout<< "Top age: "<< st_ages.getTop() <<endl;

}
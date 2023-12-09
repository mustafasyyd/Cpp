/**
 * < Stack implimentation using class type>
 * < @file: staken.cpp >
 * < @author: mustafa.syyd > 
*/

#include<iostream>
using namespace std;

class Stack{
    public:
        Stack() : top(-1){ cout<<"Stack is created!\n\n"; }     //def ctor

        void push(int el){
            if( top < MAX-1 ){
                st[++top] = el;
            }  
        }

        int pop(){
            if( top>=0 )
                return st[top--];    
        }

        int getTop(){
            return st[top];
        }
        
        int getIndex(int index){
            if(index <= top)
                return st[index];
        }

        showStack(){
            cout<< "... <STACK OF AGES> ...\n";
            for(int i=0; i <= top ; i++ ){
                cout<< "Age" <<(i+1) <<"["<< st[i] <<"]\n";
            }
        }

    private:
        enum { MAX=10 };
        int st[MAX];
        int top;
};

int main(){

    int pop_val;

    Stack st_ages;
    
    st_ages.push(21);
    st_ages.push(25);
    st_ages.push(26);
    st_ages.push(27);

    //pop_val = st_ages.pop();

    st_ages.showStack();
    //cout<< " age: "<< st_ages.getIndex(1) <<endl;
    cout<< "Top age: "<< st_ages.getTop() <<endl;

}
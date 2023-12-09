#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four ( int a, int b, int c, int d ){

    int max=0;

    if(a>b){

        if(a>c){

            if(a>d){
                max=a;
                cout<<"first cond. , a "<<endl;
            }
            else{
                max=d;
                cout<<" first cond. else, d"<<endl;
            }
        }
    }
    else if(b>c){

        if(b>d){ 
            max=b;
            cout<<"second cond. , b "<<endl;

        }
        else{
            max=d;
            cout<<" second cond. else, d"<<endl;
        }
    }
    else if(c>d){
        max=c;
        cout<<"third cond. , c "<<endl;

    }
    else{
         max=d;
         cout<<" last cond. else, d"<<endl;
    }

    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
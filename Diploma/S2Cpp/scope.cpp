//scope exploring
#include <iostream>
using namespace std;

 namespace External 
 { 
        int x = 9; 
 }

int main()
{

    int x=8; //global relative to while loop
    cout<<"EXTERNAL X: "<< x <<endl;
    
    {
        int x = 9;
        cout<< "scope internal by brackets: " << x << endl;
    }

    
    int in=1; 
    while( in != 0 )
    {
        int x=10;  //global in while loop
        cout<< "internal x: " << x <<endl;
        cin>>in;   
    }
    
    cout << "X of Main: " << x << endl  ;

    return 0;
}
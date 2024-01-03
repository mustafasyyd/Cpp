//scope exploring
#include <iostream>
using namespace std;


int main()
{

    int x=8; //global relative to while loop
    cout<<"EXTERNAL X: "<< x <<endl;
    
    int in=1; 
    while( in != 0 )
    {
        int x=10;  //global in while loop
        cout<<"internal x: "<< x <<endl;
        cin>>in;   
    }
    
    cout<<"EXTERNAL X: "<< x <<endl;

    return 0;
}
//using std::move templated fn

#include<iostream>
using namespace std;

class man
{
    public:
        man();
        man( int& a );
        man( int&& x) ;
        ~man();

    private:
        int x;
};


man::man() 
{ cout<< "created\n"; }
        
 man::man( int& a ) : x(a) 
{ cout<< "copied\n"; }

man::man( int&& a) : x(a)
{ cout<< "moved\n"; }

man::~man()
{  cout<<"destructed\n";  }


int main()
{
    man kellner;

    man aufraumer(5);

    int x=17 , y=9;
    man schreiber(x);
    
    man author(x+y);
    man polizei(move(x));


    return 0;
}
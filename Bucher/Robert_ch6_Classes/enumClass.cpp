#include <iostream>
using namespace std;

enum class Colorpallet1 :char      { red=1, blue, green };
enum class Colorpallet2 :long long { red=1, blue, green };

int main()
{
	Colorpallet1 col = Colorpallet1::red ;
	int red=1;
	
	if(col==Colorpallet1::red)
    	cout << "The color is red\n";
	else if(col==Colorpallet1::blue)
    	cout << "The color is blue\n";
	else if(col==Colorpallet1::green)
    	cout << "The color is green\n";
    	
    
    cout << sizeof(col)             <<"\n";
    cout << sizeof(Colorpallet1)    <<"\n";
    cout << sizeof(Colorpallet2)    <<"\n";
}

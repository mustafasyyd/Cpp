//GeeksForGeeks
// C++ code to demonstrate
// the working of setw() function

#include <ios>
#include <iostream>
#include <iomanip>
 using namespace std;

int main(){
	// Initializing the integer
	int num = 1020;
	cout << "Before setting the width: \n" << num << endl;

	// Using setw().
	cout << "Setting the width using setw to 5: \n"
            << setw(5) ;
	cout << num << endl;

/*
    string str;
    // setting string limit to 5 characters
    cout << "enter string: \n"; cin >> setw(5) >> str;
    cout << str;*/


    string str{"mustafasayed"};
    // adding padding
    cout << "Increasing Width:\n"
         << setw(20) << str << endl;
 
    // reducing width
    //cannot decrease the output width of the string to less than the actual characters present in it.
    cout << "Decreasing Width:\n" << setw(5) << str;

	return 0;
}

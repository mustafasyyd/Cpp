#include <iostream>
#include <vector>
#include "binarysearch.h"

using namespace std;


int main()
{
    float math_const;
    vector<float> math_constants = {3.14 , 4.54 , 5.6 , 14};

    cin>> math_const;

    auto result = BinarySearch<float>(math_constants , math_const);
    cout<<"Math constant: " << result << endl;

    return 0;
}
#include<iostream>
#include <map>
#include <chrono>

using namespace std ;

int main()
{
    pair<int , float> p = make_pair(12 , 3.14);
    cout << p.first << " " << p.second << endl;

    map<string , int> roads;
    roads.insert ( make_pair<string , int>("Autobahn" , 149) );
    roads.insert ( pair<string , int> ("Alexanderstrasse" , 258));
    //roads.insert ( "Geothe" , 114 );

    map< string , int>::iterator roadsIt;
    for ( roadsIt=roads.begin() ; roadsIt != roads.end() ; roadsIt++ ){
        cout << roadsIt->first << " " << roadsIt->second << endl; 
    }

    map <string , int> numbers (roads.begin() , roads.end());
    for ( roadsIt=numbers.begin() ; roadsIt != numbers.end() ; roadsIt++ ){
        cout << roadsIt->first << " " << roadsIt->second << endl; 
    }

    auto t1 = chrono::high_resolution_clock::now();
    auto t2 = chrono::high_resolution_clock::now();
    cout << chrono::duration_cast<chrono::nanoseconds>(t2 - t1).count();

    return 0;
}
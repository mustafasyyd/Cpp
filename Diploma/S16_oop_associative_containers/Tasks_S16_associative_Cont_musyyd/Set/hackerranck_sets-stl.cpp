/**
 * Sets are a part of the C++ STL , are containers that store unique elements following a specific order. 
 * Frequently used member functions of sets:
 *  Declaration : set<int> s;   //Creates a set of integers.
 *  Insert      : s.insert(x);  //Inserts an integer x into the set s.
 *  Erase       : s.erase(val); //Erases an integer val from the set s.
 *  Finde       : set<int>::iterator itr=s.find(val); 
 *                              //Gives the iterator to the element val if it is found otherwise returns s.end() .
                    Ex: set<int>::iterator itr=s.find(100); //If 100 is not present then it==s.end().
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void printSet( set<int32_t>& s){
    set<int32_t>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
        cout << *it;
    //for (auto& el : s)
        //cout << el << " "; 
    cout << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print32_t output to STDOUT */   
    set<int32_t> _set;
    set<int32_t>::iterator it;
     
    int32_t quries_number;
    cout<< "Enter queries number: "; 
    cin >> quries_number;
    
    for (int i =0 ; i < quries_number ; i++)
    {
        int32_t q_type , element     ;
        cout << "Enter query type [Insert=1 , Erase=2 , Check=3]\n";
        cin >> q_type;
        cout << "Enter element:\n";
        cin >> element ;
        
        switch (q_type){
            case 1:
                    _set.insert(element); break;
            case 2:
                    _set.erase(element);  break;
            case 3:
                    if ( ( it = _set.find( element ) ) != _set.end() )
                            cout << "Yes\n";
                    else    cout << "No\n";
                    break;            
        }  
    }
    printSet(_set);    
    
    return 0;
}
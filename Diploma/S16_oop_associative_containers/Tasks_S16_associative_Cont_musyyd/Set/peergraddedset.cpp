/**
 * this code is from a hackerranck user, he has some flaws and i have done some refinements on it refactored and it 
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<set>

using namespace std;


int main() {
    set<int>s;
    set<int>::iterator it;

    int qtype , element;
    long counter=0 , queries;
    cin>>queries;

    while(counter<queries)
    {
        cin>>qtype >> element;
        if(qtype==1)
        {
            s.insert(element);
            counter++;
        }
        else if(qtype==2)
        {
            it = s.find(element);
            if(element == (*it))
               s.erase(element);   
            counter++;                     
        }
        else if(qtype==3)
        {
            it = s.find(element);
            if(element ==(*it))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
            counter++;
        }
    }
			
 return 0;
}
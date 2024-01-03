#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>

using namespace std;

//Segmentation Fault

int main() 
{
    string stuName (""); int stuMark=0; 
    map<string , int> student;          //int length = nm.size();
   
    long long queries; int queryType;
    cout << "Enter queries number: "; cin >> queries;
    for ( int i = 0 ; i < queries ; i++)
    {
        map<string , int>::iterator it;         
        cout << "Enter query type (1.Insert  2.Erase 3.Print): \n"; cin >> queryType;
        cout << "Insert student name: "; cin >> stuName;
        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        switch ( queryType ) 
        {
            case 1: //cout << "Insert student mark: "; 
                cin>> stuMark;
                if ( (it = student.find(stuName)) != student.end() )
                    student[stuName] += stuMark;
                else 
                    student.insert( make_pair(stuName, stuMark) );
                    //student[stuName] = stuMark;
                break;
                
            case 2:
                if ( (it = student.find(stuName)) != student.end() )
                    student.erase(it);
                break;
                
            case 3:            
                //if ( (it = student.find(stuName)) != student.end() )
                        cout << student[stuName] << endl; 
                //else    cout << 0;
                break;
        }  
    }
    
    return 0;
}

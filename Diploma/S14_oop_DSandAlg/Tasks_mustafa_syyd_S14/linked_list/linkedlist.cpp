// C++ program for the implementation of 'Linked list' data structure.
#include<iostream>
#include "linkedlist.h"

using namespace std;

int main()
{   
    LinkedList list;

    list.add(612);
    list.add(132);
    list.add(228);

    cout<<"List content: \n";
    list.display();

    cout<<"Poped value: \n";
    cout<< list.pop() <<endl;
    
    
    cout<<"List content after Poping: \n";
    list.display();

    cout<<"List first value: " << list.getFirst() <<endl;


    return 0;
}
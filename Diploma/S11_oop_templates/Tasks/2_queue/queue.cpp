/**
 * < Templated class implimentation of queue data structure >
 * @file: queue.cpp
 * @author:mustafa.syys
*/

#include<iostream>
#include "queue.h"

using namespace std;
using usr_ds::Queue;

int main(){

    Queue<double>q;

    q.insertElement(3.14);
    q.insertElement(2.52);
    q.insertElement(1.09999);

    cout<< "First element: " <<q.firstElement() <<endl;
    cout<< "Last element: " <<q.lastElement() <<endl;

    double poped;
    q.popElement(poped);
    
    cout<< "First element: " << q.firstElement() <<endl;
    cout<< "Last element: "    << q.lastElement()  <<endl;
    
    cout<<"Poped element: " << poped <<endl;
    
    return 0;
}
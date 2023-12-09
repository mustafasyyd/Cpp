/**
 * < HEADER FILE > _QUEUE_
 * < Templated class implimentation of queue data structure >
 * @file: queue.h
 * @author:mustafa.syys
*/

#ifndef _QUEUE_
#define _QUEUE_

#include<iostream>
using namespace std;


//usr data structure (defined)
namespace usr_ds{ 
    
template <class T>
class Queue{
    public:
        Queue(int s=10 );
        ~Queue(){ delete [] queueptr; }

        bool insertElement(T element);

        bool popElement (T& element);

        void displayElements(){}
        
        T firstElement();
        T lastElement();

        bool isFull(){
            return (last >= size-1);
        }
        bool isEmpty(){
            return (last <= -1);
        }

    private:
        int first;
        int last;
        int size;
        T *queueptr;
}; //class Queue 

}//usr_ds

template <class T>
usr_ds::Queue<T>::Queue(int s)
{
    size = ( s>0 && s<100 )? s : 10;   
    first = -1 ;    last = -1 ;

    queueptr = new T[size];
}

template <class T>
bool usr_ds::Queue<T>::insertElement(T element)
{
    if(!isFull())
    {
        if (isEmpty())  first++ ;

        queueptr[++last] = element ;
        return 1 ;
        }
    return 0 ;
}

template <class T>
bool usr_ds::Queue<T>::popElement(T& element){
    if(!isEmpty())
    {
        element = queueptr[first++];
        return true;
    }    
    return false;
}
template <class T>
T usr_ds::Queue<T>::firstElement()
{
    if(!isEmpty())
        return queueptr[first];
    return 0;
}

template <class T>
T usr_ds::Queue<T>::lastElement()
{
    if(!isEmpty())
        return queueptr[last];
    return 0;
}

#endif
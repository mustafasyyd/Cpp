// C++ program for the implementation of 'Linked list' data structure.

#ifndef __LINKEDLIST__
#define __LINKEDLIST__

#include<iostream>



class link
{
    public:
    link();
    link(int32_t value , link* first ) 
            : data(value)
            , next(first)   {}

    int32_t data;
    link* next;
};

class LinkedList
{
    public:
    LinkedList() 
        : first(NULL)        {}

    void add(int32_t value)
    {
        link* newlink = new link(value ,first);
        first = newlink;
    }

    int32_t pop ()
    {   
        int32_t popedvalue = first->data;
        
        link* temp = first->next;
        delete first;
        first = temp;

        return popedvalue;
    }


    bool isEmpty()  { return first == NULL; }
    

    void display()
    {
        link* current = first;
        while(current != NULL)
        {
            std::cout<< current->data << std::endl;
            current = current->next;
        }
    } 

    int32_t getFirst()
    {
        return first->data;
    }

    private:
    link *first;    
};


#endif  //__LINKEDLIST__
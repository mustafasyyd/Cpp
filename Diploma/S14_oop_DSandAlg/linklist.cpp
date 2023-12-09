//linklist.cpp
#include <iostream>
using namespace std;

class linklist
{
    public:
        linklist() : next (nullptr)  {}
        
        linklist(int value ) 
            : data(value)
            , next (nullptr)    {}

        void add(int value)
        {
            linklist* newnode = new linklist(value);
            next = newnode;
        }

        void pop();

    private:
        int data;
        linklist* next;
};

int x=0

int main()
{
    linklist<int32_t> list;
    linklist<int32_t> first = &list ;
    
    list.add(50);

    return 0;
}
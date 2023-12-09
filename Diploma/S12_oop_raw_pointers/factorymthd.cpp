/**
 * static methode: using class methodes without the need to construct an obj.
 * 
 * @file: staticmethod.cpp
*/

#include<iostream>
using namespace std;

class Mouse
{
    public:
        Mouse() : m_id(000) {}
        Mouse(int id=123) : m_id(id) {}

        static void GetId()
        {
            cout<< "static mthd";
        }

    private:
        int m_id;
};


int main()
{
    
    cout<< "This is a mouse device\n";
    Mouse::GetId();
    cout<<endl;        

    return 0;
}
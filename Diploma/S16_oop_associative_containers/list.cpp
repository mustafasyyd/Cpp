#include<iostream>
#include<forward_list>

using namespace std;


int main()
{
    forward_list<int> _list(10);
    _list.assign({19 , 10 , 96});  //void assign(std::initializer_list<int> __il)
    for (auto& element : _list )
        cout << element << endl;
    cout << "---------------------------\n";

    forward_list<int> __flist;
    __flist.assign(2 ,11);  //assign fn is overloaded    
    for (auto& element : __flist )
        cout << element << endl;
    cout << "---------------------------\n";
    
    __flist.assign(_list.begin() , _list.end());
    for (auto& element : __flist )
    
        cout << element << endl;
    cout << "---------------------------\n";

    return 0;
}
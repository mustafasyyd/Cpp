#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

//class template
template <class T>
class AddElements{ 
    public:
        AddElements() {}
        explicit AddElements(T element) : m_element(element) {}
        T add (T element){  return (m_element + element); }

    private:
        T m_element;
};

//class template specification
    //class overloading
template <>
class AddElements<string>{
    public:
        AddElements() {}
        explicit AddElements(const string& element) : m_element(element) {}
        string concatenate(string& element)
        {    return  m_element + element;    }

    private:
        string m_element;
};


int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}

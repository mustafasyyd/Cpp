/**
 *  ...... < Implementation of Unique pointer as class template > ......
 * 
 * @file: main.cpp
 * 
*/

#include"unique_ptr.h"

int main()
{ 
    //factory mthd
    auto ptr = UniquePointer<Pen>::MakeUnique(291);
    cout<< "ptr:    " << ptr->getColorId() <<endl;

    //class way
    UniquePointer<Pen> uniqueBlue(new Pen(1293));
    cout<< "uniqueBlue:     " << uniqueBlue->getColorId() <<endl;
    

    Pen redPen (1898);

    UniquePointer<Pen> unqRed (&redPen);
    cout<< "unqRed:     " << unqRed->getColorId() <<endl;

    UniquePointer<Pen>unqNewRed( move(unqRed) );
    cout<< "unqRed moved to UnqNewRed:    " << unqNewRed->getColorId() <<endl;

    return 0;
}
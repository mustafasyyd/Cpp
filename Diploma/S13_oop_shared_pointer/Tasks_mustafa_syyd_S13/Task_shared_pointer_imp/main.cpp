/**
 *          ........ < Main file > ......
 * 
 * 
 * @file: main.cpp
*/

#include <iostream>
#include "sharedpointer.h"
#include "character.h"
#include<memory>

using namespace std;


int main()
{
    //SharedPointer    //get_count                  //shared_ptr        //use_count
    SharedPointer<Character> chShared (new Character3D("Annie" , "Blender3D" , 5 ));
    cout<< "Charachter Name             :    " << chShared->getName() <<endl;
    cout<< "software used               :    " << chShared->getSoftware() <<endl;
    cout<< "Charachter effectivity level:    " << chShared->getEffectLevel() << " out of 10" <<endl;
    cout<< "Count: " << chShared.get_count() <<endl;


    SharedPointer<Character> sh_p (chShared);
    cout<< "Charachter Name             :    " << sh_p->getName() <<endl;
    cout<< "software used               :    " << sh_p->getSoftware() <<endl;
    cout<< "Charachter effectivity level:    " << sh_p->getEffectLevel() << " out of 10" <<endl;
    cout<< "Count: " << chShared.get_count() <<endl;


    SharedPointer<Character> p ( new Character3D("Rudio" , "Blender 3D" , 7 ) );
    cout<< "Charachter Name             :    " << p->getName() <<endl;
    cout<< "software used               :    " << p->getSoftware() <<endl;
    cout<< "Charachter effectivity level:    " << p->getEffectLevel() << " out of 10" <<endl;
    cout<< "Count: " << p.get_count() <<endl;



    return 0;
}

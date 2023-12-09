#include <iostream>

//pointers.
void swapp(int *a, int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

void swapr(int &apx, int &bpy){
    int temp = bpy;
    bpy = apx;
    apx = temp;
}


int main(){

    //defining the variables.
    int x = 1997;
    int y = 2002;

    std::cout<< "<--Wechseln-->" << std::endl;

    //swaping x with y using pointres.
    swapp(&x, &y);
    std::cout << x << " " << y << std::endl;
    
    //swaping x with y using references.
    swapr(x, y);
    std::cout << x << " " << y << std::endl;


    //checking allowed n. of references.
    int &arx = x;
    int &brx = x;
    int &crx = x;
    int &drx = x;
    int &erx = x;
    int &frx = x;

    std::cout << "value of x: "<< x <<std::endl;
    std::cout << "value of arx ref: "<< arx <<std::endl;
    std::cout << "value of brx ref: "<< brx <<std::endl;
    std::cout << "value of crx ref: "<< crx <<std::endl;
    std::cout << "value of drx ref: "<< drx <<std::endl;
    std::cout << "value of erx ref: "<< erx <<std::endl;
    std::cout << "value of frx ref: "<< frx <<std::endl;

    //referencing to a reference.
    int &nra = arx;
    std::cout<<std::endl;
    std::cout << "value of nra ref: "<< nra <<std::endl;

}
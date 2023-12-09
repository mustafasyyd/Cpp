/*
two strings name as input, str.
Given name from consol input.
Add add the second string to the first
and put in the first (name)
   name = name + str;

   str = "embdd.sys"
*/

#include <iostream>

int main(){
    
//    std::string str=" embdd.sys";
//    std::string str ("embdd.sys")
      std::string str{" embdd.sys"};

    std::string name("");

    std::cout<< "Please insert a name"<< std::endl;
    std::cin >> name;
    
//    std::cout<< "name Size is: " << name.size()<< std::endl;    
    std::cout<< "name Size is: " << sizeof(std::string)<< std::endl;    

    name+= str;

    std::cout<< "Full name is:  "<< name << std::endl;
    std::cout<< "name Size is: " << sizeof(std::string)<< std::endl;    
   
    return 0;

}
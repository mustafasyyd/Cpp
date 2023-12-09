
#ifndef hady_lib_H_
#define hady_lib_H_
#include<iostream>
#include<array>
#include<vector>
#include<iterator>
#include<algorithm>
#include<functional>
#include<math.h>

#define disblay(address)  do{ \
                                           for( auto  it : address) \
                                           {\
                                              std::cout <<  it << "\n" ;\
                                           }\
                                           std::cout<<"\n\n";\
                                        }while(0) ;*/



/*void input   (  std::vector <int>  &vector_add ) 
{
  for ( auto it = vector_add.begin() ; it != vector_add.end(); it ++  )
    {
      std::cout << "enter elemant\n" ;
      std::cin  >> *it  ;
      std::cout << std::endl ;
    }
    std::cout<<"\n\n";
}



void output   (  std::vector <int>   & vector_add ) 
{
  for ( auto  it  :   vector_add  )
    {
      std::cout << " elemant\n" ;
      std::cout <<   it  ;
      std:: cout << std::endl ;
    }
    std::cout<<"\n\n";
}






*/
#endif



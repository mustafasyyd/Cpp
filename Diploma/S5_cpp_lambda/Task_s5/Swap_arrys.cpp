#include <iostream>
#include <array>
#include <vector>
#include <functional>
#include <algorithm>

typedef std::vector<int> vectori;

/*              ..... < Assignment > .....
  *
  *  Rechnen(): nimmt dva parameters, eine Reihe (array/vector),
  *  und eine function, die modifiziert die Elemente des arrayes: wird mit einem anderen Array ausgetauscht. 
  *  dann sortieren sie abschliessend das array. 
  *
  * @file Task_s5.cpp
  * @Author: mustafa.syyd
  *
*/

/*
   *  Function Calculate(): takes two parameters,
   *        an array (array or vector),
   *        and a function (Fn or lambda) that modifies the elements of the array: is exchanged with another array. 
   * Then finally they sort the array.
*/

namespace array_op{
    
    //functionsdefinition
    void Rechnen_1 (std::vector <int> &vec,
                         std::function <void (std::vector<int>::iterator,std::vector<int>::iterator)>sort_pr){ // std::function <void()> lm
        //getting values form usr.
        std::vector <int> vec_1 (4,0);
        std::for_each (vec_1.begin(), vec_1.end(), [] (int &li){
            std::cin>> li;
        });

        std::swap(vec, vec_1); //austauschen dva Arrays.
        std::sort(vec.begin(), vec.end()); //sortieren des Arrays.

        //Drucken des getauscht Array.
        sort_pr(vec.begin(), vec.end());
    }

    //goal is to swap arr with brr, the sorting arr and printing it.
    void Rechnen_2 (vectori &arr, vectori &brr, 
                         std::function <void (int&, int&)> lm_swap,
                                 std::function <void (std::vector<int>::iterator,std::vector<int>::iterator)>sort_pr ){        
        
        for (int i=0; i<brr.size(); i++){
            lm_swap (arr[i], brr[i]);
        }     
        sort_pr(arr.begin(), arr.end()); //sortieren des Arrays.
    }
} 

int main(){

    std::vector <int> vec {1, 4, 9, 2}; // first array                   :date of andalusia retake  
    std::vector <int> vec_sw {1, 9, 6, 2}; //zweites Array               :date of ِAlgerien Revolution.

    auto lm_swap = [](int &a, int &b){ //austauschen dva Arrays.
                                        int t;
                                        t = a;
                                        a = b;
                                        b = t;        
                                     };

    auto val2print = [](int val){ 
                                    std::cout << val << " ";
                                };

    auto sort_pr = [ &val2print ] (std::vector<int>::iterator it1, std::vector<int>::iterator it2) {
        
        std::sort(it1, it2); //sortieren des Arrays.
        std::cout<< "Array sorted: ";
        std::for_each (it1 , it2 , val2print);
        std::cout<< std::endl;
    };

    array_op::Rechnen_1(vec , sort_pr);

    array_op::Rechnen_2(vec, vec_sw , lm_swap ,sort_pr);  //how and type isnot defined yet. 

  

    return 0;
}
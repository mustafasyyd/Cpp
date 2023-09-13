#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <numeric>
/*
 * code to tain on the algorithm standard template library
 * @file algorithm_stl.cpp
 * @Author: mustafa.syyd
*/

bool is_Shorter( std::string &s1, std::string &s2);

int main(){

    
    std::vector<int> v{2, 100, 5, 120, 99, 5, 12, 23, 40, 2, 15, 5, 1};


    std::cout << "List unsorted " <<std::endl;
    std::for_each (v.begin(), v.end(), [](int li) -> void {
        std::cout << li << " ";
    });
    std::cout<< std::endl;

    std::sort (v.begin(), v.end());

    std::cout << "List sorted " <<std::endl;
    std::for_each(v.begin(), v.end(), [](int li) {
        std::cout << li << " ";
    });
    std::cout<< std::endl;

    //=========== <COUNT> ==================================================//
    auto c = std::count (v.begin(), v.end(), 5);
    std::cout << c << " "<< std::endl;

    std::cout <<" ... Count ..."<< std::endl;
    std::for_each (v.begin(), v.end(), [&v] (int v_el) ->void {
        auto count_el =std::count(v.begin(), v.end(), v_el);
        std::cout << count_el << " ";
    });
    std::cout<< std::endl;
    
    //============ <FIND > ==================================================//
    auto f =std::find(v.begin(), v.end(), 111);

    std::cout <<" ... Find ..."<< std::endl;
    std::cout << *f << std::endl; 
    
         //--------------------//
    std::vector <std::string> v_str { "mus" ,"mhmud", "rhman", "mnsur"};
    std::for_each(v_str.begin(), v_str.end(), [] (std::string s) ->void {
        std::cout << s << " ";
    });
    std::cout<< std::endl; 

    //============ <push_back> ==================================================//
   
    v_str.push_back("ali");
    std::for_each(v_str.begin(), v_str.end(), [] (std::string s) ->void {
        std::cout << s << " ";
    });
    std::cout<< std::endl; 
    
    v_str.push_back("hussen");
    v_str.push_back("mus");
    v_str.push_back("mhmud");

    std::for_each(v_str.begin(), v_str.end(), [] (std::string s) ->void {
        std::cout << s << " ";
    });
    std::cout<< std::endl; 

            //-------------count v_str-------------//
   
    std::cout << " count v_str " <<std::endl;
    std::for_each( v_str.begin(), v_str.end(), [ &v_str ] (std::string str) ->void {
            auto count_el = std::count( v_str.begin(), v_str.end(), str );
            std::cout<< count_el << " ";
    });
    std::cout<< std::endl; 

    //============ <ACCUMULATE> ==================================================//

    auto acc = std::accumulate(v.begin(), v.end(), 0);
    std::cout << acc << std::endl;

    int x=9;
    acc = std::accumulate(v.begin(), v.end(), x);
    std::cout << acc << std::endl;
    
    /* .......must explore it....
    acc = std::accumulate(v.begin(), v.end(), [&x] () ->int {
        return x ;
    });
    std::cout << acc << std::endl;
    */

   
    std::vector <std::string> v_s { "Cpp " ,"Digital logic ", "arch ", "assembly "};
    std::string sum = std::accumulate( v_s.begin(), v_s.end(), std::string("") );
    std::cout << sum << std::endl;
    
        //-------------EXERCISES SECTION 10.2.1----------------//
    
    //-----Exercise 10.3------
    std::vector <int> v_int{1, 9, 1, 0 , 1, 9, 9, 6};
    
    /*int sum_v= [&v_int](int i) ->int {
        i = std::accumulate(v_int.begin(), v_int.end(), 0);
        return i;
    };
    std::cout<< "Sum_v: "<< sum_v << std::endl;
    */
         //-------getan anders------------//
    
    int sumv = std::accumulate(v_int.begin(), v_int.end(), 0);
    std::cout<< "Sumv: "<< sumv << std::endl;

    //-----Exercise 10.2------
    std::vector <double> vv {1, 1, 2, 1.3};
    int sum_d = std::accumulate(vv.cbegin(), vv.cend(), 0); //double gilt hier überwiegend als int. 
    std::cout<< "Sum: "<< sum_d << std::endl;

//=============Fill=====================================================================//
    
    std::cout<< "Filling " << std::endl;
    std::fill (v_int.begin(), v_int.end(), 3);
    std::for_each(v_int.begin(), v_int.end(), [] (int i) -> void {
        std::cout << i << " ";
    });
    std::cout<< std::endl;


    std::cout<< "Filling " << std::endl;
    std::fill (v_int.begin(), v_int.begin() , 10); // ask m.said
    std::for_each(v_int.begin(), v_int.end(), [] (int i) -> void {
        std::cout << i << " ";
    });
    std::cout<< std::endl;


    //============= pass fn to algorithm ===========================================================//

    std::string s1{"mustafa.syyd"};
    std::string s2{"mahmud.syyd"};
    
    std::vector <std::string> v1 {"mustafa","syyd", "mhmud","ali"};
    std::sort (v1.begin(), v1.end(), is_Shorter);
    std::for_each(v1.begin(), v1.end(), [] (std::string element) -> void {
        std::cout << element << " ";
    });
    std::cout<< std::endl;

    return 0;
}

bool is_Shorter( std::string &s1, std::string &s2){
    return s1.size() < s2.size();
}
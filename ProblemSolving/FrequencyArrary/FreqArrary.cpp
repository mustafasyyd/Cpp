/**
 * @file    FreqArrary.cpp
 * @author  mustafa.sayed
 * @date    7.25.2024
 * @brief   Frequencey array generator
 * 
 * */

#include "FreqArrary.h"

 std::vector<int> Get_freq_array( std::vector<int>array )
 {
    auto MAXSIZE = *( max_element(array.begin() , array.end()) );
    std::vector<int>freq  (MAXSIZE+1);
    for(auto i=0; i<array.size() ;i++)
        freq[(array[i])]++;
 
    return freq;
 }
/**  
 * 
 * @file sort.cpp
 * @author mustafa.sayed
 * @date 15/7/2023
 * 
*/

#include <iostream>
#include<vector>
#include<algorithm>
#include"sort.h"


using std::vector;
int main()
{
    vector<int> v(vectors::Get_vec_size(),0);
    vectors::Input_vector(v);
    std::sort(v.begin(),v.end());
    vectors::Output_vector(v);

    return 0;
}
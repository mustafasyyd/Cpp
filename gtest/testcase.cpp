#include<gtest/gtest.h>
// #include <iostream>

//Functions definitions
//----------------------------------------
int add (int a , int b)
{
    return ( a+b );
}
//----------------------------------------


// Test cases
//----------------------------------------
TEST(add, positive)
{
    ASSERT_EQ(12 , add(6,6));
}

TEST(add, negative)
{
    ASSERT_EQ( -50 , add(-48,-4));
}
//----------------------------------------


//MAIN PROGRAM
int main( int *argc , int **argv)
{

//Running the test here
//-------------------------------
::testing::InitGoogleTest(argc , (wchar_t**)argv);
RUN_ALL_TESTS();

}























//implementing and testing code the old way.
//-----------------------------------
    // int x{2} , y{5};
    // int res{add(2,6)};
    // std::cout<< "-----------------------------------\n"
        
    //     << "Multiplying result: " 
    //     << res
    //     << "\n-----------------------------------" << 
    // std::endl;

    // std::cout<< mul(2,2);
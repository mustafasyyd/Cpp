cmake_minimum_required(VERSION 3.22) # version can be different

project("gtest") #name of your project

find_package(GTest REQUIRED)

add_executable(testcase.out testcase.cpp) # add this executable

target_link_libraries(testcase.out ${GTEST_LIBRARIES}) # link google test to this executable

#start testing
enable_testing() #to  discover tests in test explorer 
add_test(testcase.out)
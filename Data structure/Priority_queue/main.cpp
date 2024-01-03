#include <iostream>
#include <queue>
#include <array>

// template <typename T>
// void print(T& q)
// {
//     std::cout<< '{ ' ;
//     for(auto el : q)
//         std::cout<< el << ' ' ;    
//     std::cout<< '}' ;
// }

int main()
{
    std::array<int,5> students_grades {67,99,52,77,87};
    std::priority_queue<int> grades;

    for (auto el : students_grades)
        grades.push(el);

    // print(grades);


    return 0;
}
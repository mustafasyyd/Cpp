#include <iostream>
#include <array>

/*
 * Student grading system
 * ask student for their grade
 * evaluate grade : 
 * if grade is less than 50 then they are failed
 * if grade is greater than 50 and less than  65 then they are passed
 * if grade is greater than 65 and less than 75 then they are Good
 * if grade is greater than 75 and less than 85 then they are very Good
 * if grade is greater than 85 to 100 then they are Excellent
 * print results
 * for 10 students each has 5 Subjects
 * @file task_1_Student grading system.cpp
 * @Author: mustafa syyd
*/

enum student_status{
    BESTANDEN= 50,
    GUT= 65, 
    SEHR_GUT= 75,
    EXZELLENT= 85,
    MAX= 100
};

void Calc_grades(int grade_avg);
void Get_grades(int grade[], int NUM_OF_STUDENTS , int NUM_OF_SUBJECTS);


int main(){

    constexpr int NUM_OF_STUDENTS = 10;
    constexpr int NUM_OF_SUBJECTS = 5;

    int grade[NUM_OF_STUDENTS][NUM_OF_SUBJECTS]= {0};


    //Get grades from usr.
    Get_grades( grade, NUM_OF_STUDENTS, NUM_OF_SUBJECTS);

     
    return 0;
}


//******************************************************************
void Calc_grades(int grade_avg){

        //Calculate grades status & print the result.
        if (grade_avg < BESTANDEN) {
            std::cout << "DURCHGEFALLEN" << std::endl;
        } else if (grade_avg >= BESTANDEN && grade_avg < GUT) {
            std::cout << "BESTANDEN" << std::endl;
        } else if (grade_avg >= GUT && grade_avg < SEHR_GUT) {
            std::cout << "GUT" << std::endl;
        } else if (grade_avg >= SEHR_GUT && grade_avg < EXZELLENT) {
            std::cout << "SEHR_GUT" << std::endl;
        } else if (grade_avg >= EXZELLENT && grade_avg < MAX) {
            std::cout << "Excellent" << std::endl;
        }
        std::cout<< "----------------------------------------------------------" << std::endl;
}

void Get_grades(int grade[], int NUM_OF_STUDENTS , int NUM_OF_SUBJECTS)
{
    for (int i = 0; i < NUM_OF_STUDENTS; i++)
    {
        std::cout<< "Grades for student_"<< (i+1)<< std::endl;
        for (int j = 0; j < NUM_OF_SUBJECTS; j++)
        {
            std::cout<< "Enter grades for Subject_"<< (j+1)<< ": ";
            std::cin>> grade [i][j];
        }   

        int sum = 0;
        for (int j = 0; j < NUM_OF_SUBJECTS; j++)
        {
            sum += grade[i][j];
        } 

        double grade_avg = (double)sum / (double)NUM_OF_SUBJECTS;

        std::cout<< "----------------------------------------------------------" << std::endl;
        std::cout<< "Student_" << (i+1) << " grade: ";
        Calc_grades(grade_avg);
    
    }
}
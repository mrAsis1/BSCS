#include "student.h"
#include <iostream>

student::~student()
{

}

student::student()
{
    studentID = "00000";
    GPA = 0.0;
}

student::student(std::string i, float g)
{
    studentID = i;
    GPA = g;
}

student::student(std::string i, float g, std::string n, int a):person(n, a)
{
    studentID = i;
    GPA = g;
}

void student::setStudentID(std::string i)
{
    studentID = i;
}

std::string student::getStudentID()
{
    return studentID;
}

void student::setStudentGPA(float a)
{
    GPA = a;
}

float student::getStudentGPA()
{
    return GPA;
}

void student::inputStudentInfo(std::string i, float g)
{
    studentID = i;
    GPA = g;
}

void student::displayStudentInfo()
{
    displayBasicInfo();
    std::cout << "Student ID : " << studentID << std::endl;
    std::cout << "Student GPA : " << GPA << std::endl;
}

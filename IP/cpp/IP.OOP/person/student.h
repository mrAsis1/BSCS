#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <string>
#include "person.h"

class student : public person
{
public:
    ~student();
    student();
    student(std::string, float);
    student(std::string, float, std::string, int);
    void setStudentID(std::string);
    std::string getStudentID();
    void setStudentGPA(float);
    float getStudentGPA();
    void inputStudentInfo(std::string, float);
    void displayStudentInfo();

private:
    std::string studentID;
    float GPA;
};



#endif // STUDENT_H_INCLUDED

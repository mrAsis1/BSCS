#ifndef STAFF_H_INCLUDED
#define STAFF_H_INCLUDED
#include "person.h"
#include <string>

class staff : public person
{
public:
    ~staff();
    staff();
    staff(std::string, float);
    staff(std::string, float, std::string, int);
    void setPosition(std::string);
    std::string getPosition();
    void setSalary(float);
    float getSalary();
    void inputStaffInfo(std::string, float);
    void displayStaffInfo();

private:
    std::string position;
    float salary;
};


#endif // STAFF_H_INCLUDED

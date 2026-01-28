#include "staff.h"
#include <iostream>

staff::~staff()
{

}

staff::staff()
{
    position = "";
    salary = 0;
}

staff::staff(std::string p, float s)
{
    position = p;
    salary = s;
}

staff::staff(std::string p, float s, std::string n, int a):person(n, a)
{
    position = p;
    salary = s;
}

void staff::setPosition(std::string p)
{
    position = p;
}

std::string staff::getPosition()
{
    return position;
}

void staff::setSalary(float s)
{
    salary = s;
}

float staff::getSalary()
{
    return salary;
}

void staff::inputStaffInfo(std::string p, float s)
{
    position = p;
    salary = s;
}

void staff::displayStaffInfo()
{
    displayBasicInfo();
    std::cout << "Staff Position : " << position << std::endl;
    std::cout << "Staff Salary : " << salary << std::endl;
}

#include "person.h"
#include <iostream>

person::~person()
{

}

person::person()
{
    name = "";
    age = 0;
}

person::person(std::string n, int a)
{
    name = n;
    age = a;
}

void person::setName(std::string n)
{
    name = n;
}

std::string person::getName()
{
    return name;
}

void person::setAge(int a)
{
    age = a;
}

int person::getAge()
{
    return age;
}

void person::inputBasicInfo(std::string n, int a)
{
    name = n;
    age = a;
}

void person::displayBasicInfo()
{
    std::cout << "Name : " << name << std::endl;
    std::cout << "Age : " << age << std::endl;
}

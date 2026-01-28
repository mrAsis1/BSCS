#include "Temp.h"

Temp::~Temp()
{
}

Temp::Temp()
{
    name = "";
    age = 0;
}

Temp::Temp(std::string n, int a)
{
    name = n;
    age = a;
}

int Temp::getAge()
{
    return age;
}

std::string Temp::getName()
{
    return name;
}

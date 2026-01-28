#ifndef TEMP_H_INCLUDED
#define TEMP_H_INCLUDED
#include <string>

class Temp
{
public:
    ~Temp();
    Temp();
    Temp(std::string n, int a);
    int getAge();
    std::string getName();

private:
    std::string name;
    int age;
};

#endif // TEMP_H_INCLUDED

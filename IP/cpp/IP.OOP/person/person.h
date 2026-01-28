#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <string>

class person
{
private:
    std::string name;
    int age;

public:
    ~person();
    person();
    person(std::string, int);
    void setName(std::string);
    std::string getName();
    void setAge(int);
    int getAge();
    void inputBasicInfo(std::string, int);
    void displayBasicInfo();
};


#endif // PERSON_H_INCLUDED

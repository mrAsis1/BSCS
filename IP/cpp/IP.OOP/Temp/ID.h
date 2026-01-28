#ifndef ID_H_INCLUDED
#define ID_H_INCLUDED
#include "Temp.h"

class ID : public Temp
{
public:
    ~ID();
    ID();
    ID(std::string n, int a, int i);
    int getID();

private:
    int id;
};


#endif // ID_H_INCLUDED

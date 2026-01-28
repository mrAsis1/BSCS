#include "ID.h"

ID::~ID()
{

}

ID::ID():Temp()
{
    id = 0;
}

ID::ID(std::string n, int a, int i):Temp(n, a)
{
    id = i;
}

int ID::getID()
{
    return id;
}

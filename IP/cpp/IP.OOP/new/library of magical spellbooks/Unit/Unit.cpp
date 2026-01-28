#include "Unit.h"

Unit::Unit()
{
    name = "Unnamed Unit";
    health = 100;
    attackPower = 20;
}

Unit::Unit(std::string n, int p)
{
    name = n;
    health = 100;
    attackPower = p;
}

Unit::~Unit()
{

}

std::string Unit::getName() const
{
    return name;
}

int Unit::getHealth() const
{
    return health;
}

void Unit::takeDamege(int a)
{
    health -= a;
    if(health < 0)
        health = 0;
}

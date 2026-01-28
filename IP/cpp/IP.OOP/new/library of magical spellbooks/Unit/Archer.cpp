#include "Archer.h"

Archer::~Archer()
{

}

Archer::Archer():Unit("Default Archer", 20)
{

}

Archer::Archer(std::string n, int p):Unit(n, p)
{

}

int Archer::attack() const
{
    return attackPower - 5;
}

#include "Soldier.h"

Soldier::~Soldier()
{

}

Soldier::Soldier():Unit("Default Soldier",20)
{

}

Soldier::Soldier(std::string n, int p):Unit(n, p)
{

}

int Soldier::attack() const
{
    return attackPower + 10;
}

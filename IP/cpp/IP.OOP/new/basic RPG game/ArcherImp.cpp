#include "Archer.h"
#include <iostream>

Archer::~Archer()
{
    cout << "Archer " << name << "destroyed" << endl;
}

Archer::Archer():GameCharacter(100,"Archer")
{
    cout << "Archer " << name << " created" << endl;
}

Archer::Archer(string n):GameCharacter(100,n)
{
    cout << "Archer " << name << " created" << endl;
}

void Archer::attack(GameCharacter* target)
{
    target->takeDamage(17);
    cout << name << " casts a fireball at " << target->getName() << endl;
}

void Archer::takeDamage(int amount)
{
    GameCharacter::takeDamage(amount);
}

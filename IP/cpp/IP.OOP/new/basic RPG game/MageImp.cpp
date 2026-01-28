#include "Mage.h"
#include <iostream>

Mage::~Mage()
{
    cout << "Mage " << name << "destroyed" << endl;
}

Mage::Mage():GameCharacter(100,"Mage")
{
    cout << "Mage " << name << " created" << endl;
}

Mage::Mage(string n):GameCharacter(100, n)
{
    cout << "Mage " << name << " created" << endl;;
}

void Mage::attack(GameCharacter* target)
{
    target->takeDamage(17);
    cout << name << " casts a fireball at " << target->getName() << endl;
}

void Mage::attack(vector<GameCharacter*>& target)
{
    for(int i = 0; i < target.size(); i++)
        target.at(i)->takeDamage(16);
     cout << name << " casts a fireball at enemies!" << endl;
}

void Mage::takeDamage(int amount)
{
    cout << name << " uses a magic shield" << endl;
    GameCharacter::takeDamage(amount - 3);
}

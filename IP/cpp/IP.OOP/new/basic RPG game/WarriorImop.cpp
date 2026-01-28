#include "Warrior.h"
#include <iostream>
#include <string>
using namespace std;

Warrior::~Warrior()
{
    cout << "Warrior " << name << "destroyed" << endl;
}

Warrior::Warrior():GameCharacter(150, "Warrior")
{
    cout << "Warrior " << name << " created" << endl;;
}

Warrior::Warrior(string n):GameCharacter(150, n)
{
    cout << "Warrior " << name << " created" << endl;;
}

void Warrior::attack(GameCharacter* target)
{
    cout << name << " slashes " << target->getName() << " with a sword!" << endl;
    target->takeDamage(15);
}

void Warrior::attack(vector<GameCharacter*>& targets)
{
    cout << name << " performs a spin attack on multiple enemies!" << endl;
    for(int i = 0; i < targets.size(); i++)
        targets.at(i)->takeDamage(18);

}

void Warrior::takeDamage(int amount)
{
    cout << name << " blocks some damage " << endl;
    GameCharacter::takeDamage(amount - 3);
}

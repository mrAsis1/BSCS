#include "GameCharacter.h"
#include <iostream>

GameCharacter:: ~GameCharacter()
{
    cout << "GameCharacter destructor called for " << name << endl;
}

GameCharacter::GameCharacter()
{
    name = "No Name";
    health = 100;
    cout << "GameCharacter constructor called for " << name << endl;
}

GameCharacter::GameCharacter(int h, string n)
{
    health = h;
    name = n;
    cout << "GameCharacter constructor called for " << name << endl;
}

void GameCharacter::takeDamage(int amount)
{
    health -= amount;
    if(health < 0)
        health = 0;
    cout << name << " takes " << amount << " damage. Remaining health: " << health << endl;
}

int GameCharacter::getHealth() const
{
    return health;
}

string GameCharacter::getName() const
{
    return name;
}

bool GameCharacter::isAlive() const
{
    if(health > 0)
        return true;
    return false;
}

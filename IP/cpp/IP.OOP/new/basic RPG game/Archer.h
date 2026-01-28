#ifndef ARCHER_H_INCLUDED
#define ARCHER_H_INCLUDED
#include "GameCharacter.h"

class Archer : public GameCharacter
{
public:
    ~Archer();
    Archer();
    Archer(string n);
    void attack(GameCharacter* target);
    void takeDamage(int amount);
};

#endif // ARCHER_H_INCLUDED

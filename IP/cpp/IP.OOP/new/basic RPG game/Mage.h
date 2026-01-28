#ifndef MAGE_H_INCLUDED
#define MAGE_H_INCLUDED
#include <vector>
#include "GameCharacter.h"

class Mage : public GameCharacter
{
public:
    ~Mage();
    Mage();
    Mage(string n);
    void attack(GameCharacter* target);
    void attack(vector<GameCharacter*>& target);
    void takeDamage(int amount);
};

#endif // MAGE_H_INCLUDED

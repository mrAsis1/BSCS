#ifndef WARRIOR_H_INCLUDED
#define WARRIOR_H_INCLUDED
#include "GameCharacter.h"

class Warrior : public GameCharacter
{
public:
    ~Warrior();
    Warrior();
    Warrior(string n);
    void attack(GameCharacter* target) override;
    void attack(vector<GameCharacter*>& target);
    void takeDamage(int amount) override;

};

#endif // WARRIOR_H_INCLUDED

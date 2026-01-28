#ifndef GAMECHARACTER_H_INCLUDED
#define GAMECHARACTER_H_INCLUDED
#include <vector>
#include <string>
#include <cmath>
using namespace std;

class GameCharacter
{
public:
    virtual ~GameCharacter();
    GameCharacter();
    GameCharacter(int h, string n);
    virtual void attack(GameCharacter* target)=0;
    virtual void takeDamage(int amount);
    int getHealth() const;
    string getName() const;
    bool isAlive() const;

protected:
    int health;
    string name;
};


#endif // GAMECHARACTER_H_INCLUDED

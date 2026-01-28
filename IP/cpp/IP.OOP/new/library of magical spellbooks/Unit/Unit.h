#ifndef UNIT_H_INCLUDED
#define UNIT_H_INCLUDED
#include <string>

class Unit
{
public:
    Unit();
    Unit(std::string n, int p);
    virtual ~Unit();

    std::string getName() const;
    int getHealth() const;
    virtual int attack() const = 0;
    void takeDamege(int a);

protected:
    std::string name;
    int health;
    int attackPower;
};

#endif // UNIT_H_INCLUDED

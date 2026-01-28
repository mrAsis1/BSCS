#ifndef SOLDIER_H_INCLUDED
#define SOLDIER_H_INCLUDED
#include "Unit.h"

class Soldier : public Unit
{
public:
    ~Soldier();
    Soldier();
    Soldier(std::string n, int p);
    int attack() const override;
};

#endif // SOLDIER_H_INCLUDED

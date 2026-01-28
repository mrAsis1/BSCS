#ifndef ARCHER_H_INCLUDED
#define ARCHER_H_INCLUDED
#include "Unit.h"

class Archer : public Unit
{
public :
    ~Archer();
    Archer();
    Archer(std::string n, int p);

    int attack() const;
};

#endif // ARCHER_H_INCLUDED

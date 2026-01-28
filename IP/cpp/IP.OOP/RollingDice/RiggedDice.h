#ifndef RIGGEDDICE_H_INCLUDED
#define RIGGEDDICE_H_INCLUDED
#include "Dice.h"

class RiggedDice : public Dice
{
public:
    ~RiggedDice();
    RiggedDice();
    RiggedDice(int s);
    int rollDice()const;
} ;


#endif // RIGGEDDICE_H_INCLUDED

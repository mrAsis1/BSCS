#ifndef TWODICE_H_INCLUDED
#define TWODICE_H_INCLUDED
#include "Dice.h"
#include "RiggedDice.h"

class TwoDice
{
public:
    TwoDice();
    TwoDice(int numSides, int sufSize);
    ~TwoDice();
    void suffle();
    int dice1SuffleAt(int);
    int dice2SuffleAt(int);
    int getSuffleSize();

private:
    int suffleSize;
    int *dice1Suffle;
    int *dice2Suffle;
    Dice d1;
    RiggedDice d2;
};

#endif // TWODICE_H_INCLUDED

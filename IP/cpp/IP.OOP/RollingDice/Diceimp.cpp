#include "Dice.h"
#include <cstdlib>
#include <time.h>

Dice::Dice()
{
    numSides = 6;
    srand(time(NULL));
}

Dice::Dice(int s)
{
    numSides = s;
    srand(time(NULL));
}

Dice::~Dice()
{
}

void Dice::setDiceSides(int s)
{
    numSides = s;
}

int Dice::rollDice() const
{
    return rand() % numSides + 1;
}

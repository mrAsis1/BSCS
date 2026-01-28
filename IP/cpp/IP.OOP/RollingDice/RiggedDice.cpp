#include "RiggedDice.h"
#include <iostream>

RiggedDice::~RiggedDice()
{

}

RiggedDice::RiggedDice():Dice()
{

}

RiggedDice::RiggedDice(int s):Dice(s)
{

}

int RiggedDice::rollDice()const
{
    if(rand() % 4 == 0)
        return numSides;
    else
        return Dice::rollDice();
}

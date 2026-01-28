#include "TwoDice.h"

TwoDice::TwoDice(): d1(6), d2(6), suffleSize(10)
{
    dice1Suffle = new int[suffleSize];
    dice2Suffle = new int[suffleSize];
}

TwoDice::TwoDice(int numSides, int sufSize): d1(numSides), d2(numSides), suffleSize(sufSize)
{
    dice1Suffle = new int[suffleSize];
    dice2Suffle = new int[suffleSize];
}

TwoDice::~TwoDice()
{
    delete[] dice1Suffle;
    delete[] dice2Suffle;
}

void TwoDice::suffle()
{
    for(int i = 0; i < suffleSize; i++)
    {
        dice1Suffle[i] = d1.rollDice();
        dice2Suffle[i]= d2.rollDice();
    }
}

int TwoDice::dice1SuffleAt(int i)
{
    return dice1Suffle[i];
}

int TwoDice::dice2SuffleAt(int i)
{
    return dice2Suffle[i];
}

int TwoDice::getSuffleSize()
{
    return suffleSize;
}

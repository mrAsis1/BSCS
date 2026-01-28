#include "BattleHistory.h"

BattleHistory::BattleHistory()                // Default to 5 rounds
{
    roundCount = 5;
    soldierLog = new int[roundCount];
    archerLog = new int[roundCount];
}
BattleHistory::BattleHistory(int rounds)     // Custom number of rounds
{
    roundCount = rounds;
    soldierLog = new int[roundCount];
    archerLog = new int[roundCount];
}
BattleHistory::~BattleHistory()
{
    delete[] soldierLog;
    delete[] archerLog;
}

void BattleHistory::simulate()               // Run battle and record attacks
{
    for(int i = 0; i < roundCount; i++)
    {
        *(soldierLog + i) = s1.attack();
        *(archerLog + i) = a1.attack();
    }
}

int BattleHistory::soldierAttackAt(int i)
{
    return  *(soldierLog + i);
}

int BattleHistory::archerAttackAt(int i)
{
    return *(archerLog + i);
}

int BattleHistory::getRoundCount()
{
    return roundCount;
}

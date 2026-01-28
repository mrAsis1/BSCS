#ifndef BATTLEHISTORY_H_INCLUDED
#define BATTLEHISTORY_H_INCLUDED
#include "Soldier.h"
#include "Archer.h"

class BattleHistory {
public:
    BattleHistory();                // Default to 5 rounds
    BattleHistory(int rounds);     // Custom number of rounds
    ~BattleHistory();

    void simulate();               // Run battle and record attacks
    int soldierAttackAt(int i);
    int archerAttackAt(int i);
    int getRoundCount();

private:
    int roundCount;
    int* soldierLog;               // Dynamic array for attack logs
    int* archerLog;
    Soldier s1;
    Archer a1;
};

#endif // BATTLEHISTORY_H_INCLUDED

#include <iostream>
#include "BattleHistory.h"

int main()
{
    BattleHistory bh(5);
    bh.simulate();

    std::cout << "Soldier Attacks: ";
    for (int i = 0; i < bh.getRoundCount(); i++)
        std::cout << bh.soldierAttackAt(i) << " ";

    std::cout << "\nArcher Attacks: ";
    for (int i = 0; i < bh.getRoundCount(); i++)
        std::cout << bh.archerAttackAt(i) << " ";
}

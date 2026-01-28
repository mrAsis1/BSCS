#include <iostream>
#include "Warrior.h"
#include "Mage.h"
#include "Archer.h"

using namespace std;

void battle(GameCharacter* a, GameCharacter* b);

int main()
{
    GameCharacter* warrior = new Warrior("Thorin");
    GameCharacter* mage = new Mage("Gandalf");
    GameCharacter* archer = new Archer("Legolas");


    battle(warrior, mage);


    vector<GameCharacter*> enemies = { mage, archer };
    static_cast<Warrior*>(warrior)->attack(enemies);

    delete warrior;
    delete mage;
    delete archer;

    return 0;
}

void battle(GameCharacter* a, GameCharacter* b)
{
    cout << "\n--- BATTLE START ---\n";
    while (a->isAlive() && b->isAlive())
    {
        a->attack(b);
        if (b->isAlive())
            b->attack(a);
    }
    cout << "\n--- BATTLE END ---\n";
    if (a->isAlive())
        cout << a->getName() << " wins!\n";
    else
        cout << b->getName() << " wins!\n";
}

#include <bits/stdc++.h>
using namespace std;

class Warrior
{
private:
    int maxAttack;
    int maxBlock;

public:
    string name;
    int health;
    Warrior() {}
    Warrior(string name, int health, int maxAttack, int maxBlock)
    {
        this->name = name;
        this->health = health;
        this->maxAttack = maxAttack;
        this->maxBlock = maxBlock;
    }

    int attack()
    {
        return rand() % (maxAttack + 1);
    }

    int block()
    {
        return rand() % (maxBlock + 1);
    }
};

class Battle
{
private:
    static void printResult(Warrior warrior1, Warrior warrior2)
    {
        Warrior winner, loser;
        if (warrior1.health == 0)
        {
            loser = warrior1;
            winner = warrior2;
        }
        else
        {
            loser = warrior2;
            winner = warrior1;
        }
        cout << loser.name << " has Died and " << winner.name << " is Victorious" << endl
             << "Game Over" << endl;
    }

public:
    static void startFight(Warrior &warrior1, Warrior &warrior2)
    {
        while (warrior1.health > 0 && warrior2.health > 0)
        {
            Warrior *w1, *w2;
            bool w1AttackW2 = rand() % 2 == 0;
            if (w1AttackW2)
            {
                w1 = &warrior1;
                w2 = &warrior2;
            }
            else
            {
                w2 = &warrior1;
                w1 = &warrior2;
            }
            int attack = w1->attack();
            int block = w2->block();

            int damage = attack - block;
            if (damage > 0)
            {
                w2->health -= damage;
                if (w2->health < 0)
                {
                    damage += w2->health;
                    w2->health = 0;
                }
            }
            else
            {
                damage = 0;
            }
            cout << w1->name << " attacks " << w2->name << " and deals " << damage << " damage" << endl;
            cout << w2->name << " is down to " << w2->health << " health" << endl;
        }
        printResult(warrior1, warrior2);
    }
};

int main()
{
    srand(time(NULL));
    Warrior thor("Thor", 100, 30, 15);
    Warrior hulk("Hulk", 135, 23, 10);

    Battle::startFight(thor, hulk);
    return 0;
}
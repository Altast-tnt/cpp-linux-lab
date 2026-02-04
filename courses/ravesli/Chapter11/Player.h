#pragma once
#include <string>
#include "Creature.h"

class Player : public Creature
{
private:
    int m_level;
public:
    Player(std::string name, char c = '@', int health = 10, int damage = 1, int gold = 0)
        : Creature(name, c, health, damage, gold), m_level(1)
    {
    }

    int getLevel() const {return m_level;}
    void levelUp();
    bool hasWon();
};

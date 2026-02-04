#include "Creature.h"

void Creature::reduceHealth(int reducePoints)
{
    m_healthPoints -= reducePoints;
}
bool Creature::isDead()
{
    return m_healthPoints < 0;
}
void Creature::addGold(int addGoldPoints)
{
    m_goldPoints += addGoldPoints;
}

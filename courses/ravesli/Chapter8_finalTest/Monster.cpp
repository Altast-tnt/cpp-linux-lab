#include <iostream>
#include <string>
#include "Monster.h"


std::string Monster::getTypeString(MonsterType type) const
{
    switch(type)
    {
        case Monster::Dragon:   return "dragon";
        case Monster::Goblin:   return "goblin";
        case Monster::Ogre:     return "ogre";
        case Monster::Orc:      return "orc";
        case Monster::Skeleton: return "skeleton";
        case Monster::Troll:    return "troll";
        case Monster::Vampire:  return "vampire";
        case Monster::Zombie:   return "zombie";
        default:               return "Undefined monster type!";
    }
}

void Monster::print() const
{
    std::cout << m_name << " is the " << getTypeString(m_type) << " that has " << m_health << " health points.\n";
}

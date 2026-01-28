#pragma once
#include <string>

class Monster
{
public:
    enum MonsterType
    {
        Dragon,
        Goblin,
        Ogre,
        Orc,
        Skeleton,
        Troll,
        Vampire,
        Zombie,
        MAX_MONSTER_TYPES,
    };

private:
    MonsterType m_type;
    std::string m_name;
    int m_health;
public:
    Monster(MonsterType type, std::string name, int health) : m_type(type), m_name(name), m_health(health)
    {}

    std::string getTypeString(MonsterType type) const;
    void print() const;
};

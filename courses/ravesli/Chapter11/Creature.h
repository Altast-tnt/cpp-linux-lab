#pragma once
#include <string>

class Creature
{
protected:
    std::string m_name;
    char m_char;
    int m_healthPoints, m_damagePoints, m_goldPoints;

public:
    Creature(std::string name, char c, int health, int damage, int gold)
        : m_name(name), m_char(c), m_healthPoints(health), m_damagePoints(damage), m_goldPoints(gold)
    {
    }

    std::string getName() const {return m_name;}
    char getChar() const {return m_char;}
    int getHealth() const {return m_healthPoints;}
    int getDamage() const {return m_damagePoints;}
    int getGold() const {return m_goldPoints;}

    void reduceHealth(int);
    bool isDead();
    void addGold(int);

};

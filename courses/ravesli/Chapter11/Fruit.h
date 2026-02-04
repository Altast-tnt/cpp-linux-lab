#pragma once
#include <string>

class Fruit
{
private:
    std::string m_name, m_color;
public:
    Fruit(std::string name, std::string color) : m_name(name), m_color(color)
    {
    }

    std::string getName() const
    {
        return m_name;
    }

    std::string getColor() const
    {
        return m_color;
    }
};

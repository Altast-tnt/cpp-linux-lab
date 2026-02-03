#pragma once
#include "Fruit.h"
#include <iostream>

class Apple : public Fruit
{
private:
    double m_fiber;
public:
    Apple(std::string name, std::string color, double fiber) : Fruit(name, color), m_fiber(fiber)
    {
    }

    double getFiber() const
    {
        return m_fiber;
    }

    friend std::ostream& operator<<(std::ostream &out, const Apple& appl)
    {
        out << "Apple(" << appl.getName() << ", " << appl.getColor() << ", " << appl.getFiber() << ")\n";
        return out;
    }
};

#pragma once
#include "Fruit.h"
#include <iostream>

class Apple : public Fruit
{
//private:
//    double m_fiber;
protected:
    Apple(std::string name, std::string color) : Fruit(name, color)
    {
    }

public:
    Apple(std::string color = "red") : Fruit("apple", color)
    {
    }

//    double getFiber() const
//    {
//        return m_fiber;
//    }

//    friend std::ostream& operator<<(std::ostream &out, const Apple& appl)
//    {
//        out << "Apple(" << appl.getName() << ", " << appl.getColor() << ", " << appl.getFiber() << ")\n";
//        return out;
//    }
};

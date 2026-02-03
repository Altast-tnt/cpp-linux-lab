#pragma once
#include "Fruit.h"
#include <iostream>

class Banana : public Fruit
{
public:
    Banana(std::string name, std::string color) : Fruit(name, color)
    {
    }

    friend std::ostream& operator<<(std::ostream &out, const Banana& banan)
    {
        out << "Banana(" << banan.getName() << ", " << banan.getColor() << ")\n";
        return out;
    }
};

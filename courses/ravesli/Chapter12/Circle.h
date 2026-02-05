#pragma once
#include "Shape.h"
#include "Point.h"
#include <iostream>


class Circle : public Shape
{
private:
    Point m_pointCenter;
    int m_radius;
public:
    Circle(const Point &center, int radius=0) : m_pointCenter(center), m_radius(radius)
    {
    }
    virtual std::ostream& print(std::ostream& out) const override
    {
        out << "Circle(" << m_pointCenter << ", radius " << m_radius << ")";
        return out;
    }

    int getRadius() const { return m_radius; }
};

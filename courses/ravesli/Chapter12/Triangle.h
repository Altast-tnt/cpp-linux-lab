#pragma once
#include "Shape.h"
#include "Point.h"
#include <iostream>

class Triangle : public Shape
{
private:
    Point m_pointA, m_pointB, m_pointC;
public:
    Triangle(const Point &p1, const Point &p2, const Point &p3)
        : m_pointA(p1), m_pointB(p2), m_pointC(p3)
    {
    }

    virtual std::ostream& print(std::ostream& out) const override
    {
        out << "Triangle(" << m_pointA << ", " << m_pointB << ", " << m_pointC << ")";
        return out;
    }
};

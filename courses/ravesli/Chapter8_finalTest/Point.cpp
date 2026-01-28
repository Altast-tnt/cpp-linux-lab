#include <iostream>
#include <cmath>
#include "Point.h"

void Point::print() const
{
    std::cout << "Point(" << m_a << ", " << m_b << ")\n";
}

double distanceFrom(const Point& p1, const Point& p2)
{
    return sqrt((p1.m_a - p2.m_a) * (p1.m_a - p2.m_a) + (p1.m_b - p2.m_b) * (p1.m_b - p2.m_b));
}

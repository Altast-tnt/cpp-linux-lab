#pragma once

class Point
{
private:
    double m_a, m_b;

public:
    Point(double a = 0.0, double b = 0.0) : m_a(a), m_b(b) { }

    void print() const;
    friend double distanceFrom(const Point& p1, const Point& p2);
};

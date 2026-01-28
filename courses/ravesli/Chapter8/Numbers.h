#pragma once

class Numbers
{
    double m_a;
    double m_b;
    double m_c;
public:
    void setValues(double a, double b, double c);
    void print();
    bool isEqual(Numbers point);
};

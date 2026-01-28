#include <iostream>
#include "Numbers.h"

void Numbers::setValues(double a, double b, double c)
{
    m_a = a;
    m_b = b;
    m_c = c;
}

void Numbers::print()
{
    std::cout << "First number is " << m_a << ". Second number is " << m_b << ". Third Number is " << m_c << ".\n";
}

bool Numbers::isEqual(Numbers point)
{
    return (m_a == point.m_a && m_b == point.m_b && m_c == point.m_c);
}

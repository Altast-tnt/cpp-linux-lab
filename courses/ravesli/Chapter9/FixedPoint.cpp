#include "FixedPoint.h"
#include <iostream>
#include <cmath>

FixedPoint::FixedPoint(int16_t val, int8_t frac) : m_val(val), m_frac(frac)
{
    if (m_val < 0 && m_frac > 0) m_frac = -m_frac;
}

FixedPoint::FixedPoint(double num)
{
    m_val = static_cast<int16_t>(num);
    m_frac = static_cast<int8_t>(std::round((num - m_val) * 100));
}

std::ostream& operator<<(std::ostream &out, const FixedPoint &fi)
{

    out << static_cast<double>(fi);
    return out;
}

FixedPoint operator+(const FixedPoint &f1, const FixedPoint &f2)
{
    return FixedPoint(static_cast<double>(f1) + static_cast<double>(f2));
}


FixedPoint::operator double() const
{
    return static_cast<double>(m_val) + (static_cast<double>(m_frac) / 100.0);
}

FixedPoint FixedPoint::operator-()
{
    return FixedPoint(
        static_cast<int16_t>(-m_val),
        static_cast<int8_t>(-m_frac)
    );
}

std::istream& operator>>(std::istream &in, FixedPoint &fi)
{
    double d;
    if (in >> d)
    {
        fi = FixedPoint(d);
    }
    return in;
}

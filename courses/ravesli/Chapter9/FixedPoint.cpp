#include "FixedPoint.h"
#include <iostream>
#include <cmath>

FixedPoint::FixedPoint(int16_t val, int8_t frac)
{

    if (val > 0 && frac < 0)
    {
        m_val = -val;
        m_frac = frac;
    } else if (val < 0 && frac > 0)
    {
        m_val = val;
        m_frac = -frac;
    } else
    {
        m_val = val;
        m_frac = frac;
    }
}

FixedPoint::FixedPoint(double num)
{
    m_val = static_cast<int16_t>(num);
    m_frac = static_cast<int8_t>(std::round((num - m_val) * 100));
}

std::ostream& operator<<(std::ostream &out, FixedPoint &fi)
{

    out << static_cast<double>(fi);
    return out;
}


FixedPoint::operator double() const
{
    return static_cast<double>(m_val) + (static_cast<double>(m_frac) / 100.0);
}

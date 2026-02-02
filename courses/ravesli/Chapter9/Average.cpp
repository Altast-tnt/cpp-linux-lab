#include <iostream>
#include "Average.h"

Average& Average::operator+=(int a)
{
    m_sum += a;
    ++m_count;
    return *this;
}

std::ostream& operator<<(std::ostream& out, Average& av)
{
    out << av.m_sum / av.m_count;
    return out;
}

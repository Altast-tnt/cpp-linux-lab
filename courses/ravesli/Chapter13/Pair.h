#pragma once

template <class T, class T1>
class Pair
{
private:
    T m_a;
    T1 m_b;
public:
    Pair(const T &a, const T1 &b) : m_a(a), m_b(b)
    {
    }
    const T& first() const { return m_a; }
    const T1& second() const { return m_b; }

};


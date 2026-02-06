#pragma once
#include <iostream>

template <class T>
class Pair1
{
private:
    T m_a, m_b;
public:
    Pair1(const T &a, const T &b) : m_a(a), m_b(b)
    {
    }
    const T& first() const { return m_a; }
    const T& second() const { return m_b; }


};

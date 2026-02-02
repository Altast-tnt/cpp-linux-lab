#include "IntArray.h"
#include <cassert>

IntArray::IntArray(int len) : m_length(len)
{
    assert(len > 0);
    m_massive = new int[len] { 0 };
}

IntArray::IntArray(const IntArray &copy) : m_length(copy.m_length)
{
    m_massive = new int[m_length];
    for (int i = 0; i < m_length; ++i)
    {
        m_massive[i] = copy.m_massive[i];
    }
}

IntArray& IntArray::operator=(const IntArray &arr)
{
    if (this == &arr)
    {
        return *this;
    }

    delete[] m_massive;

    m_length = arr.m_length;
    m_massive = new int[m_length];

    for (int i = 0; i < m_length; ++i)
    {
        m_massive[i] = arr.m_massive[i];
    }
    return *this;
}

int& IntArray::operator[](int a)
{
    assert(a >= 0 && a < m_length);
    return m_massive[a];
}

std::ostream& operator<<(std::ostream& out, IntArray &a)
{
    for (int i = 0; i < a.m_length; ++i)
    {
        out << a.m_massive[i] << " ";
    }
    return out;
}

IntArray::~IntArray()
{
    delete[] m_massive;
}


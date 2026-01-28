#include <iostream>
#include <cassert>
#include "Stack.h"

void Stack::reset()
{
    m_lengthStack = 0;
    for (int i = 0; i < 10; ++i)
    {
        m_massive[i] = 0;
    }
}

bool Stack::push (int a)
{
    if (m_lengthStack == 10)
        return false;

    m_massive[m_lengthStack++] = a;
    return true;
}

int Stack::pop()
{
    assert (m_lengthStack > 0);
    return m_massive[--m_lengthStack];
}

void Stack::print()
{
    std::cout << "(";
    for (int i = 0; i < m_lengthStack; ++i)
			std::cout << m_massive[i] << ' ';
    std::cout << ")\n";
}

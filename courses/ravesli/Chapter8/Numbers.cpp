#include <iostream>
#include "Numbers.h"

void Numbers::set(int x, int y)
{
    m_numF = x;
    m_numS = y;
}

void Numbers::print()
{
    std::cout << "First number is " << m_numF << ". Second number is " << m_numS << ".\n";
}

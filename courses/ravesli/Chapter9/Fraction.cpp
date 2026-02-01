#include <iostream>
#include "Fraction.h"

int Fraction::nod(int a, int b) {
    return (b == 0) ? (a > 0 ? a : -a) : nod(b, a % b);
}

void Fraction::reduce()
{
    int nodNum = nod(m_numenator, m_denominator);
    m_numenator /= nodNum;
    m_denominator /= nodNum;
}

void Fraction::print() const
{
    std::cout << m_numenator << "/" << m_denominator << '\n';
}

Fraction operator*(const Fraction &f1, int num)
{
    return Fraction(f1.m_numenator * num, f1.m_denominator);
}

Fraction operator*(int num, const Fraction &f1)
{
    return Fraction(f1.m_numenator * num, f1.m_denominator);
}

Fraction operator*(const Fraction &f1, const Fraction &f2)
{
    return Fraction(f1.m_numenator * f2.m_numenator, f1.m_denominator * f2.m_denominator);
}





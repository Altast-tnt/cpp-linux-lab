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


std::ostream& operator<<(std::ostream& out, const Fraction &f)
{
    out << f.m_numenator << '/' << f.m_denominator;
    return out;
}
std::istream& operator>>(std::istream& in, Fraction &f)
{
    char c;

	in >> f.m_numenator;
	in >> c;
	in >> f.m_denominator;

	f.reduce();
    return in;
}




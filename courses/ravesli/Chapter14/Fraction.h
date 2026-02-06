#pragma once
#include <exception>
#include <iostream>

class Fraction
{
private:
    int m_numerator, m_denominator;
public:
    Fraction(int numerator, int denominator) : m_numerator(numerator), m_denominator(denominator)
    {
       if (denominator == 0)
            throw std::runtime_error("invalid denominator.");
    }

    friend std::ostream& operator<<(std::ostream& out, const Fraction &f1);

};

std::ostream& operator<<(std::ostream& out, const Fraction &f1)
{
	out << f1.m_numerator << "/" << f1.m_denominator;
	return out;
}

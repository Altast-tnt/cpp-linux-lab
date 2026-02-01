#pragma once

class Fraction
{
private:
    int m_numenator, m_denominator;

public:
    Fraction(int numenator = 0, int denominator = 1) : m_numenator(numenator), m_denominator(denominator)
    {
        reduce();
    }

    void print() const;

    friend Fraction operator*(const Fraction &f1, int num);
    friend Fraction operator*(int num, const Fraction &f1);
    friend Fraction operator*(const Fraction &f1, const Fraction &f2);

    int nod(int a, int b);
    void reduce();
};

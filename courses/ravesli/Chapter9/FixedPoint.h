#pragma once
#include <cinttypes>
#include <iostream>
class FixedPoint
{
private:
    int16_t m_val;
    int8_t m_frac;

public:
    FixedPoint(int16_t val, int8_t frac);
    FixedPoint(double num);

    operator double() const;
    FixedPoint operator-();

    friend FixedPoint operator+ (const FixedPoint &f1, const FixedPoint &f2);
    friend std::ostream& operator<<(std::ostream &out, const FixedPoint &fi);
    friend std::istream& operator>>(std::istream &in, FixedPoint &fi);



};

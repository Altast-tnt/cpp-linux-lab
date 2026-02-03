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


    friend std::ostream& operator<<(std::ostream &out, FixedPoint &fi);

};

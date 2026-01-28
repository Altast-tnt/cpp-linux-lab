#pragma once
#include <string>

class Ball
{
private:
    std::string m_color;
    double m_radius;

public:
    Ball(double radius)
    {
        m_color = "Red";
        m_radius = radius;
    }
    Ball(const std::string &color = "Red", double radius = 20.0)
    {
        m_color = color;
        m_radius = radius;
    }


    void print();
};

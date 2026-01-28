#pragma once
#include <array>

class Stack
{
    int m_massive[10];
    int m_lengthStack;

public:
    void reset();
    bool push(int a);
    int pop();
    void print();
};

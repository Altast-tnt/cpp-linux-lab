#pragma once
#include <iostream>

class IntArray
{
private:
    int m_length;
    int* m_massive;

public:
    IntArray(int len);
    IntArray(const IntArray &copy);

    IntArray& operator=(const IntArray &arr);
    int& operator[](int a);

    ~IntArray();
    friend std::ostream& operator<<(std::ostream& out, IntArray &a);
};

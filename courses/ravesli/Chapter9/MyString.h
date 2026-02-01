#pragma once
#include <string>

class MyString
{
private:
    std::string m_str;
public:
    MyString(std::string str = "Hello!") : m_str(str)
    {}

    std::string operator()(int index, int len);
};

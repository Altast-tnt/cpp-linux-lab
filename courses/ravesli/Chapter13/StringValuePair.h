#pragma once
#include "Pair.h"
#include <string>

template <class T>
class StringValuePair : public Pair<std::string, T>
{
public:
    StringValuePair(const std::string &str, const T& smth) : Pair<std::string, T>(str, smth)
    {
    }

};

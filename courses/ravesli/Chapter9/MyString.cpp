#include "MyString.h"
#include <string>

std::string MyString::operator()(int index, int len)
{
    if (index < 0 || index >= static_cast<int>(m_str.length()))
        return "";

    return m_str.substr(index, len);
}

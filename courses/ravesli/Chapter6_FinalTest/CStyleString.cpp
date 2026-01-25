#include <iostream>
#include <cstring>


void printStringByWord(const char *stroke)
{
    while (*stroke != '\0')
    {
        std::cout << *stroke;
        ++stroke;
    }

}



#include <iostream>

void printAsci()
{
    char alph = 'a';
    while (alph <= 'z')
    {
        std::cout << alph << " " << static_cast<int>(alph) << "\n";
        ++alph;
    }
}

void printIncludeWhile()
{
    int outer = 1;
    while (outer <= 5)
    {
        int inner = 5;
        while (inner >= 1)
        {
            if (inner <= outer)
            {
                std::cout << inner << " ";
            } else
            {
                std::cout << " ";
            }
            --inner;
        }

        // Вставляем символ новой строки в конце каждого ряда
        std::cout << "\n";
        ++outer;
    }
}

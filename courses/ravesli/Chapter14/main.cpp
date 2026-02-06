#include <iostream>
#include "Fraction.h"

int main()
{
    int a, b;
    std::cout << "Enter the numerator: ";
    std::cin >> a;
    std::cout << "Enter the denominator: ";
    std::cin >> b;


    try
    {
        Fraction f {a, b};
        std::cout << "Your fraction is: " << f << '\n';
    } catch (std::exception &exeption)
    {
        std::cerr << "Your fraction has an " << exeption.what() << '\n';
    }

    return 0;
}

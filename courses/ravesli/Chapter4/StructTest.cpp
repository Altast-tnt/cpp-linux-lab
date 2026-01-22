#include <iostream>
#include "Advertising.h"
#include "Fraction.h"

Advertising inputValues()
{
    Advertising website;
    std::cout << "¬ведите количество объ€влений, показанных посетител€м: ";
    std::cin >> website.numAdverts;
    std::cout << "¬ведите процент посетителей: ";
    std::cin >> website.percentVisit;
    std::cout << "¬ведите средний заработок за нажатие: ";
    std::cin >> website.avgEarning;

    return website;
}

void calculateEarningPerDay(Advertising web)
{
    std::cout << "«аработок за день: " << web.avgEarning * web.numAdverts * web.percentVisit << std::endl;
}


Fraction inputFraction()
{
    Fraction frac;
    std::cout << "¬ведите числитель: ";
    std::cin >> frac.numerator;
    std::cout << "¬ведите знаменатель: ";
    std::cin >> frac.denominator;
    return frac;
}

void multiplyFractions(Fraction x, Fraction y)
{
    int newNumerator = x.numerator * y.numerator;
    int newDenominator = x.denominator * y.denominator;
    std::cout << "–езультат умножени€ двух дробей: " << static_cast<double>(newNumerator) / newDenominator << std::endl;
}

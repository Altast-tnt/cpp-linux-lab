#include <iostream>

int inputNumber()
{
    std::cout << "Write a number: ";
    int x;
    std::cin >> x;
    return x;
}

void isEven(int x)
{
    std::cout << std::boolalpha;
    if (x % 2 == 0)
    {
        std::cout << "Is number even - " << true << std::endl;
    } else
    {
       std::cout << "Is number even - " << false << std::endl;
    }
}

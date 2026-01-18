#include <iostream>

int inputNumber()
{
    int x(11);
    do
    {
        std::cout << "Write a prime number under 10: ";
        std::cin >> x;
    } while (x > 10);

    return x;
}

void isPrimeNumber(int x)
{
    if (x == 2 || x == 3 || x == 5 || x == 7)
    {
        std::cout << "The digit is prime" << std::endl;
    } else
    {
        std::cout << "The digit is not prime" << std::endl;
    }
}

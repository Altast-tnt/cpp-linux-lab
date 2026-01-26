#include <iostream>

int factorial(int x)
{
    if (x <= 1)
    {
        return 1;
    } else
    {
        return x * factorial(x-1);
    }
}

int sumNums(int x)
{
    if (x == 0)
    {
        return 0;
    } else
    {
        return (x % 10) + sumNums(x / 10);
    }
}

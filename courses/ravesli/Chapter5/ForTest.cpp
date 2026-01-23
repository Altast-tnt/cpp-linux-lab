#include <iostream>

void printsometh()
{
    for (int i = 2; i <= 20; i += 2)
    {
        std::cout << i << " ";
    }
}

void sumTo(int value)
{
    int sum {0};
    for (int i = 1; i <= value; ++i)
    {
        sum += i;
    }
    std::cout << sum;
}

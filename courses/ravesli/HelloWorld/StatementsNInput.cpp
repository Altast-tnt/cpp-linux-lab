#include <iostream>

void statements(int x)
{
    std::cout << "text + " << x << std::endl;
}

int userInput()
{
    int x;
    std::cout << "Write a num: ";
    std::cin >> x;
    return x;
}

int doubleNumber(int a)
{
    return a * 2;
}

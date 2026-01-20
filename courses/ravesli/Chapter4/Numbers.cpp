#include <iostream>

int inputNum()
{
    int x;
    std::cout << "Введите число: ";
    std::cin >> x;
    return x;
}

void printNums(int x, int y)
{
    if (x > y)
    {
        std::cout << "Меняем значения местами" << std::endl;
        int temp = x;
        x = y;
        y = temp;
    }
    std::cout << "Меньшее число: " << x << std::endl;
    std::cout << "Большее число: " << y << std::endl;
}

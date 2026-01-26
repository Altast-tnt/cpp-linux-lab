#include <iostream>
#include <limits>
#include <string>

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

int getNum()
{
    int n;
    std::cout << "Enter a number: ";
    while (true)
    {
        if(std::cin >> n && n > 0)
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return n;
        }
        std::cout << "getNum(): Invalid type of data or your number is under or equals 0\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

std::string convertToBit(int num)
{
    if (num == 0)
        return "";
    return convertToBit(num / 2) + std::to_string(num % 2);
}

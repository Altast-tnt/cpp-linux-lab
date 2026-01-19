#include <iostream>

double inputDouble()
{
    std::cout << "Enter a double: ";
    double x;
    std::cin >> x;
    return x;
}

char inputOperator()
{

    char operation{'a'};
    do
    {
        std::cout << "Enter one of the following: +, -, *, or /: ";
        std::cin >> operation;
    } while (operation != '+' && operation != '-' && operation != '*' && operation != '/');

    return operation;
}

void printAnswer(double x, double y, char operation)
{
    double answer;
    if (operation == '+')
    {
        answer = x + y;
    }
    else if (operation == '-')
    {
        answer = x - y;
    }
    else if (operation == '*')
    {
        answer = x * y;
    }
    else
    {
        answer = x / y;
    }
    std::cout << x << ' ' << operation << ' ' << y << " = " << answer << std::endl;
}

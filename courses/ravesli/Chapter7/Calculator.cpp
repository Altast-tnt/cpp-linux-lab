#include <iostream>
#include <limits>

typedef int (*arithmeticFcn)(int, int);

int getInt()
{
    int n;
    while (true)
    {
        std::cout << "Enter a number: ";
        if(std::cin >> n)
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return n;
        }
        std::cout << "getInt(): Incorrect type\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

char getOperation()
{
    char c;
    while (true)
    {
        std::cout << "Enter an operator (+, -, *, /): ";
        if (std::cin >> c && (c == '+' || c == '-' || c == '*' || c == '/'))
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return c;
        }
        std::cout << "getOperation(): Incorrect value - need + or - or * or / \n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

int add(int a, int b)
{
    return a + b;
}

int substract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

arithmeticFcn getArithmeticFcn(char operation)
{
    switch(operation)
    {
        case '+': return add;
        case '-': return substract;
        case '*': return multiply;
        case '/': return divide;
        default:  return add;
    }
}


void calculator()
{
    int a = getInt();
    int b = getInt();
    char operation = getOperation();
    // определяем по знаку какую функцию используем - getArithmeticFcn(operation); и вычисляем результат
    int result = (getArithmeticFcn(operation))(a, b);

    std::cout << "Result of " << a << " " << operation << " " << b << " = " << result << '\n';
}

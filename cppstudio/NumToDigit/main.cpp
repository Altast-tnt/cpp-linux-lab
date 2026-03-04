#include <iostream>
#include <limits>

int intInput()
{
    int n;
    while (true)
    {
        std::cout << "Введите пятизначное число: ";
        if (!(std::cin >> n))
        {
            std::cout << "intInput(): Неверный тип данных\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else if (n / 10000 == 0)
        {
            std::cout << "intInput(): Неверная разрядность числа\n";
        } else
        {
            return n;
        }
    }
}

int main()
{
    int n = intInput();
    int mask = 10000;
    for (int i = 1; i < 6; i++)
    {
        std::cout << i << " цифра равна " << n / mask << "\n";
        n %= mask;
        mask /= 10;
    }
    return 0;
}

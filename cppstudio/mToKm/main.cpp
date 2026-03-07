#include <iostream>
#include <limits>

float floatInput()
{
    float n;
    while (true)
    {
        std::cout << "Введите количество метров: ";
        if (!(std::cin >> n))
        {
            std::cout << "intInput(): Неверный тип данных\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else if (n < 0.0)
        {
            std::cout << "intInput(): число не должно быть отрицательным\n";
        } else
        {
            return n;
        }
    }
}


int main()
{
    float n = floatInput();
    std::cout << n << " метров будет " << n / 1000.0 << " километра";
    return 0;
}

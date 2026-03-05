#include <iostream>


int main()
{
    std::cout << "Введите цифры a, b и f:\n";
    std::cout << "a=";
    int a, b, f;
    std::cin >> a;
    std::cout << "b=";
    std::cin >> b;
    std::cout << "f=";
    std::cin >> f;
    std::cout << "Вычисляем по формуле: x=(a + b - f / a) + f * a * a - (a + b)\n";
    std:: cout << "x=" << (a + b - f / a) + f * a * a - (a + b);
    return 0;
}

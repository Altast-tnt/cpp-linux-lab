#include <iostream>

void changeInts(int &x, int &y)
{
    std::cout << "Before change - x: " << x << "; y: " << y << '\n';
    int temp = x;
    x = y;
    y = temp;
    std::cout << "After change - x: " << x << "; y: " << y << '\n';
}

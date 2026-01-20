#include <iostream>

unsigned int inputPositiveNumber()
{
    unsigned int x{256};
    do
    {
        std::cout << "Enter a number between 0 and 255: ";
        std::cin >> x;
    } while (x < 0 && x > 255);
    return x;
}

void convertToBinary(unsigned int x)
{

}

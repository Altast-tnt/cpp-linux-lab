#include <iostream>

namespace Animals
{
    enum Animal
    {
        CHICKEN,
        LION,
        GIRAFFE,
        ELEPHANT,
        DUCK,
        SNAKE,
        MAX_ANIMAL,
    };
}


int main()
{
    int animals[Animals::MAX_ANIMAL] {2, 4, 4, 4, 2, 0};
    std::cout << "The ELEPHANT has " << animals[3] << " legs.";
    double tempOfEveryDay[365] = {0.0};
    return 0;
}

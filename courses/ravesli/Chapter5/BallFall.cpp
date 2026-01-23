#include <iostream>
#include "MyConstants.h"

double printHeight()
{
    double height{-2.0};
    do
    {
        std::cout << "Enter the initial height of the tower in meters: ";
        std::cin >> height;
    } while (height < 0.0);

    return height;
}

void ballFallHeight(double initialHeight)
{
    double answer;
    for (int i = 0; i <= initialHeight; ++i)
    {
        answer = initialHeight - (myConstants::gravity * (i * i) / 2.0);
        if (answer > 0)
        {
            std::cout << "At " << i << " seconds, the ball is at height: " << answer << " meters" << std::endl;
        } else
        {
            std::cout << "At " << i << " seconds, the ball is on the ground." << std::endl;
            break;
        }
    }

}


#include <iostream>
#include <cstdlib>
#include <limits>

int selectRandNum(int minNum, int maxNum)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(std::rand() * fraction * (maxNum - minNum + 1) + minNum);
}

int getInt()
{
    while (true)
    {
        int n;
        std::cin >> n;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Oops, that input is invalid.  Please try again: ";
        } else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return n;
        }
    }
}

bool playSession(int randNum)
{
    const int numOfTries = 7;
    for (int i = 1; i <= numOfTries; ++i)
    {
        std::cout << "Guess #" << i << ": ";
        int num = getInt();

        if (num > randNum)
        {
            std::cout << "Your guess is too high.\n";
        } else if (num < randNum)
        {
            std::cout << "Your guess is too low.\n";
        } else
        {
            std::cout << "Correct! You win!\n";
            return true;
        }
    }

    std::cout << "Sorry, you lose. The correct number was " << randNum << ".\n";
    return false;
}

void game()
{
    while(true)
    {
        int randNum = selectRandNum(1, 100);
        std::cout << "Let's play a game. I'm thinking of a number (1-100). You have 7 tries to guess what it is.\n";
        playSession(randNum);

        char playAgain;
        do
        {
            std::cout << "Would you like to play again (y/n)? ";
            std::cin >> playAgain;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } while (playAgain != 'y' && playAgain != 'n');

        if (playAgain == 'n')
        {
            std::cout << "Thank you for playing.\n";
            break;
        }
    }
}

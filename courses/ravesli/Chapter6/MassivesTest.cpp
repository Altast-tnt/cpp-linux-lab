#include <iostream>
#include <limits>

int getInt()
{
    while (true)
    {
        std::cout << "Enter a number (1-9): ";
        int n;
        std::cin >> n;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Error getInt(): Enter a number!\n";
        } else if(n < 1 || n > 9)
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Enter a number from 1 to 9!\n";
        } else
        {
            return n;
        }
    }
}


void printMassivesElements(const int array[], int massiveLength)
{
    int userNum = getInt();
    for (int i = 0; i < massiveLength; ++i)
    {
        if (userNum == array[i])
        {
            std::cout << "The number you chose is on the " << i + 1 << " position in array.";
        }
    }
}

void printStudentScore(const int array[], int massiveLength)
{
    int maxIndex = 0;
    for (int student = 0; student < massiveLength; ++student)
    {
       if (array[student] > array[maxIndex])
        {
            maxIndex = student;
        }
    }

    std::cout << "The best score was " << array[maxIndex] << " on the " << maxIndex + 1 << " position in array\n";
}

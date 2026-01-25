#include <iostream>
#include <limits>
#include "StudentsStruct.h"

unsigned int getUInt()
{
    int n;
    while (true)
    {
        std::cout << "Enter a number of students do you want: ";
        if (std::cin >> n && n > 0)
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return static_cast<unsigned int>(n);
        }
        std::cout << "Error getUInt(): Incorrect type or your number is below or equals 0\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

}

unsigned short getUShortGrade(int i)
{
    short n;
    while (true)
    {
        std::cout << "Enter a grade of #" << i + 1 << " student (0-100): ";
        if (std::cin >> n && n >= 0 && n <= 100)
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return static_cast<unsigned short>(n);
        }
        std::cout << "Error getUShortGrade(): Incorrect type or your number is not in scope 0-100\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

std::string getString(int i)
{
    std::string s;
    while (true)
    {
        std::cout << "Enter a name of #" << i + 1 << " student: ";
        if (std::getline(std::cin, s))
        {
            if (!s.empty())
                return s;
        }
        std::cout << "Error getString(): Name cannot be empty\n";
        std::cin.clear();
    }
}

void sortArray(Student *const arrayStudents, unsigned int maxStudents)
{
    for (unsigned int startIndex = 0; startIndex < maxStudents - 1; ++startIndex)
    {
        auto bestIndex = startIndex;
        for (unsigned int currentIndex = startIndex + 1; currentIndex < maxStudents; ++currentIndex)
        {
            if(arrayStudents[bestIndex].grade < arrayStudents[currentIndex].grade)
            {
                bestIndex = currentIndex;
            }
        }
        std::swap(arrayStudents[startIndex], arrayStudents[bestIndex]);
    }
}

void getNameNGrade()
{
    unsigned int maxStudents = getUInt();
    Student *arrayStudents = new Student [maxStudents];

    for (unsigned int i = 0; i < maxStudents; ++i)
    {
        arrayStudents[i].name = getString(i);
        arrayStudents[i].grade = getUShortGrade(i);
    }

    sortArray(arrayStudents, maxStudents);

    for (unsigned int i = 0; i < maxStudents; ++i)
    {
        std::cout << arrayStudents[i].name << " got a grade of " << arrayStudents[i].grade << '\n';
    }

    delete[] arrayStudents;
    arrayStudents = nullptr;
}

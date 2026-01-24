#include <iostream>
#include <limits>
#include <algorithm>

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


void printMassivesElements(const int *array, int massiveLength)
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

void printStudentScore(const int *array, int massiveLength)
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


void sortMassive(int *array, int massiveLength)
{
    for (int endIndex = massiveLength - 1; endIndex > 0; --endIndex)
    {
        int smallestIndex = endIndex;
        for (int currentIndex = endIndex - 1; currentIndex >= 0; --currentIndex)
        {
            if (array[currentIndex] < array[smallestIndex])
            {
                 smallestIndex = currentIndex;
            }
        }
        std::swap(array[endIndex], array[smallestIndex]);
    }
    for (int i = 0; i < massiveLength; ++i)
        std::cout << array[i] << ' ';
}

void bubbleSortMassive(int *array, int massiveLength)
{
    for (int iteration = 0; iteration < massiveLength - 1; ++iteration)
    {
        bool swapped(false);
        for (int startIndex = 0; startIndex < massiveLength - 1 - iteration; ++startIndex)
        {
            if(array[startIndex] > array[startIndex + 1])
            {
                std::swap(array[startIndex], array[startIndex + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            std::cout << "Early termination on iteration: " << iteration + 1 << '\n';
            break;
        }
    }
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for (int i = 0; i < massiveLength; ++i)
    {
        std::cout << array[i] << ' ';
    }
}

void iterationArrayByPointer()
{
    const int arrayLength = 9;
	char name[arrayLength] = "Angelina";
	int numVowels(0);
	for (char *ptr = name; ptr < name + arrayLength; ++ptr)
	{
		switch (*ptr)
		{
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
			++numVowels;
		}
	}

	std::cout << name << " has " << numVowels << " vowels.\n";

}



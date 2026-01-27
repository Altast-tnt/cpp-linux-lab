#include <iostream>
#include <string>
#include "Calculator.h"
#include "Recursion.h"

int binarySearch(int *array, int target, int min, int max)
{
    while (min <= max)
    {
        int avg = min + (max - min) / 2;
        if (target > array[avg])
        {
            min = avg + 1;
        } else if (target < array[avg])
        {
            max = avg - 1;
        } else if (target == array[avg])
        {
            return avg;
        }
    }
    return -1;
}

int binarySearchRecursion(int *array, int target, int min, int max)
{
    if (min > max)
        return -1;
    int avg = min + (max - min) / 2;
    if (target == array[avg])
    {
        return avg;
    }
    return (target > array[avg]) ? binarySearch(array, target, avg+1, max) : binarySearch(array, target, min, avg-1);

    return -1;
}

int main(int argc, char *argv[])
{

    int array[] = { 4, 7, 9, 13, 15, 19, 22, 24, 28, 33, 37, 41, 43, 47, 50 };

	std::cout << "Enter a number: ";
	int x;
	std::cin >> x;

    int index = binarySearchRecursion(array, x, 0, 14);

	if (index != -1)
		std::cout << "Good! Your value " << x << " is on position "<< index << " in array!\n";
	else
		std::cout << "Fail! Your value " << x << " isn't in array!\n";


//    std::cout << "There are " << argc << " arguments:\n";
//
//    // Перебираем каждый аргумент и выводим его порядковый номер и значение
//    for (int count=0; count < argc; ++count)
//        std::cout << count << " " << argv[count] << '\n';

//    int num = getNum();
//    std::cout << convertToBit(num);


//    std::cout << sumNums(83569);
//    for (int count = 0; count < 8; ++count)
//		std::cout << factorial(count) << '\n';
//    calculator();
    return 0;
}

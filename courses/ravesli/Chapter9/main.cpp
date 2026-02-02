#include <iostream>
#include "Fraction.h"
#include "Something.h"
#include "GradeMap.h"
#include "MyString.h"
#include "Average.h"

int main()
{

    Average avg;

	avg += 5;
	std::cout << avg << '\n'; // 5 / 1 = 5

	avg += 9;
	std::cout << avg << '\n'; // (5 + 9) / 2 = 7

	avg += 19;
	std::cout << avg << '\n'; // (5 + 9 + 19) / 3 = 11

	avg += -9;
	std::cout << avg << '\n'; // (5 + 9 + 19 - 9) / 4 = 6

	(avg += 7) += 11; // выполнение цепочки операций
	std::cout << avg << '\n'; // (5 + 9 + 19 - 9 + 7 + 11) / 6 = 7

	Average copy = avg;
	std::cout << copy << '\n';

//    MyString string("Hello, world!");
//    std::cout << string(7, 6);

//    GradeMap grades;
//	grades["John"] = 'A';
//	grades["Martin"] = 'B';
//	std::cout << "John has a grade of " << grades["John"] << '\n';
//	std::cout << "Martin has a grade of " << grades["Martin"] << '\n';

//    Something something;
//
//	if (!something)
//		std::cout << "Something is null.\n";
//	else
//		std::cout << "Something is not null.\n";

//	Fraction f1;
//	std::cout << "Enter fraction 1: ";
//	std::cin >> f1;
//
//	Fraction f2;
//	std::cout << "Enter fraction 2: ";
//	std::cin >> f2;
//
//	std::cout << f1 << " * " << f2 << " is " << f1 * f2 << '\n';
    return 0;
}
